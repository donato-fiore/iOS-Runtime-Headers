// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFUIDEBUGLOGMANAGER_H
#define AFUIDEBUGLOGMANAGER_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFUIDebugLogManager : NSObject

@property (readonly, copy, nonatomic, getter=_baseLogDirectoryURL) NSURL *baseLogDirectoryURL;
@property (readonly, nonatomic, getter=_queue) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic, getter=_siriLogDirectoryURL) NSURL *siriLogDirectoryURL;


+(int)executeSystemCommand:(id)arg0 stdoutTo:(id)arg1 ;
-(id)_archiveLogDirectoryAtURL:(id)arg0 name:(id)arg1 error:(*id)arg2 ;
-(id)_captureLogsInDirectoryAtURL:(id)arg0 matchingPattern:(id)arg1 withMimeType:(id)arg2 attemptCompression:(BOOL)arg3 limit:(NSInteger)arg4 error:(*id)arg5 ;
-(id)_contentsOfDirectoryAtURL:(id)arg0 matchingPattern:(id)arg1 includingPropertiesForKeys:(id)arg2 error:(*id)arg3 ;
-(id)_contentsOfDirectoryAtURL:(id)arg0 matchingPattern:(id)arg1 sortedByDateWithResourceKey:(id)arg2 error:(*id)arg3 ;
-(id)_siriCardLogDirectoryURL;
-(id)_uniqueTemporaryFileURL;
-(id)init;
-(void)_captureFileAtURL:(id)arg0 completion:(id)arg1 ;
-(void)_captureLogsAtURL:(id)arg0 logName:(id)arg1 sinceTime:(CGFloat)arg2 completion:(id)arg3 ;
-(void)_captureLogsAtURL:(id)arg0 logName:(id)arg1 sinceTime:(CGFloat)arg2 pattern:(id)arg3 mimeType:(id)arg4 completion:(id)arg5 ;
-(void)captureCardLogsSinceTime:(CGFloat)arg0 completion:(id)arg1 ;
-(void)capturePreviousConversationWithCompletion:(id)arg0 ;
-(void)captureSiriSpeechLogsWithCompletion:(id)arg0 ;
-(void)captureSiriTTSAudioWithCompletion:(id)arg0 ;
-(void)captureSiriVoiceTriggerLogsWithCompletion:(id)arg0 ;
-(void)captureViewHierarchyLogWithDefaultViewHierarchy:(id)arg0 completion:(id)arg1 ;


@end


#endif