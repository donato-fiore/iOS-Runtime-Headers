// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUISTEPSLIDER_H
#define HUISTEPSLIDER_H

@class UISlider, UIColor, NSMutableArray;



@interface HUIStepSlider : UISlider

@property (nonatomic) BOOL drawsEndTicks; // ivar: _drawsEndTicks
@property (nonatomic) BOOL restrictsValuesToTicks; // ivar: _restrictsValuesToTicks
@property (nonatomic) NSUInteger segmentCount; // ivar: _segmentCount
@property (nonatomic) BOOL supportsVibrancy; // ivar: _supportsVibrancy
@property (retain, nonatomic) UIColor *tickColor; // ivar: _tickColor
@property (retain, nonatomic) NSMutableArray *ticks; // ivar: _ticks


-(NSUInteger)numberOfTicks;
-(float)offsetBetweenTicksForNumberOfTicks:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)traitCollection;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;
-(void)layoutSubviews;
-(void)setValue:(float)arg0 animated:(BOOL)arg1 ;
-(void)sliderTapped:(id)arg0 ;


@end


#endif