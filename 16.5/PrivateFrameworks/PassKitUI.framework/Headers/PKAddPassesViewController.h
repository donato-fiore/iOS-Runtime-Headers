// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKADDPASSESVIEWCONTROLLER_H
#define PKADDPASSESVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, PKAssertion, NSArray, NSData, PKPassesXPCContainer, NSString;
@protocol UIViewControllerTransitioningDelegate, PKAddPassesViewControllerDelegate;


#import "PKRemoteAddPassesViewController.h"
#import "PKCancelingAnimatedTransitioningHandler.h"

@interface PKAddPassesViewController : UIViewController <UIViewControllerTransitioningDelegate>

 {
    BOOL _viewHasAppeared;
    BOOL _succeeded;
    _UIAsyncInvocation *_viewServiceCancelRequest;
    PKRemoteAddPassesViewController *_remoteViewController;
    PKAssertion *_contactlessInterfaceAssertion;
    PKCancelingAnimatedTransitioningHandler *_animatedTransitionHandler;
    id<PKAddPassesViewControllerDelegate> *_delegate;
    NSUInteger _presentationSource;
    NSArray *_passes;
    NSData *_issuerData;
    NSData *_signature;
    PKPassesXPCContainer *_passesContainer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAddPassesViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPasses;
-(BOOL)prefersStatusBarHidden;
-(BOOL)succeeded;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_initWithPasses:(id)arg0 orPassesContainer:(id)arg1 orIssuerData:(id)arg2 withSignature:(id)arg3 fromPresentationSource:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithIssuerData:(id)arg0 signature:(id)arg1 error:(*id)arg2 ;
-(id)initWithPass:(id)arg0 ;
-(id)initWithPasses:(id)arg0 ;
-(id)initWithPasses:(id)arg0 fromPresentationSource:(NSUInteger)arg1 ;
-(id)initWithPassesContainer:(id)arg0 fromPresentationSource:(NSUInteger)arg1 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_applyRemoteViewController:(id)arg0 ;
-(void)_aquireAssertions;
-(void)_handleCanceledPresentationWithPresentingViewController:(id)arg0 ;
-(void)_ingestionDidFinishWithResult:(NSUInteger)arg0 ;
-(void)_requestRemoteViewController;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif