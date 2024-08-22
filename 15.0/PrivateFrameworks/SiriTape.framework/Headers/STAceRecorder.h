// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STACERECORDER_H
#define STACERECORDER_H

@class NSMutableDictionary, NSMutableArray;
@protocol STAceObjectHandler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STAceRecorder : NSObject <STAceObjectHandler>

 {
    NSMutableDictionary *_timestampToAceObjs;
    NSMutableArray *_speechLogs;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)_createDirectoryIfNeededWithBaseURL:(id)arg0 ;
-(id)_libraryURLWithBaseURL:(id)arg0 date:(id)arg1 fileName:(id)arg2 ;
-(id)init;
-(void)_finishRecording;
-(void)_startRecording;
-(void)handleClientCommand:(id)arg0 ;
-(void)handleServerCommand:(id)arg0 ;


@end


#endif