// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOFRAMETRACKERDELEGATEADAPTER_H
#define HMIVIDEOFRAMETRACKERDELEGATEADAPTER_H

@class HMFObject;
@protocol HMIVideoFrameTrackerDelegate;



@interface HMIVideoFrameTrackerDelegateAdapter : HMFObject <HMIVideoFrameTrackerDelegate>



@property (copy) id *frameTrackerDidTrackFrame; // ivar: _frameTrackerDidTrackFrame


-(void)frameTracker:(id)arg0 didTrackFrame:(struct opaqueCMSampleBuffer *)arg1 background:(struct opaqueCMSampleBuffer *)arg2 motionDetections:(id)arg3 tracks:(id)arg4 ;


@end


#endif