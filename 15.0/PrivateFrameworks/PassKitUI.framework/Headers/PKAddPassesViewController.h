// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKADDPASSESVIEWCONTROLLER_H
#define PKADDPASSESVIEWCONTROLLER_H

@class UIViewController, _UIAsyncInvocation, PKAssertion, NSArray, PKPassesXPCContainer;
@protocol PKAddPassesViewControllerDelegate;


#import "PKRemoteAddPassesViewController.h"

@interface PKAddPassesViewController : UIViewController {
    BOOL _viewHasAppeared;
    BOOL _succeeded;
    _UIAsyncInvocation *_viewServiceCancelRequest;
    PKRemoteAddPassesViewController *_remoteViewController;
    PKAssertion *_contactlessInterfaceAssertion;
    id<PKAddPassesViewControllerDelegate> *_delegate;
    NSUInteger _presentationSource;
    NSArray *_passes;
    PKPassesXPCContainer *_passesContainer;
}


@property (weak, nonatomic) NSObject<PKAddPassesViewControllerDelegate> *delegate;


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(BOOL)canAddPasses;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(BOOL)succeeded;
-(NSInteger)modalPresentationStyle;
-(NSInteger)modalTransitionStyle;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_initWithPasses:(id)arg0 orPassesContainer:(id)arg1 fromPresentationSource:(NSUInteger)arg2 ;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)initWithPass:(id)arg0 ;
-(id)initWithPasses:(id)arg0 ;
-(id)initWithPasses:(id)arg0 fromPresentationSource:(NSUInteger)arg1 ;
-(id)initWithPassesContainer:(id)arg0 fromPresentationSource:(NSUInteger)arg1 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_applyRemoteViewController:(id)arg0 ;
-(void)_ingestionDidFinishWithResult:(NSUInteger)arg0 ;
-(void)_requestRemoteViewController;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif