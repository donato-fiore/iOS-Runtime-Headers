// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBROWSERAPPMANAGERVIEWCONTROLLER_H
#define CKBROWSERAPPMANAGERVIEWCONTROLLER_H

@class UINavigationController, NSString;
@protocol UIPresentationControllerDelegatePrivate, UIViewControllerTransitioningDelegate, CKAppManagerViewControllerDelegate, CKBrowserAppManagerViewControllerDelegate;


#import "CKBrowserViewController.h"
#import "CKAppManagerViewController.h"

@interface CKBrowserAppManagerViewController : CKBrowserViewController <UIPresentationControllerDelegatePrivate, UIViewControllerTransitioningDelegate, CKAppManagerViewControllerDelegate>

 {
    UINavigationController *_navController;
    CKAppManagerViewController *_appViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKBrowserAppManagerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)appAllowedByScreenTimeWithBundleIdentifier:(id)arg0 ;
-(BOOL)isDismissing;
-(BOOL)isLoaded;
-(BOOL)isModalInPresentation;
-(BOOL)mayBeKeptInViewHierarchy;
-(BOOL)shouldShowChatChrome;
-(BOOL)supportsQuickView;
-(BOOL)wantsDarkUI;
-(BOOL)wantsOpaqueUI;
-(NSInteger)browserPresentationStyle;
-(NSInteger)parentModalPresentationStyle;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)parentTransitioningDelegate;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)appManagerViewControllerDidFinish:(id)arg0 ;
-(void)browserAppManagerDidSelectPlugin:(id)arg0 ;
-(void)delegate_BrowserAppManagerDidSelectPlugin:(id)arg0 ;
-(void)dismiss;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif