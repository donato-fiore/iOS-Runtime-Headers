// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCAMERASTREAMCONTROL_H
#define HMCAMERASTREAMCONTROL_H

@class HMFUnfairLock, NSString;
@protocol _HMCameraStreamControlDelegate, HMCameraStreamControlDelegate;


#import "HMCameraControl.h"
#import "HMCameraStream.h"
#import "_HMCameraStreamControl.h"

@interface HMCameraStreamControl : HMCameraControl <_HMCameraStreamControlDelegate>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, nonatomic) HMCameraStream *cameraStream;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMCameraStreamControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) _HMCameraStreamControl *streamControl; // ivar: _streamControl
@property (readonly, nonatomic) NSUInteger streamState;
@property (readonly) Class superclass;


-(id)initWithStreamControl:(id)arg0 ;
-(void)cameraStreamControl:(id)arg0 didStopStream:(id)arg1 ;
-(void)cameraStreamControlDidStartStream:(id)arg0 ;
-(void)startStream;
-(void)startStreamWithPreferences:(id)arg0 ;
-(void)stopStream;


@end


#endif