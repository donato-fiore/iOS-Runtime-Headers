// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUIBUTTONTRAY_H
#define BKUIBUTTONTRAY_H

@class UIView, UIButton, NSLayoutConstraint, NSArray;
@protocol BKUIButtonTrayActionDelegate;



@interface BKUIButtonTray : UIView

@property (weak, nonatomic) NSObject<BKUIButtonTrayActionDelegate> *actionDelegate; // ivar: _actionDelegate
@property (retain, nonatomic) UIButton *bottomLinkButton; // ivar: _bottomLinkButton
@property (retain, nonatomic) UIView *bottomPaddingView; // ivar: _bottomPaddingView
@property (retain, nonatomic) NSLayoutConstraint *escapeHatchButtonBottomConstraint; // ivar: _escapeHatchButtonBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *escapeHatchButtonLeadingConstraint; // ivar: _escapeHatchButtonLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *escapeHatchButtonTrailingConstraint; // ivar: _escapeHatchButtonTrailingConstraint
@property (nonatomic) BOOL inSheet; // ivar: _inSheet
@property (nonatomic) BOOL isInline; // ivar: _isInline
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (retain, nonatomic) UIButton *nextStateButton; // ivar: _nextStateButton
@property (retain, nonatomic) UIView *nextStateButtonContainer; // ivar: _nextStateButtonContainer
@property (retain, nonatomic) NSLayoutConstraint *nextStateButtonContainerBottomConstraintTall; // ivar: _nextStateButtonContainerBottomConstraintTall
@property (retain, nonatomic) NSLayoutConstraint *nextStateButtonContainerHorizontalPositionConstraint; // ivar: _nextStateButtonContainerHorizontalPositionConstraint
@property (retain, nonatomic) UIButton *topLinkButton; // ivar: _topLinkButton
@property (nonatomic) BOOL willUseActionDelegate; // ivar: _willUseActionDelegate


-(CGFloat)_bottomPadding;
-(NSInteger)displayState;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 willUseActionDelegate:(BOOL)arg1 ;
-(id)nextStateButtonContainerHorizontalPositionConstraint:(BOOL)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_layoutInternalButtonsForDisplayState:(NSInteger)arg0 ;
-(void)continueButtonPressed:(id)arg0 ;
-(void)linkButtonPressed:(id)arg0 ;
-(void)showRetryButton;
-(void)topLinkButtonPressed:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateButtonLayout;


@end


#endif