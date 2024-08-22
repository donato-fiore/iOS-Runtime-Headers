// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOFRAMESAMPLERDELEGATEADAPTER_H
#define HMIVIDEOFRAMESAMPLERDELEGATEADAPTER_H

@class HMFObject, NSString;
@protocol HMIVideoFrameSamplerDelegate;



@interface HMIVideoFrameSamplerDelegateAdapter : HMFObject <HMIVideoFrameSamplerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *frameSamplerDidDropFrame; // ivar: _frameSamplerDidDropFrame
@property (copy) id *frameSamplerDidSampleFrame; // ivar: _frameSamplerDidSampleFrame
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)frameSampler:(id)arg0 didDropFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)frameSampler:(id)arg0 didSampleFrame:(struct opaqueCMSampleBuffer *)arg1 ;


@end


#endif