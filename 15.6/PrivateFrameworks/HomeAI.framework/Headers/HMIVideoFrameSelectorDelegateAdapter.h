// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOFRAMESELECTORDELEGATEADAPTER_H
#define HMIVIDEOFRAMESELECTORDELEGATEADAPTER_H

@class HMFObject;
@protocol HMIVideoFrameSelectorDelegate;



@interface HMIVideoFrameSelectorDelegateAdapter : HMFObject <HMIVideoFrameSelectorDelegate>



@property (copy) id *frameSelectorDidDetectMotion; // ivar: _frameSelectorDidDetectMotion
@property (copy) id *frameSelectorDidSelectFrame; // ivar: _frameSelectorDidSelectFrame
@property (copy) id *frameSelectorPrepareFrame; // ivar: _frameSelectorPrepareFrame


-(struct opaqueCMSampleBuffer *)frameSelector:(id)arg0 prepareFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)frameSelector:(id)arg0 didDetectMotion:(id)arg1 inFrame:(struct opaqueCMSampleBuffer *)arg2 ;
-(void)frameSelector:(id)arg0 didSelectFrame:(struct opaqueCMSampleBuffer *)arg1 motionDetections:(id)arg2 motionScore:(CGFloat)arg3 ;


@end


#endif