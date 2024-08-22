// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEKAPERTURESLIDER_H
#define CEKAPERTURESLIDER_H

@class NSNumberFormatter, NSString;
@protocol UIScrollViewDelegate;


#import "CEKDiscreteSlider.h"

@interface CEKApertureSlider : CEKDiscreteSlider <UIScrollViewDelegate>



@property (readonly, nonatomic) NSNumberFormatter *_decimalFormatter; // ivar: __decimalFormatter
@property (nonatomic, setter=_setMaximumApertureIndex:) NSUInteger _maximumApertureIndex; // ivar: __maximumApertureIndex
@property (nonatomic, setter=_setMinimumApertureIndex:) NSUInteger _minimumApertureIndex; // ivar: __minimumApertureIndex
@property (readonly, nonatomic) NSNumberFormatter *_wholeNumberFormatter; // ivar: __wholeNumberFormatter
@property (readonly, nonatomic) CGFloat apertureValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat markedApertureValue;
@property (readonly, nonatomic) CGFloat maximumApertureValue;
@property (readonly, nonatomic) CGFloat minimumApertureValue;
@property (readonly) Class superclass;


+(BOOL)isValidApertureIndex:(NSUInteger)arg0 ;
+(BOOL)isValidApertureIndexFullStop:(NSUInteger)arg0 ;
+(NSUInteger)firstFullStopIndexAfterOrIncludingIndex:(NSUInteger)arg0 ;
+(id)validApertureValues;
-(CGFloat)horizontalValueLabelOffset;
-(NSUInteger)_discreteIndexForValidApertureIndex:(NSUInteger)arg0 ;
-(NSUInteger)_indexOfClosestValidValueForAperture:(CGFloat)arg0 ;
-(NSUInteger)_validApertureIndexForDiscreteIndex:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)valueText;
-(void)_updateMainTickMarkOffset;


@end


#endif