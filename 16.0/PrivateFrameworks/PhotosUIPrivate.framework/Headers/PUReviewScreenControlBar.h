// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUREVIEWSCREENCONTROLBAR_H
#define PUREVIEWSCREENCONTROLBAR_H

@class UIView, NSArray, NSSet, UIButton;



@interface PUReviewScreenControlBar : UIView

@property (retain, nonatomic, setter=_setButtonsForLayout:) NSArray *_buttonsForLayout; // ivar: __buttonsForLayout
@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (copy, nonatomic) NSSet *availableButtons; // ivar: _availableButtons
@property (readonly, nonatomic) UIButton *editButton; // ivar: _editButton
@property (copy, nonatomic) NSSet *enabledButtons; // ivar: _enabledButtons
@property (readonly, nonatomic) UIButton *funEffectsButton; // ivar: _funEffectsButton
@property (nonatomic) CGPoint layoutCenterAlignmentPoint; // ivar: _layoutCenterAlignmentPoint
@property (readonly, nonatomic) UIButton *markupButton; // ivar: _markupButton
@property (readonly, nonatomic) UIButton *sendButton; // ivar: _sendButton
@property (nonatomic) BOOL shouldLayoutVertically; // ivar: _shouldLayoutVertically
@property (nonatomic) BOOL useTransparentBackground; // ivar: _useTransparentBackground
@property (nonatomic) BOOL useTransparentTouches; // ivar: _useTransparentTouches


+(id)supportedButtons;
+(struct CGRect )sendButtonAlignmentRectInHorizontalBounds:(struct CGRect )arg0 relativeCenterAlignmentPoint:(struct CGPoint )arg1 ;
+(struct CGRect )sendButtonAlignmentRectInVerticalBounds:(struct CGRect )arg0 relativeCenterAlignmentPoint:(struct CGPoint )arg1 controlsCount:(NSUInteger)arg2 ;
-(BOOL)_isButtonAvailable:(NSInteger)arg0 ;
-(BOOL)_isButtonEnabled:(NSInteger)arg0 ;
-(id)_buttonForButtonType:(NSInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBackgroundTransparency;
-(void)_updateButtonText;
-(void)_updateButtonVisibility;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif