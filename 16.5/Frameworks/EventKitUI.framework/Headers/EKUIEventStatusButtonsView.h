// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIEVENTSTATUSBUTTONSVIEW_H
#define EKUIEVENTSTATUSBUTTONSVIEW_H

@class UIView, NSArray, UIFont, NSLayoutConstraint, UIButton, NSString;
@protocol UIPointerInteractionDelegate, EKUIEventStatusButtonsViewDelegate;



@interface EKUIEventStatusButtonsView : UIView <UIPointerInteractionDelegate>

 {
    NSArray *_buttons;
    UIFont *_font;
    CGFloat _outsideMargin;
    NSLayoutConstraint *_leadingMarginConstraint;
    NSLayoutConstraint *_trailingMarginConstraint;
    CGFloat _baselineFromBoundsTop;
    BOOL _forcesSingleButtonToCenter;
    BOOL _inboxStyle;
    NSArray *_currentConstraints;
}


@property (retain, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) UIEdgeInsets buttonsTouchInsets; // ivar: _buttonsTouchInsets
@property (readonly, nonatomic) UIButton *centerButton;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKUIEventStatusButtonsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableButtonHighlights; // ivar: _disableButtonHighlights
@property (readonly, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIButton *leadingButton;
@property (nonatomic) NSInteger selectedAction; // ivar: _selectedAction
@property (nonatomic) BOOL shouldUseVerticalLayout; // ivar: _shouldUseVerticalLayout
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textSizeMode; // ivar: _textSizeMode
@property (readonly, nonatomic) UIButton *trailingButton;


+(BOOL)isActionDestructive:(NSInteger)arg0 ;
+(id)buttonTitleForAction:(NSInteger)arg0 orb:(BOOL)arg1 ;
+(id)imageForAction:(NSInteger)arg0 selected:(BOOL)arg1 ;
-(BOOL)_shouldCenterButton;
-(CGFloat)_buttonFontSizeFromDelegate;
-(CGFloat)_defaultFontSizeForButtons;
-(CGFloat)_minimumFontSize;
-(CGFloat)_updateFontFromDelegate;
-(CGFloat)baselineFromBoundsTop;
-(NSInteger)_actionForButton:(id)arg0 ;
-(NSInteger)_buttonIndexForAction:(NSInteger)arg0 ;
-(id)_fontWithSize:(CGFloat)arg0 selected:(BOOL)arg1 ;
-(id)_horizontalConstraintStringForMiddleButtonsStartingAt:(NSUInteger)arg0 endingAt:(NSUInteger)arg1 resultingViews:(id)arg2 ;
-(id)_newButtonDivider;
-(id)_newToolbarButton;
-(id)buttonForAction:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 actions:(id)arg1 delegate:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 actions:(id)arg1 delegate:(id)arg2 options:(NSUInteger)arg3 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_setupButtons;
-(void)_setupConstraints;
-(void)_updateButtonFonts:(id)arg0 ;
-(void)_updateButtonFontsWithSize:(CGFloat)arg0 ;
-(void)_updateSelectionToButton:(id)arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)findPointerInteractionWithButton:(id)arg0 actions:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)updateFonts;
-(void)updateForMiniBarState:(BOOL)arg0 ;


@end


#endif