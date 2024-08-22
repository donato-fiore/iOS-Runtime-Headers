// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOFRAMESELECTORDELEGATEADAPTER_H
#define HMIVIDEOFRAMESELECTORDELEGATEADAPTER_H

@class HMFObject;
@protocol HMIVideoFrameSelectorDelegate;



@interface HMIVideoFrameSelectorDelegateAdapter : HMFObject <HMIVideoFrameSelectorDelegate>



@property (copy) id *frameSelectorDidSelectFrame; // ivar: _frameSelectorDidSelectFrame
@property (copy) id *frameSelectorDidSkipFrame; // ivar: _frameSelectorDidSkipFrame
@property (copy) id *frameSelectorPrepareFrame; // ivar: _frameSelectorPrepareFrame


-(struct opaqueCMSampleBuffer *)frameSelector:(id)arg0 prepareFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)frameSelector:(id)arg0 didSelectFrame:(struct opaqueCMSampleBuffer *)arg1 reference:(struct opaqueCMSampleBuffer *)arg2 ;
-(void)frameSelector:(id)arg0 didSkipFrame:(struct opaqueCMSampleBuffer *)arg1 ;


@end


#endif