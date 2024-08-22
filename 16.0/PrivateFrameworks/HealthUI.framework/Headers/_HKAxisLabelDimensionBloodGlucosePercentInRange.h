// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKAXISLABELDIMENSIONBLOODGLUCOSEPERCENTINRANGE_H
#define _HKAXISLABELDIMENSIONBLOODGLUCOSEPERCENTINRANGE_H

@class NSNumberFormatter;
@protocol HKAxisLabelDimension;

#import <Foundation/Foundation.h>


@interface _HKAxisLabelDimensionBloodGlucosePercentInRange : NSObject <HKAxisLabelDimension>



@property (readonly, nonatomic) NSNumberFormatter *formatter; // ivar: _formatter


-(CGFloat)niceStepSizeLargerThan:(CGFloat)arg0 ;
-(CGFloat)ticksPerStepSize:(CGFloat)arg0 ;
-(id)endingLabelsFactorOverride;
-(id)init;
-(id)stringForLocation:(id)arg0 ;
-(void)setStepSizeForLabels:(CGFloat)arg0 ;


@end


#endif