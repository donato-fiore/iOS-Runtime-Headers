// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLOATINGDOCKSUGGESTIONSVIEWCONTROLLER_H
#define SBFLOATINGDOCKSUGGESTIONSVIEWCONTROLLER_H

@class UIViewController, NSString, NSMutableArray, SBFloatingDockViewController, SBDockIconListView, NSSet, SBIconListModel;
@protocol SBFloatingDockSuggestionsModelDelegate, SBLayoutStateTransitionObserver, SBIconViewProviding, SBFloatingDockSuggestionsViewProviding, SBIconViewQuerying, SBFloatingDockSuggestionsViewControllerDelegate;


#import "SBAppSuggestionManager.h"
#import "SBApplicationController.h"
#import "SBIconController.h"
#import "SBLayoutStateTransitionCoordinator.h"
#import "SBFloatingDockSuggestionsModel.h"

@interface SBFloatingDockSuggestionsViewController : UIViewController <SBFloatingDockSuggestionsModelDelegate, SBLayoutStateTransitionObserver, SBIconViewProviding, SBFloatingDockSuggestionsViewProviding, SBIconViewQuerying>



@property (readonly, nonatomic) SBAppSuggestionManager *appSuggestionManager; // ivar: _appSuggestionManager
@property (readonly, nonatomic) SBApplicationController *applicationController; // ivar: _applicationController
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *deferredIconUpdates; // ivar: _deferredIconUpdates
@property (weak, nonatomic) NSObject<SBFloatingDockSuggestionsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger effectiveEnvironmentMode; // ivar: _effectiveEnvironmentMode
@property (weak, nonatomic) SBFloatingDockViewController *floatingDockViewController; // ivar: _floatingDockViewController
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBIconController *iconController; // ivar: _iconController
@property (readonly, weak, nonatomic) NSObject<SBIconViewProviding> *iconViewProvider; // ivar: _iconViewProvider
@property (weak, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator; // ivar: _layoutStateTransitionCoordinator
@property (retain, nonatomic) SBDockIconListView *listView;
@property (readonly, nonatomic) NSUInteger numberOfRecents; // ivar: _numberOfRecents
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (readonly, nonatomic) SBIconListModel *suggestionsIconListModel; // ivar: _suggestionsIconListModel
@property (readonly, weak, nonatomic) SBFloatingDockSuggestionsModel *suggestionsModel; // ivar: _suggestionsModel
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(BOOL)_onHomescreen;
-(BOOL)_shouldDeferUpdateInvolvingContinuity:(BOOL)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg0 ;
-(BOOL)isPresentingIconLocation:(id)arg0 ;
-(id)_iconForDisplayItem:(id)arg0 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)initWithNumberOfRecents:(NSUInteger)arg0 iconController:(id)arg1 applicationController:(id)arg2 layoutStateTransitionCoordinator:(id)arg3 suggestionsModel:(id)arg4 iconViewProvider:(id)arg5 ;
-(void)_didChangeNumberOfIcons;
-(void)_emitPresentedEventInvolvingContinuity:(BOOL)arg0 fromModel:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)_fadeInIcon:(id)arg0 isReplacing:(BOOL)arg1 completion:(id)arg2 ;
-(void)_fadeOutIcon:(id)arg0 atIndex:(NSUInteger)arg1 isReplacing:(BOOL)arg2 completion:(id)arg3 ;
-(void)_iconModelDidChange:(id)arg0 ;
-(void)_listLayoutDidChange:(id)arg0 ;
-(void)_loadAndPlaceIconsInViewForDisplayItems:(id)arg0 ;
-(void)_performDeferredIconUpdates;
-(void)_performOrDefer:(BOOL)arg0 iconUpdate:(id)arg1 ;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)dealloc;
-(void)dockFolderDidEndTransitioning;
-(void)dockFolderWillBeginTransitioning;
-(void)dockSuggestionsModel:(id)arg0 didInsertItem:(id)arg1 atIndex:(NSUInteger)arg2 involvesContinuity:(BOOL)arg3 ;
-(void)dockSuggestionsModel:(id)arg0 didReloadItems:(id)arg1 withItems:(id)arg2 ;
-(void)dockSuggestionsModel:(id)arg0 didRemoveItem:(id)arg1 atIndex:(NSUInteger)arg2 involvesContinuity:(BOOL)arg3 ;
-(void)dockSuggestionsModel:(id)arg0 didReplaceItem:(id)arg1 atIndex:(NSUInteger)arg2 withItem:(id)arg3 atIndex:(NSUInteger)arg4 involvesContinuity:(BOOL)arg5 ;
-(void)dockViewDidBecomeVisible;
-(void)dockViewDidResignVisible;
-(void)dockViewWillBecomeVisible;
-(void)dockViewWillResignVisible;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidBeginWithTransitionContext:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)loadView;
-(void)recycleIconView:(id)arg0 ;


@end


#endif