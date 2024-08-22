// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHAREABLECREDENTIALSMESSAGECOMPOSEVIEWCONTROLLER_H
#define PKSHAREABLECREDENTIALSMESSAGECOMPOSEVIEWCONTROLLER_H

@class UIViewController, PKAddShareablePassConfiguration, PKPartialShareInvitation, _UIAsyncInvocation, NSArray;
@protocol PKShareableCredentialsMessageComposeViewControllerDelegate;


#import "PKRemoteShareableCredentialsMessageComposeViewController.h"

@interface PKShareableCredentialsMessageComposeViewController : UIViewController {
    id<PKShareableCredentialsMessageComposeViewControllerDelegate> *_delegate;
    PKAddShareablePassConfiguration *_configuration;
    PKPartialShareInvitation *_partialShareInvite;
    _UIAsyncInvocation *_remoteVCRequest;
    PKRemoteShareableCredentialsMessageComposeViewController *_remoteVC;
}


@property (weak, nonatomic) NSObject<PKShareableCredentialsMessageComposeViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSArray *recipientAddresses; // ivar: _recipientAddresses


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_init;
-(id)_initWithPartialShareInvite:(id)arg0 configuration:(id)arg1 ;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPartialShareInvite:(id)arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_setRemoteVC:(id)arg0 completionHandler:(id)arg1 ;
-(void)_setupRemoteView;
-(void)dealloc;
-(void)loadView;
-(void)viewWillLayoutSubviews;


@end


#endif