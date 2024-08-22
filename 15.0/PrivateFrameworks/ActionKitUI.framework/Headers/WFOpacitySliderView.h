// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFOPACITYSLIDERVIEW_H
#define WFOPACITYSLIDERVIEW_H

@class UIControl, UILabel;


#import "WFOpacitySlider.h"

@interface WFOpacitySliderView : UIControl

@property (readonly, nonatomic) CGFloat opacity;
@property (readonly, weak, nonatomic) UILabel *opacityLabel; // ivar: _opacityLabel
@property (readonly, weak, nonatomic) WFOpacitySlider *slider; // ivar: _slider


-(id)init;
-(void)didChangeOpacityValue:(id)arg0 ;
-(void)layoutSubviews;
-(void)reset;


@end


#endif