// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLIBRARYVIEWCONTROLLER_H
#define SBLIBRARYVIEWCONTROLLER_H

@class SBHLibraryViewController, NSString, ATXAppDirectoryClient;
@protocol SBHLibraryViewControllerObserver, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBLayoutStateTransitionObserver, BSInvalidatable;


#import "SBAsynchronousRenderingAssertion.h"
#import "SBBarSwipeAffordanceViewController.h"
#import "SBSceneManager.h"
#import "SBWindowSceneStatusBarSettingsAssertion.h"

@interface SBLibraryViewController : SBHLibraryViewController <SBHLibraryViewControllerObserver, SBBarSwipeAffordanceObserver, SBBarSwipeAffordanceDelegate, SBLayoutStateTransitionObserver>



@property (retain, nonatomic) SBAsynchronousRenderingAssertion *asynchronousRenderingAssertion; // ivar: _asynchronousRenderingAssertion
@property (retain, nonatomic) SBBarSwipeAffordanceViewController *barSwipeViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<BSInvalidatable> *expandedPodDisplayLayoutElementAssertion; // ivar: _expandedPodDisplayLayoutElementAssertion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ATXAppDirectoryClient *loggingClient; // ivar: _loggingClient
@property (nonatomic, getter=isRotating) BOOL rotating; // ivar: _rotating
@property (readonly, weak, nonatomic) SBSceneManager *sceneManager; // ivar: _sceneManager
@property (retain, nonatomic) SBWindowSceneStatusBarSettingsAssertion *statusBarSettingsAssertion; // ivar: _statusBarSettingsAssertion
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSInvalidatable> *useSnapshotAsBackgroundViewAssertion; // ivar: _useSnapshotAsBackgroundViewAssertion


-(BOOL)_canHandleKeyEvents;
-(BOOL)_canHandleKeyUIEvent:(id)arg0 ;
-(NSUInteger)barSwipeAffordanceView:(id)arg0 systemGestureTypeForType:(NSInteger)arg1 ;
-(id)initWithCategoryMapProvider:(id)arg0 windowScene:(id)arg1 ;
-(void)_acquireUseSnapshotAsBackgroundViewAssertionIfNecessary;
-(void)_didActivateTypeAheadSearchWithPhysicalKeyboardEvent:(id)arg0 ;
-(void)_evaluateAffordanceActivation;
-(void)_evaluateAsyncRenderingAssertion;
-(void)_handleKeyUIEvent:(id)arg0 ;
-(void)_setExpandedPodDisplayLayoutElementActive:(BOOL)arg0 ;
-(void)dealloc;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg0 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)libraryViewController:(id)arg0 didDismissSearchController:(id)arg1 ;
-(void)libraryViewController:(id)arg0 didPresentSearchController:(id)arg1 ;
-(void)libraryViewController:(id)arg0 willDismissFolderController:(id)arg1 ;
-(void)libraryViewController:(id)arg0 willDismissSearchController:(id)arg1 ;
-(void)libraryViewController:(id)arg0 willPresentFolderController:(id)arg1 ;
-(void)libraryViewControllerDidDismiss:(id)arg0 ;
-(void)libraryViewControllerDidPresent:(id)arg0 ;
-(void)libraryViewControllerWillDismiss:(id)arg0 ;
-(void)libraryViewControllerWillPresent:(id)arg0 ;
-(void)overlayController:(id)arg0 didChangePresentationProgress:(CGFloat)arg1 newPresentationProgress:(CGFloat)arg2 fromLeading:(BOOL)arg3 ;
-(void)setPresenter:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif