// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMCAMERASTREAMCONTROL_H
#define _HMCAMERASTREAMCONTROL_H

@class NSString;
@protocol HMFLogging, _HMCameraStreamControlDelegate;


#import "HMCameraControl.h"
#import "HMCameraStream.h"

@interface _HMCameraStreamControl : HMCameraControl <HMFLogging>



@property (readonly) HMCameraStream *cameraStream; // ivar: _cameraStream
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_HMCameraStreamControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *streamSessionID; // ivar: _streamSessionID
@property NSUInteger streamState; // ivar: _streamState
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithCameraProfile:(id)arg0 profileUniqueIdentifier:(id)arg1 ;
-(void)_callVideoStartedDelegate;
-(void)_callVideoStoppedDelegate:(id)arg0 ;
-(void)_handleStreamStartedWithResponse:(id)arg0 sessionID:(id)arg1 error:(id)arg2 ;
-(void)_handleVideoStopResponse:(id)arg0 error:(id)arg1 sessionID:(id)arg2 ;
-(void)_handleVideoStreamStopped:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)_resetStateWithError:(id)arg0 ;
-(void)dealloc;
-(void)startStreamWithPreferences:(id)arg0 ;
-(void)stopStream;


@end


#endif