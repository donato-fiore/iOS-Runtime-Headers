// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREFILEOUTPUTDELEGATEWRAPPER_H
#define AVCAPTUREFILEOUTPUTDELEGATEWRAPPER_H

@class NSArray, AVWeakReferencingDelegateStorage, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface AVCaptureFileOutputDelegateWrapper : NSObject

@property (readonly) NSArray *connections; // ivar: _connections
@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage; // ivar: _delegateStorage
@property (retain) NSArray *metadata; // ivar: _metadata
@property (retain) NSString *outputFileType; // ivar: _outputFileType
@property (readonly) NSURL *outputFileURL; // ivar: _outputFileURL
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic, getter=isRecording) BOOL recording; // ivar: _recording
@property (readonly) NSInteger settingsID; // ivar: _settingsID


+(id)wrapperWithURL:(id)arg0 delegate:(id)arg1 settingsID:(NSInteger)arg2 connections:(id)arg3 ;
-(id)initWithURL:(id)arg0 delegate:(id)arg1 settingsID:(NSInteger)arg2 connections:(id)arg3 ;
-(void)dealloc;


@end


#endif