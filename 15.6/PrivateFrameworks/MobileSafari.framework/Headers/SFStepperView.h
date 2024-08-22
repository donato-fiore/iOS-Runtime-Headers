// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSTEPPERVIEW_H
#define SFSTEPPERVIEW_H

@class UIView, MTShadowView, NSMapTable;


#import "_SFDimmingButton.h"

@interface SFStepperView : UIView {
    UIView *_controlsContainer;
    MTShadowView *_shadowView;
    NSMapTable *_buttonToLongestStringMap;
}


@property (readonly, nonatomic) _SFDimmingButton *decrementButton; // ivar: _decrementButton
@property (readonly, nonatomic) _SFDimmingButton *doneButton; // ivar: _doneButton
@property (readonly, nonatomic) _SFDimmingButton *incrementButton; // ivar: _incrementButton
@property (readonly, nonatomic) _SFDimmingButton *resetButton; // ivar: _resetButton


+(id)_buttonsFont;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 includingResetButton:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setLongestTitle:(id)arg0 forButton:(id)arg1 ;


@end


#endif