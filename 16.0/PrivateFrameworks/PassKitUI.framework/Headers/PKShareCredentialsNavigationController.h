// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHARECREDENTIALSNAVIGATIONCONTROLLER_H
#define PKSHARECREDENTIALSNAVIGATIONCONTROLLER_H

@class PKAddShareablePassConfiguration, NSString;
@protocol PKPaymentSetupViewControllerDelegate, PKPaymentSelectPassesViewControllerDelegate, PKServiceAddSecureElementPassViewControllerProtocol;


#import "PKNavigationController.h"
#import "PKShareableCredentialExplanationViewController.h"

@interface PKShareCredentialsNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate, PKPaymentSelectPassesViewControllerDelegate, PKServiceAddSecureElementPassViewControllerProtocol>

 {
    PKShareableCredentialExplanationViewController *_explanationVC;
    PKAddShareablePassConfiguration *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_sortAndFilterPassesToDelete:(id)arg0 ;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)_presentProvisioningViewControllerAnimated:(BOOL)arg0 ;
-(void)didFinishWithPasses:(id)arg0 error:(id)arg1 ;
-(void)loadView;
-(void)selectPassesViewController:(id)arg0 didSelectPasses:(id)arg1 completion:(id)arg2 ;
-(void)selectPassesViewControllerDidTapBackButton:(id)arg0 ;
-(void)setConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)setDisplayPropertiesWithScreenSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(void)viewController:(id)arg0 didFinishWithPasses:(id)arg1 error:(id)arg2 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;


@end


#endif