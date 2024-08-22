// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCUISIGNINVIEWCONTROLLER_H
#define MCUISIGNINVIEWCONTROLLER_H

@class AKAppleIDAuthenticationInAppContext, NSString;
@protocol AKInlineSignInViewControllerDelegate, MCUISignInViewControllerDelegate;


#import "MCSectionBasedTableViewController.h"
#import "MCSignInPageAuthenticationSectionController.h"
#import "MCSignInPageTitleSectionController.h"

@interface MCUISignInViewController : MCSectionBasedTableViewController <AKInlineSignInViewControllerDelegate>



@property (retain, nonatomic) MCSignInPageAuthenticationSectionController *authSectionController; // ivar: _authSectionController
@property (nonatomic) BOOL authenticationFinished; // ivar: _authenticationFinished
@property (retain, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MCUISignInViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *orgName;
@property (nonatomic) BOOL signInButtonTapped; // ivar: _signInButtonTapped
@property (readonly) Class superclass;
@property (retain, nonatomic) MCSignInPageTitleSectionController *titleSectionController; // ivar: _titleSectionController


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)signInViewController:(id)arg0 didAuthenticateWithResults:(id)arg1 error:(id)arg2 ;
-(void)signInViewController:(id)arg0 willPerformAuthenticationWithContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif