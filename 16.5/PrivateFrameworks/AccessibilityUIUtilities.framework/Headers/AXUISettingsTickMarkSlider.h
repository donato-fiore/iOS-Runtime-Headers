// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUISETTINGSTICKMARKSLIDER_H
#define AXUISETTINGSTICKMARKSLIDER_H

@class PSSegmentableSlider, NSArray;



@interface AXUISettingsTickMarkSlider : PSSegmentableSlider

@property (retain, nonatomic) NSArray *ticks; // ivar: _ticks


-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif