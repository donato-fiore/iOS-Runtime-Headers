// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUREVIEWSCREENTOPBAR_H
#define PUREVIEWSCREENTOPBAR_H

@class UIView, NSSet, UIButton;


#import "PUReviewScreenDoneButton.h"

@interface PUReviewScreenTopBar : UIView

@property (copy, nonatomic) NSSet *availableButtons; // ivar: _availableButtons
@property (nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) PUReviewScreenDoneButton *doneButton; // ivar: _doneButton
@property (nonatomic) CGPoint doneButtonCenterAlignmentPoint; // ivar: _doneButtonCenterAlignmentPoint
@property (copy, nonatomic) NSSet *enabledButtons; // ivar: _enabledButtons
@property (readonly, nonatomic) UIButton *retakeButton; // ivar: _retakeButton


+(id)supportedButtons;
-(BOOL)_isButtonAvailable:(NSInteger)arg0 ;
-(BOOL)_isButtonEnabled:(NSInteger)arg0 ;
-(id)_buttonForButtonType:(NSInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBackgroundColor;
-(void)_updateButtonVisibility;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif