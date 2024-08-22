// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKNUMERICAXIS_H
#define HKNUMERICAXIS_H

@protocol HKAxisLabelDimension, HKZoomScale;


#import "HKAxis.h"

@interface HKNumericAxis : HKAxis

@property (nonatomic) CGFloat bottomVerticalLabelPadding; // ivar: _bottomVerticalLabelPadding
@property (retain, nonatomic) NSObject<HKAxisLabelDimension> *labelDimension; // ivar: _labelDimension
@property (readonly, nonatomic) NSObject<HKZoomScale> *scalarZoomScaleEngine; // ivar: _scalarZoomScaleEngine
@property (nonatomic) CGFloat topVerticalLabelPadding; // ivar: _topVerticalLabelPadding


+(CGFloat)_roundDownByMultiple:(CGFloat)arg0 factor:(CGFloat)arg1 ;
+(CGFloat)_roundUpByMultiple:(CGFloat)arg0 factor:(CGFloat)arg1 ;
+(id)preferredAxisStyle;
+(id)standardNumericYAxisWithLabelDimension:(id)arg0 ;
+(id)ticksAndLabelsForRangeInModelCoordinates:(id)arg0 maximumLabelCount:(NSInteger)arg1 endingOptions:(NSInteger)arg2 dimension:(id)arg3 ;
-(CGFloat)labelSpacingFactorForNumberFormatter;
-(id)adjustValueRangeForLabels:(id)arg0 ;
-(id)adjustedRangeForFittedRange:(id)arg0 chartRange:(struct HKRange )arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg0 zoomScale:(CGFloat)arg1 ;
-(id)init;
-(id)stringFromNumber:(id)arg0 ;
-(id)zoomScaleEngine;


@end


#endif