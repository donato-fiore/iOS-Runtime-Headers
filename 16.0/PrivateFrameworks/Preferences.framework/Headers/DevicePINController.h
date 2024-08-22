// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEVICEPINCONTROLLER_H
#define DEVICEPINCONTROLLER_H

@class NSString, UIBarButtonItem, NSDictionary, NSNumber;
@protocol DevicePINControllerDelegate;


#import "PSDetailController.h"

@interface DevicePINController : PSDetailController {
    int _mode;
    int _substate;
    NSString *_oldPassword;
    NSString *_lastEntry;
    BOOL _success;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    NSString *_error1;
    NSString *_error2;
    BOOL _hasBeenDismissed;
    NSInteger _sepOnceToken;
    NSDictionary *_sepLockInfo;
    BOOL _useSEPLockInfo;
    NSNumber *_requiresKeyboard;
    NSNumber *_pinLength;
    NSNumber *_simplePIN;
    NSNumber *_numericPIN;
}


@property (nonatomic) BOOL allowOptionsButton; // ivar: _allowOptionsButton
@property (copy, nonatomic) NSString *doneButtonTitle; // ivar: _doneButtonTitle
@property (nonatomic) BOOL hidesCancelButton; // ivar: _hidesCancelButton
@property (nonatomic) BOOL hidesNavigationButtons; // ivar: _hidesNavigationButtons
@property (nonatomic, getter=isNumericPIN) BOOL numericPIN;
@property (copy, nonatomic) id *passcodeOptionsHandler; // ivar: _passcodeOptionsHandler
@property (copy, nonatomic) NSString *passcodeOptionsTitle; // ivar: _passcodeOptionsTitle
@property (weak, nonatomic) NSObject<DevicePINControllerDelegate> *pinDelegate; // ivar: _pinDelegate
@property (nonatomic) int pinLength;
@property (nonatomic) BOOL requiresKeyboard;
@property (nonatomic) BOOL shouldDismissWhenDone; // ivar: _shouldDismissWhenDone
@property (nonatomic) BOOL simplePIN;


+(BOOL)settingEnabled;
-(BOOL)_asyncSetPinCompatible;
-(BOOL)_shouldCheckForWeakness;
-(BOOL)_shouldShowOptionsButton;
-(BOOL)_useSEPLockInfo;
-(BOOL)attemptValidationWithPIN:(id)arg0 ;
-(BOOL)completedInputIsValid:(id)arg0 ;
-(BOOL)isBlocked;
-(BOOL)isCreatingPasscode;
-(BOOL)pinIsAcceptable:(id)arg0 outError:(*id)arg1 ;
-(BOOL)showSimplePINCancelButtonOnLeft;
-(BOOL)success;
-(BOOL)useProgressiveDelays;
-(BOOL)validatePIN:(id)arg0 ;
-(CGFloat)_secondsToBlockForFailedAttempts:(NSInteger)arg0 ;
-(CGFloat)blockedTimeRemaining;
-(CGFloat)unblockTime;
-(NSInteger)numberOfFailedAttempts;
-(id)_createAndShowAnimatedNavBarSpinner;
-(id)_sepLockInfo;
-(id)init;
-(id)passcodeOptionsAlertController;
-(id)pinInstructionsPrompt;
-(id)pinInstructionsPromptFont;
-(id)pinPane;
-(id)stringsBundle;
-(id)stringsTable;
-(id)title;
-(int)_getScreenType;
-(int)_simplePasscodeType;
-(int)defaultPinLength;
-(int)mode;
-(struct CGSize )overallContentSizeForViewInPopover;
-(struct __CFString *)blockTimeIntervalKey;
-(struct __CFString *)blockedStateKey;
-(struct __CFString *)defaultsID;
-(struct __CFString *)failedAttemptsKey;
-(void)_adjustUnblockTime;
-(void)_clearBlockedState;
-(void)_dismiss;
-(void)_invalidateSEPLockInfo;
-(void)_preflightPasswordForWeakness:(id)arg0 withCompletion:(id)arg1 ;
-(void)_removePinWithOldPassword:(id)arg0 ;
-(void)_rereadBlockedState;
-(void)_setNumberOfFailedAttempts:(NSInteger)arg0 ;
-(void)_setPINPaneToSimple:(BOOL)arg0 simpleLength:(int)arg1 numeric:(BOOL)arg2 requiresKeyboard:(int)arg3 ;
-(void)_setUnblockTime:(CGFloat)arg0 ;
-(void)_showFailedAttempts;
-(void)_showPINConfirmationError;
-(void)_showUnacceptablePINError:(id)arg0 password:(id)arg1 ;
-(void)_slidePasscodeFieldLeft:(BOOL)arg0 ;
-(void)_updateErrorTextAndFailureCount:(BOOL)arg0 ;
-(void)_updatePINButtons;
-(void)_updateUI;
-(void)adjustButtonsForPasswordLength:(NSUInteger)arg0 ;
-(void)cancelButtonTapped;
-(void)dealloc;
-(void)loadView;
-(void)performActionAfterPINEntry;
-(void)performActionAfterPINRemove;
-(void)performActionAfterPINSet;
-(void)pinEntered:(id)arg0 ;
-(void)setLastEntry:(id)arg0 ;
-(void)setMode:(int)arg0 ;
-(void)setOldPassword:(id)arg0 ;
-(void)setPIN:(id)arg0 ;
-(void)setPIN:(id)arg0 completion:(id)arg1 ;
-(void)setPane:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)setSuccess:(BOOL)arg0 ;
-(void)showPasscodeOptions:(id)arg0 ;
-(void)suspend;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willUnlock;


@end


#endif