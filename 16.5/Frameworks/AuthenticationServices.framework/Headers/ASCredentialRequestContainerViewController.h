// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCREDENTIALREQUESTCONTAINERVIEWCONTROLLER_H
#define ASCREDENTIALREQUESTCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, UIVisualEffectView, NSString;
@protocol UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, ASCredentialRequestPaneViewControllerDelegate;



@interface ASCredentialRequestContainerViewController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>

 {
    NSLayoutConstraint *_sheetHeightConstraint;
    NSLayoutConstraint *_sheetPresentedConstraint;
}


@property (retain, nonatomic) UIVisualEffectView *blurBackgroundView; // ivar: _blurBackgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<ASCredentialRequestPaneViewControllerDelegate> *paneDelegate; // ivar: _paneDelegate
@property (readonly, nonatomic) UIViewController *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;


-(NSUInteger)supportedInterfaceOrientations;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)_clearPaneDelegateForViewController:(id)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif