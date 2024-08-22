// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSIMPLESLIDERCONTROLVIEW_H
#define HUSIMPLESLIDERCONTROLVIEW_H

@class UIView, NSString, UISlider;
@protocol HUControlView, HUControlViewDelegate;



@interface HUSimpleSliderControlView : UIView <HUControlView>



@property (nonatomic) BOOL canBeHighlighted;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUControlViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) float maxValue;
@property (nonatomic) float minValue;
@property (readonly, nonatomic) UISlider *slider; // ivar: _slider
@property (readonly) Class superclass;
@property (retain, nonatomic) id *value;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_sliderTouchDown:(id)arg0 ;
-(void)_sliderTouchUp:(id)arg0 ;
-(void)_sliderValueChanged:(id)arg0 ;


@end


#endif