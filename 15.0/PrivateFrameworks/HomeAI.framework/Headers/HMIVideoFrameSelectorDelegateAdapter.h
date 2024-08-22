// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOFRAMESELECTORDELEGATEADAPTER_H
#define HMIVIDEOFRAMESELECTORDELEGATEADAPTER_H

@class HMFObject;
@protocol HMIVideoFrameSelectorDelegate;



@interface HMIVideoFrameSelectorDelegateAdapter : HMFObject <HMIVideoFrameSelectorDelegate>



@property (copy) id *frameSelectorDidDetectMotion; // ivar: _frameSelectorDidDetectMotion
@property (copy) id *frameSelectorDidSelectFrame; // ivar: _frameSelectorDidSelectFrame


-(void)frameSelector:(id)arg0 didDetectMotion:(id)arg1 inFrame:(struct opaqueCMSampleBuffer *)arg2 ;
-(void)frameSelector:(id)arg0 didSelectFrame:(struct opaqueCMSampleBuffer *)arg1 motionDetections:(id)arg2 motionScore:(CGFloat)arg3 ;


@end


#endif