// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSUBCREDENTIALMESSAGECOMPOSEVIEWCONTROLLER_H
#define PKSUBCREDENTIALMESSAGECOMPOSEVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, PKAppletSubcredentialSharingRequest;
@protocol PKSubcredentialMessageComposeViewControllerDelegate;


#import "PKRemoteSubcredentialMessageComposeViewController.h"

@interface PKSubcredentialMessageComposeViewController : UIViewController {
    id<PKSubcredentialMessageComposeViewControllerDelegate> *_delegate;
    _UIAsyncInvocation *_remoteVCRequest;
    PKAppletSubcredentialSharingRequest *_sharingRequest;
    PKRemoteSubcredentialMessageComposeViewController *_remoteVC;
}


@property (weak, nonatomic) NSObject<PKSubcredentialMessageComposeViewControllerDelegate> *delegate;


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)shouldAutorotate;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSharingRequest:(id)arg0 delegate:(id)arg1 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_setRemoteVC:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillLayoutSubviews;


@end


#endif