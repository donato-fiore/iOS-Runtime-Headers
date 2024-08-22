// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMEXPOSURESLIDER_H
#define CAMEXPOSURESLIDER_H

@class CEKDiscreteSlider, NSNumberFormatter;



@interface CAMExposureSlider : CEKDiscreteSlider

@property (readonly, nonatomic) NSNumberFormatter *_decimalFormatter; // ivar: __decimalFormatter
@property (nonatomic) CGFloat _previousHorizontalLabelOffset; // ivar: __previousHorizontalLabelOffset
@property (readonly, nonatomic) CGFloat exposureValue;


+(id)decimalFormatter;
-(CGFloat)horizontalValueLabelOffset;
-(NSUInteger)_indexOfClosestValidValueForExposureValue:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)valueText;
-(void)updateValueLabel;


@end


#endif