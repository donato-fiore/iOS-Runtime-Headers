// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPASSWORDENTRYVIEWCONTROLLER_H
#define ICPASSWORDENTRYVIEWCONTROLLER_H

@class UIViewController, NSString, UIButton, UIImageView, ICNote, UILabel, NSLayoutConstraint;



@interface ICPasswordEntryViewController : UIViewController

@property (copy, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (nonatomic) NSUInteger intent; // ivar: _intent
@property (nonatomic) BOOL isAnimatingOut; // ivar: _isAnimatingOut
@property (weak, nonatomic) UIButton *largeUnlockButton; // ivar: _largeUnlockButton
@property (weak, nonatomic) UIImageView *lockImage; // ivar: _lockImage
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) ICNote *note; // ivar: _note
@property (copy, nonatomic) id *passwordEntryCompletionHandler; // ivar: _passwordEntryCompletionHandler
@property (copy, nonatomic) id *passwordEntryFailedAttemptHandler; // ivar: _passwordEntryFailedAttemptHandler
@property (weak, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (weak, nonatomic) NSLayoutConstraint *titleLabelBaselineConstraint; // ivar: _titleLabelBaselineConstraint
@property (weak, nonatomic) NSLayoutConstraint *titleLabelBottomConstraintForAXLargerTextSizes; // ivar: _titleLabelBottomConstraintForAXLargerTextSizes
@property (weak, nonatomic) NSLayoutConstraint *titleLabelLeadingConstraint; // ivar: _titleLabelLeadingConstraint
@property (weak, nonatomic) NSLayoutConstraint *titleLabelTrailingConstraint; // ivar: _titleLabelTrailingConstraint
@property (weak, nonatomic) UIButton *unlockButton; // ivar: _unlockButton


-(BOOL)_canShowWhileLocked;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 note:(id)arg2 intent:(NSUInteger)arg3 ;
-(void)applyEntryViewMode;
-(void)beginAuthentication;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unlockPasswordButtonPressed:(id)arg0 ;
-(void)updateConstraintsForContentSizeCategoryIfNecessary;
-(void)updateFonts;
-(void)updateTitleLabelPreferredMaxLayoutWidth;
-(void)updateforAccessibilityDarkerSystemColors;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif