// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLOGEVENTHISTOGRAMS_H
#define HMDLOGEVENTHISTOGRAMS_H

@class HMFObject;



@interface HMDLogEventHistograms : HMFObject



+(id)configurationDataHistogram;
+(id)fileSizeHistogram;
+(id)highVolumeHistogram;
+(id)latencyHistogram;
+(id)lowVolumeHistogram;
+(id)memoryHistogram;
+(id)successRateHistogram;
+(void)initialize;


@end


#endif