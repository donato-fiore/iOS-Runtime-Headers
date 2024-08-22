// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASTREAMSNAPSHOTCAPTURE_H
#define HMDCAMERASTREAMSNAPSHOTCAPTURE_H

@class HMFObject, HMFTimer, NSString;
@protocol HMDVideoStreamLastDecodedFrameDelegate, HMFTimerDelegate, HMFLogging, OS_dispatch_queue, HMDCameraStreamSnapshotCaptureDelegate;


#import "HMDCameraStreamSessionID.h"
#import "HMDVideoStreamInterface.h"

@interface HMDCameraStreamSnapshotCapture : HMFObject <HMDVideoStreamLastDecodedFrameDelegate, HMFTimerDelegate, HMFLogging>

 {
    BOOL _capturingLastFrame;
    BOOL _capturingCurrentFrame;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMDCameraStreamSnapshotCaptureDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDCameraStreamSessionID *_streamSessionID;
    HMFTimer *_lastDecodedFrameTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMDVideoStreamInterface *videoStreamInterface; // ivar: _videoStreamInterface


+(id)logCategory;
-(id)initWithWorkQueue:(id)arg0 videoStreamInterface:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id)logIdentifier;
-(void)captureCurrentFrame;
-(void)captureLastFrame;
-(void)timerDidFire:(id)arg0 ;
-(void)videoStream:(id)arg0 didGetLastDecodedFrame:(id)arg1 ;


@end


#endif