// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUIMODULARCONTROLCENTERVIEWCONTROLLER_H
#define CCUIMODULARCONTROLCENTERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol CCUIModuleCollectionViewControllerDelegate, CCUIContentModuleContextDelegate, CCUIModuleInstanceManagerObserver, CCUIModularControlCenterViewControllerDelegate;


#import "CCUIModuleInstanceManager.h"
#import "CCUIModuleCollectionViewController.h"
#import "CCUIStatusLabelViewController.h"

@interface CCUIModularControlCenterViewController : UIViewController <CCUIModuleCollectionViewControllerDelegate, CCUIContentModuleContextDelegate, CCUIModuleInstanceManagerObserver>

 {
    CCUIModuleInstanceManager *_moduleManager;
}


@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CCUIModularControlCenterViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHomeGestureDismissalAllowed) BOOL homeGestureDismissalAllowed;
@property (nonatomic, getter=isHostedInTestApp) BOOL hostedInTestApp; // ivar: _hostedInTestApp
@property (readonly, nonatomic) CCUIModuleCollectionViewController *moduleCollectionViewController;
@property (readonly, nonatomic) CCUIModuleInstanceManager *moduleInstanceManager; // ivar: _moduleInstanceManager
@property (readonly, nonatomic) NSUInteger moduleRowCount;
@property (readonly, nonatomic) CCUIStatusLabelViewController *statusLabelViewController; // ivar: _statusLabelViewController
@property (readonly) Class superclass;


+(id)_sharedCollectionViewController;
-(BOOL)canDismissPresentedContent;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(NSInteger)_interfaceOrientation;
-(NSInteger)interfaceOrientationForModuleCollectionViewController:(id)arg0 ;
-(id)_moduleCollectionViewContainerView;
-(id)_safeModuleCollectionViewContainerView;
-(id)_safeStatusLabelViewContainerView;
-(id)_statusLabelViewContainerView;
-(id)contentModuleContext:(id)arg0 requestsSensorActivityDataForActiveSensorType:(NSUInteger)arg1 ;
-(id)initWithSystemAgent:(id)arg0 ;
-(struct CCUIModuleLayoutSize )moduleLayoutSizeForContentModuleContext:(id)arg0 forOrientation:(NSInteger)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_reparent;
-(void)_reparentAndBecomeActive;
-(void)_reparentCollectionViewController;
-(void)_resignActive;
-(void)closeCurrentModuleWithCompletionHandler:(id)arg0 ;
-(void)contentModuleContext:(id)arg0 didUpdateHomeGestureDismissalAllowed:(BOOL)arg1 ;
-(void)contentModuleContext:(id)arg0 enqueueStatusUpdate:(id)arg1 ;
-(void)dismissControlCenterForContentModuleContext:(id)arg0 ;
-(void)dismissExpandedModuleAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissExpandedViewForContentModuleContext:(id)arg0 ;
-(void)dismissPresentedContent;
-(void)dismissPresentedContentAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)dismissPresentedContentWithCompletionHandler:(id)arg0 ;
-(void)displayWillTurnOff;
-(void)expandModuleWithIdentifier:(id)arg0 ;
-(void)moduleCollectionViewController:(id)arg0 didAddModuleContainerViewController:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 didBeginInteractionWithModule:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 didCloseExpandedModule:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 didFinishInteractionWithModule:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 didOpenExpandedModule:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 didUpdateHomeGestureDismissalAllowed:(BOOL)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 willCloseExpandedModule:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 willDismissViewController:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 willOpenExpandedModule:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)moduleCollectionViewController:(id)arg0 willRemoveModuleContainerViewController:(id)arg1 ;
-(void)moduleCollectionViewControllerDidUpdateModules:(id)arg0 ;
-(void)moduleInstancesChangedForModuleInstanceManager:(id)arg0 ;
-(void)moduleInstancesLayoutChangedForModuleInstanceManager:(id)arg0 ;
-(void)requestExpandModuleForContentModuleContext:(id)arg0 ;
-(void)requestModuleLayoutSizeUpdateForContentModuleContext:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif