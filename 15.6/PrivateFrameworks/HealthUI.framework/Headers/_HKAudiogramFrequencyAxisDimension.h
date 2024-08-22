// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKAUDIOGRAMFREQUENCYAXISDIMENSION_H
#define _HKAUDIOGRAMFREQUENCYAXISDIMENSION_H

@protocol HKAxisLabelDimension;

#import <Foundation/Foundation.h>


@interface _HKAudiogramFrequencyAxisDimension : NSObject <HKAxisLabelDimension>





-(CGFloat)niceStepSizeLargerThan:(CGFloat)arg0 ;
-(CGFloat)ticksPerStepSize:(CGFloat)arg0 ;
-(id)stringForLocation:(id)arg0 ;
-(void)setStepSizeForLabels:(CGFloat)arg0 ;


@end


#endif