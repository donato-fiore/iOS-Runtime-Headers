// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHAREABLECREDENTIALSMESSAGECOMPOSEVIEWCONTROLLER_H
#define PKSHAREABLECREDENTIALSMESSAGECOMPOSEVIEWCONTROLLER_H

@class UIViewController, PKAddShareablePassConfiguration, _UIAsyncInvocation;
@protocol PKShareableCredentialsMessageComposeViewControllerDelegate;


#import "PKRemoteShareableCredentialsMessageComposeViewController.h"

@interface PKShareableCredentialsMessageComposeViewController : UIViewController {
    id<PKShareableCredentialsMessageComposeViewControllerDelegate> *_delegate;
    PKAddShareablePassConfiguration *_configuration;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteShareableCredentialsMessageComposeViewController *_remoteVC;
}


@property (weak, nonatomic) NSObject<PKShareableCredentialsMessageComposeViewControllerDelegate> *delegate;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)shouldAutorotate;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_setRemoteVC:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillLayoutSubviews;


@end


#endif