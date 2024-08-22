// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPUIINHERITANCEUIPROVIDERIMPL_H
#define CDPUIINHERITANCEUIPROVIDERIMPL_H

@class AKInheritanceAccessKey, NSString, OBNavigationController, UIViewController;
@protocol CDPUIManualAccessCodeEntryViewControllerDelegate, CDPUIInheritanceAccessCodeScannerViewDelegate, CDPUIBeneficiaryWelcomeViewControllerDelegate, CDPUIInheritanceUIProvider;

#import <Foundation/Foundation.h>


@interface CDPUIInheritanceUIProviderImpl : NSObject <CDPUIManualAccessCodeEntryViewControllerDelegate, CDPUIInheritanceAccessCodeScannerViewDelegate, CDPUIBeneficiaryWelcomeViewControllerDelegate, CDPUIInheritanceUIProvider>



@property (retain, nonatomic) AKInheritanceAccessKey *accessKey; // ivar: _accessKey
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OBNavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(BOOL)accessCodeScanner:(id)arg0 didScanCode:(id)arg1 ;
-(BOOL)manualAccessCodeEntry:(id)arg0 shouldFinishWithAccessCode:(id)arg1 ;
-(id)_buildViewController;
-(id)_cameraLabel;
-(id)_cameraView;
-(id)_contentStackView;
-(id)initWithPresentingViewController:(id)arg0 ;
-(void)_dismissViewControllerWithAccessKey:(id)arg0 error:(id)arg1 ;
-(void)_keyOptionsTapped:(id)arg0 ;
-(void)_presentWelcomePage;
-(void)_showEnterCodeLaterAlert;
-(void)_showManualCodeEntryPage;
-(void)_skipTapped:(id)arg0 ;
-(void)accessCodeScanner:(id)arg0 didFailToStarCapture:(id)arg1 ;
-(void)manualAccessCodeEntryDidCancel:(id)arg0 ;
-(void)promptForAccessCodeForAccessKey:(id)arg0 completion:(id)arg1 ;
-(void)welcomeViewController:(id)arg0 didCompleteWithError:(id)arg1 ;


@end


#endif