// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEORETIMERDELEGATEADAPTER_H
#define HMIVIDEORETIMERDELEGATEADAPTER_H

@class HMFObject, NSString;
@protocol HMIVideoRetimerDelegate;



@interface HMIVideoRetimerDelegateAdapter : HMFObject <HMIVideoRetimerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *retimerDidRetimeSampleBuffer; // ivar: _retimerDidRetimeSampleBuffer
@property (readonly) Class superclass;


-(void)retimer:(id)arg0 didRetimeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;


@end


#endif