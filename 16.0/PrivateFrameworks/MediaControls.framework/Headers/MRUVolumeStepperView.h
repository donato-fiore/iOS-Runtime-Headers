// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUVOLUMESTEPPERVIEW_H
#define MRUVOLUMESTEPPERVIEW_H

@class UIView, CCUIButtonModuleView;



@interface MRUVolumeStepperView : UIView

@property (nonatomic) CGFloat continuousButtonCornerRadius; // ivar: _continuousButtonCornerRadius
@property (readonly, nonatomic) CCUIButtonModuleView *decreaseButton; // ivar: _decreaseButton
@property (retain, nonatomic) UIView *decreaseMaterialView; // ivar: _decreaseMaterialView
@property (readonly, nonatomic) CCUIButtonModuleView *increaseButton; // ivar: _increaseButton
@property (retain, nonatomic) UIView *increaseMaterialView; // ivar: _increaseMaterialView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif