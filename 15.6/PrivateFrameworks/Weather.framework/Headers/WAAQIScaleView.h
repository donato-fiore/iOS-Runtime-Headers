// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WAAQISCALEVIEW_H
#define WAAQISCALEVIEW_H

@class UIView;


#import "WAAQIScale.h"

@interface WAAQIScaleView : UIView

@property (nonatomic) NSUInteger AQI; // ivar: _AQI
@property (nonatomic) CGFloat aqiPercentageInRange; // ivar: _aqiPercentageInRange
@property (retain, nonatomic) WAAQIScale *scale; // ivar: _scale


-(NSUInteger)sanitizedAQI:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif