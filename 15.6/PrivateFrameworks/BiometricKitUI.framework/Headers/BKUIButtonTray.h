// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKUIBUTTONTRAY_H
#define BKUIBUTTONTRAY_H

@class UIView, UIButton, NSLayoutConstraint, NSArray;



@interface BKUIButtonTray : UIView

@property (retain, nonatomic) UIView *bottomPaddingView; // ivar: _bottomPaddingView
@property (retain, nonatomic) UIButton *escapeHatchButton; // ivar: _escapeHatchButton
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
@property (retain, nonatomic) UIButton *retryMatchOperationButton; // ivar: _retryMatchOperationButton


-(CGFloat)_bottomPadding;
-(NSInteger)displayState;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)nextStateButtonContainerHorizontalPositionConstraint:(BOOL)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_layoutInternalButtonsForDisplayState:(NSInteger)arg0 ;
-(void)showRetryButton;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateButtonLayout;


@end


#endif