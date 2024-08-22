// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHEROANDCLIPDEFAULTSAMPLER_H
#define ATXHEROANDCLIPDEFAULTSAMPLER_H

@protocol ATXHeroAndClipEventSamplerProtocol;

#import <Foundation/Foundation.h>


@interface ATXHeroAndClipDefaultSampler : NSObject <ATXHeroAndClipEventSamplerProtocol>





-(BOOL)_isEventEligibleForSampling:(id)arg0 ;
-(id)sampleEvents:(id)arg0 numToSample:(NSUInteger)arg1 ;


@end


#endif