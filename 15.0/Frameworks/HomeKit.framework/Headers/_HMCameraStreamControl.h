// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HMCAMERASTREAMCONTROL_H
#define _HMCAMERASTREAMCONTROL_H

@class NSString;
@protocol HMFLogging, _HMCameraStreamControlDelegate;


#import "HMCameraControl.h"
#import "HMCameraStream.h"

@interface _HMCameraStreamControl : HMCameraControl <HMFLogging>



@property (readonly, nonatomic) HMCameraStream *cameraStream; // ivar: _cameraStream
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_HMCameraStreamControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *streamSessionID; // ivar: _streamSessionID
@property (nonatomic) NSUInteger streamState; // ivar: _streamState
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithCameraProfile:(id)arg0 service:(id)arg1 profileUniqueIdentifier:(id)arg2 ;
-(void)_callVideoStartedDelegate;
-(void)_callVideoStoppedDelegate:(id)arg0 ;
-(void)_handleNegotiateStreamResponse:(id)arg0 streamPreferences:(id)arg1 sessionID:(id)arg2 error:(id)arg3 ;
-(void)_handleVideoStopResponse:(id)arg0 error:(id)arg1 sessionID:(id)arg2 ;
-(void)_handleVideoStreamStartResponse:(id)arg0 streamPreferences:(id)arg1 error:(id)arg2 sessionID:(id)arg3 ;
-(void)_handleVideoStreamStopped:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_resetState:(id)arg0 ;
-(void)_startStreamWithPreferences:(id)arg0 ;
-(void)_stopStream;
-(void)dealloc;
-(void)startStreamWithPreferences:(id)arg0 ;
-(void)stopStream;


@end


#endif