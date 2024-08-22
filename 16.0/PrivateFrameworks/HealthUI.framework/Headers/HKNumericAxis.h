// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKNUMERICAXIS_H
#define HKNUMERICAXIS_H

@protocol HKAxisLabelDimension;


#import "HKAxis.h"

@interface HKNumericAxis : HKAxis

@property (readonly, nonatomic) CGFloat bottomVerticalLabelPadding; // ivar: _bottomVerticalLabelPadding
@property (readonly, nonatomic) NSObject<HKAxisLabelDimension> *labelDimension; // ivar: _labelDimension
@property (readonly, nonatomic) CGFloat topVerticalLabelPadding; // ivar: _topVerticalLabelPadding


+(CGFloat)_adjustRangeDownWithStartValue:(CGFloat)arg0 endValue:(CGFloat)arg1 factor:(CGFloat)arg2 ;
+(CGFloat)_adjustRangeUpWithStartValue:(CGFloat)arg0 endValue:(CGFloat)arg1 factor:(CGFloat)arg2 ;
+(CGFloat)_roundDownByMultiple:(CGFloat)arg0 factor:(CGFloat)arg1 ;
+(CGFloat)_roundUpByMultiple:(CGFloat)arg0 factor:(CGFloat)arg1 ;
+(id)preferredAxisStyle;
+(id)standardNumericYAxisWithConfigurationOverrides:(id)arg0 ;
+(id)ticksAndLabelsForRangeInModelCoordinates:(id)arg0 maximumLabelCount:(NSInteger)arg1 endingOptions:(NSInteger)arg2 dimension:(id)arg3 ;
-(CGFloat)labelSpacingFactorForNumberFormatter;
-(CGFloat)offsetForLegendView;
-(id)adjustValueRangeForLabels:(id)arg0 ;
-(id)adjustedRangeForFittedRange:(id)arg0 chartRange:(struct HKRange )arg1 ;
-(id)cacheKeysForModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)stringFromNumber:(id)arg0 ;


@end


#endif