// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUISIGNINVIEWCONTROLLER_H
#define AAUISIGNINVIEWCONTROLLER_H

@class UIViewController, UITableView, UITableViewCell, OBHeaderView, UIImage, UITableViewHeaderFooterView, NSArray, UMUserPersona, UMUserPersonaContext, OBAnimationController, UIColor, NSString, UIImageView;
@protocol AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AAUISignInViewControllerDelegate;


#import "AAUIBuddyView.h"

@interface AAUISignInViewController : UIViewController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>

 {
    UITableView *_tableView;
    UITableViewCell *_usernameCell;
    UITableViewCell *_passwordCell;
    OBHeaderView *_obHeaderView;
    UIImage *_headerImage;
    UITableViewHeaderFooterView *_tableHeaderView;
    UITableViewHeaderFooterView *_tableFooterView;
    NSArray *_compactConstraints;
    NSArray *_expandedConstraints;
    id *_passwordHandler;
    UMUserPersona *_originalPersona;
    UMUserPersonaContext *_originalPersonaContext;
}


@property (nonatomic, setter=_setAkServiceType:) NSInteger _akServiceType; // ivar: _akServiceType
@property (nonatomic, setter=_setShouldAnticipatePiggybacking:) BOOL _shouldAnticipatePiggybacking; // ivar: _shouldAnticipatePiggybacking
@property (nonatomic) BOOL allowSkip; // ivar: _allowSkip
@property (nonatomic) BOOL allowsAccountCreation; // ivar: _allowsAccountCreation
@property (retain, nonatomic) OBAnimationController *animationController; // ivar: _animationController
@property (nonatomic) BOOL canEditUsername; // ivar: _canEditUsername
@property (retain, nonatomic) UIColor *cellBackgroundColor; // ivar: _cellBackgroundColor
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISignInViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *footerText; // ivar: _footerText
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *headerImageView;
@property (nonatomic) NSString *messageLabel; // ivar: _messageLabel
@property (copy, nonatomic) NSArray *privacyLinkIdentifiers; // ivar: _privacyLinkIdentifiers
@property (nonatomic) BOOL showServiceIcons; // ivar: _showServiceIcons
@property (nonatomic) BOOL showingPasswordCell; // ivar: _showingPasswordCell
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tableViewStyle; // ivar: _tableViewStyle
@property (copy, nonatomic) NSString *username; // ivar: _username
@property (retain, nonatomic) AAUIBuddyView *view;


+(BOOL)_isRunningInBridge;
+(void)phoneNumberSupportedWithCompletion:(id)arg0 ;
-(BOOL)_hasValidCredentials;
-(BOOL)_isGreenTeaCapable;
-(BOOL)_isPasswordFieldVisible;
-(BOOL)_isRunningInSettings;
-(BOOL)_showOnlyPassword;
-(BOOL)remoteUIController:(id)arg0 shouldLoadRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(BOOL)tableView:(id)arg0 shouldDrawTopSeparatorForSection:(NSInteger)arg1 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)_tableViewContentInsetTop;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_animationMediaNameForDark;
-(id)_animationMediaNameForLight;
-(id)_authorizationValueForAuthenticationResults:(id)arg0 ;
-(id)_cancelBarButtonItem;
-(id)_nextBarButtonItem;
-(id)_passwordCell;
-(id)_passwordFieldIndexPath;
-(id)_tableFooterView;
-(id)_tableHeaderView;
-(id)_tableView;
-(id)authenticationContext;
-(id)forgotButtonLocalizedString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_actionButtonSelected:(id)arg0 ;
-(void)_attemptAuthentication;
-(void)_attemptAuthenticationWithContext:(id)arg0 ;
-(void)_beginObservingKeyboardWillShowNotifications;
-(void)_beginObservingSizeCategoryNotification;
-(void)_beginObservingTextFieldDidChangeNotifications;
-(void)_cancelButtonSelected:(id)arg0 ;
-(void)_cancelPasswordDelegateIfNecessary;
-(void)_delegate_signInViewControllerDidCompleteWithAuthenticationResults:(id)arg0 ;
-(void)_endObservingKeyboardWillShowNotifications;
-(void)_endObservingSizeCategoryNotification;
-(void)_endObservingTextFieldDidChangeNotifications;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_nextButtonSelected:(id)arg0 ;
-(void)_presentCreateAppleIDPane;
-(void)_presentForgotAppleIDPane;
-(void)_prewarmSignInFlowIfApplicable;
-(void)_repairCloudAccountWithAuthenticationResults:(id)arg0 ;
-(void)_resignFirstResponderForAppropriateTextField;
-(void)_setEnabled:(BOOL)arg0 ;
-(void)_setPasswordFieldHidden:(BOOL)arg0 ;
-(void)_textFieldDidChange:(id)arg0 ;
-(void)_updateConstraintsForTraitCollection:(id)arg0 ;
-(void)_updateContentInsetWithHeight:(CGFloat)arg0 ;
-(void)_updateScrollIndicatorInsetWithHeight:(CGFloat)arg0 ;
-(void)constrainView:(id)arg0 toFillHeaderFooterView:(id)arg1 ;
-(void)context:(id)arg0 needsPasswordWithCompletion:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)nextButtonTapped;
-(void)setHeaderImage:(id)arg0 ;
-(void)sizeCategoryDidChange:(id)arg0 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif