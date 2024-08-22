// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSTOREPRODUCTACTIVITYVIEWCONTROLLER_H
#define SKSTOREPRODUCTACTIVITYVIEWCONTROLLER_H

@class UIViewController, SKInvocationQueueProxy<SKUIServiceProductActivityViewController>, _UIAsyncInvocation, NSDictionary, NSString;
@protocol UIViewControllerTransitioningDelegate, SKStoreProductActivityViewControllerDelegate;


#import "SKRemoteProductActivityViewController.h"
#import "_SKStoreProductActivityAnimationController.h"

@interface SKStoreProductActivityViewController : UIViewController <UIViewControllerTransitioningDelegate>

 {
    SKInvocationQueueProxy<SKUIServiceProductActivityViewController> *_serviceProxy;
    _UIAsyncInvocation *_cancelRequest;
    SKRemoteProductActivityViewController *_remoteViewController;
    NSDictionary *_parameters;
    _SKStoreProductActivityAnimationController *_animationController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKStoreProductActivityViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithParameters:(id)arg0 ;
-(void)_addRemoteView;
-(void)_didFinishWithResult:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_requestRemoteViewController;
-(void)_viewTapped:(id)arg0 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif