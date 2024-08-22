// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUIRINGVIEWLABELBUTTON_H
#define SBUIRINGVIEWLABELBUTTON_H

@class UIControl, TPRevealingRingView, UILabel;



@interface SBUIRingViewLabelButton : UIControl

@property (readonly, nonatomic) TPRevealingRingView *backgroundRing; // ivar: _ringView
@property (readonly, nonatomic) UILabel *label; // ivar: _label


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif