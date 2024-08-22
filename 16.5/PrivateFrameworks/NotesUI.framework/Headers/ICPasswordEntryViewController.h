// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICPASSWORDENTRYVIEWCONTROLLER_H
#define ICPASSWORDENTRYVIEWCONTROLLER_H

@class UIViewController, UIButton, UIImageView, ICNote, UILabel;


#import "ICTextBackgroundView.h"

@interface ICPasswordEntryViewController : UIViewController

@property (weak, nonatomic) ICTextBackgroundView *backgroundView; // ivar: _backgroundView
@property (nonatomic) NSUInteger intent; // ivar: _intent
@property (nonatomic) BOOL isAnimatingOut; // ivar: _isAnimatingOut
@property (weak, nonatomic) UIButton *largeUnlockButton; // ivar: _largeUnlockButton
@property (weak, nonatomic) UIImageView *lockImage; // ivar: _lockImage
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) ICNote *note; // ivar: _note
@property (copy, nonatomic) id *passwordEntryCompletionHandler; // ivar: _passwordEntryCompletionHandler
@property (weak, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (weak, nonatomic) UIButton *unlockButton; // ivar: _unlockButton


-(BOOL)_canShowWhileLocked;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 note:(id)arg2 intent:(NSUInteger)arg3 ;
-(void)accessibilityDarkerSystemColorsStatusDidChange:(id)arg0 ;
-(void)applyEntryViewMode;
-(void)beginAuthentication;
-(void)dealloc;
-(void)unlockPasswordButtonPressed:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif