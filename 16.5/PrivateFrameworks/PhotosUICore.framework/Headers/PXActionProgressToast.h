// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXACTIONPROGRESSTOAST_H
#define PXACTIONPROGRESSTOAST_H

@class UIView, UIImageView, UIButton, UILabel, NSLayoutConstraint, NSString, NSArray, NSProgress;
@protocol NSProgressReporting;


#import "PXToast.h"
#import "PXProgrammaticNavigationDestination.h"

@interface PXActionProgressToast : UIView <NSProgressReporting>

 {
    UIView *_leadingView;
    UIView *_progressView;
    UIImageView *_checkmarkView;
    UIButton *_errorView;
    UIButton *_closeButton;
    UIView *_labelContainer;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    PXToast *_toast;
    CGFloat _toastMargin;
    NSLayoutConstraint *_labelContainerWidthConstraint;
    NSLayoutConstraint *_closeButtonWidthConstraint;
    NSLayoutConstraint *_trailingSpacingConstraint;
    NSLayoutConstraint *_primaryLabelWidthConstraint;
    NSLayoutConstraint *_secondaryLabelWidthConstraint;
    NSLayoutConstraint *_primaryLabelAlignmentConstraint;
    NSLayoutConstraint *_secondaryLabelAlignmentConstraint;
}


@property (nonatomic) CGFloat bottomSpacing; // ivar: _bottomSpacing
@property (copy, nonatomic) id *closeButtonAction; // ivar: _closeButtonAction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorButtonAction; // ivar: _errorButtonAction
@property (copy, nonatomic) NSArray *errors; // ivar: _errors
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isLocked;
@property (retain, nonatomic) NSString *localizedProgressText; // ivar: _localizedProgressText
@property (retain, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly) NSProgress *progress; // ivar: _progress
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) PXProgrammaticNavigationDestination *targetDestination; // ivar: _targetDestination


-(BOOL)_hasFinalState;
-(id)_determinateProgressView;
-(id)_mainViewController;
-(id)_tabBarController;
-(id)initWithTargetDestination:(id)arg0 progress:(id)arg1 ;
-(void)_cancel;
-(void)_close:(id)arg0 ;
-(void)_dismissAnimated:(BOOL)arg0 ;
-(void)_dismissAnimated:(BOOL)arg0 afterDelay:(CGFloat)arg1 ;
-(void)_errorButtonClicked:(id)arg0 ;
-(void)_handleContentModeChange:(id)arg0 ;
-(void)_handleSingleTouchTap:(id)arg0 ;
-(void)_prepareForReuse;
-(void)_showToast;
-(void)_updateDeterminateProgress;
-(void)_updateDisplayForDestination:(id)arg0 ;
-(void)_updateIcons;
-(void)_updatePrimaryLabel;
-(void)_updateSecondaryLabel;
-(void)_updateToastMargin;
-(void)dealloc;
-(void)finishProgressMarkingAsComplete:(BOOL)arg0 ;
-(void)finishProgressMarkingAsComplete:(BOOL)arg0 updatedLocalizedTitle:(id)arg1 updatedLocalizedDescription:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)updateConstraints;
-(void)willStartProgress;


@end


#endif