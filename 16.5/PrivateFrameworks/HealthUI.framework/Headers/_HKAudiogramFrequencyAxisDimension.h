// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKAUDIOGRAMFREQUENCYAXISDIMENSION_H
#define _HKAUDIOGRAMFREQUENCYAXISDIMENSION_H

@protocol HKAxisLabelDimension;

#import <Foundation/Foundation.h>


@interface _HKAudiogramFrequencyAxisDimension : NSObject <HKAxisLabelDimension>





-(CGFloat)niceStepSizeLargerThan:(CGFloat)arg0 ;
-(CGFloat)ticksPerStepSize:(CGFloat)arg0 ;
-(id)endingLabelsFactorOverride;
-(id)formatterForLabelStepSize:(CGFloat)arg0 ;
-(id)stringForLocation:(id)arg0 formatterForStepSize:(id)arg1 ;


@end


#endif