// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOFRAMESAMPLER_H
#define HMIVIDEOFRAMESAMPLER_H

@class NSString;
@protocol HMFLogging, HMIVideoFrameSamplerDelegate;


#import "HMIVideoProcessingNode.h"

@interface HMIVideoFrameSampler : HMIVideoProcessingNode <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoFrameSamplerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif