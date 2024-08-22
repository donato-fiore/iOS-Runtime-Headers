// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSAUTOAUTHENTICATIONVIEWCONTROLLER_IOS_H
#define VSAUTOAUTHENTICATIONVIEWCONTROLLER_IOS_H

@class UIViewController, UILabel, NSString, UIButton, UIScrollView;
@protocol VSAutoAuthenticationViewController, VSAuthenticationViewControllerDelegate;


#import "VSFontCenter.h"
#import "VSIdentityProviderLogoView.h"
#import "VSAutoAuthenticationViewModel.h"

@interface VSAutoAuthenticationViewController_iOS : UIViewController <VSAutoAuthenticationViewController>



@property (retain, nonatomic) UILabel *accountNameLabel; // ivar: _accountNameLabel
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // ivar: _cancellationAllowed
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSAuthenticationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VSFontCenter *fontCenter; // ivar: _fontCenter
@property (retain, nonatomic) UILabel *footerLabel; // ivar: _footerLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSIdentityProviderLogoView *logoView; // ivar: _logoView
@property (retain, nonatomic) UIButton *manualSignInButton; // ivar: _manualSignInButton
@property (retain, nonatomic) UILabel *manualSignInTitleLabel; // ivar: _manualSignInTitleLabel
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) UILabel *messageTitleLabel; // ivar: _messageTitleLabel
@property (retain, nonatomic) UILabel *noticeLabel; // ivar: _noticeLabel
@property (readonly, nonatomic) CGSize preferredLogoSize;
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (retain, nonatomic) VSAutoAuthenticationViewModel *viewModel; // ivar: _viewModel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_manualSignInButtonPressed:(id)arg0 ;
-(void)_startObservingViewModel:(id)arg0 ;
-(void)_stopObservingViewModel:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif