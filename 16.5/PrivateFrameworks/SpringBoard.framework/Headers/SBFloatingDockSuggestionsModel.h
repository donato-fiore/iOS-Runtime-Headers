// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLOATINGDOCKSUGGESTIONSMODEL_H
#define SBFLOATINGDOCKSUGGESTIONSMODEL_H

@class NSOrderedSet, NSMutableOrderedSet, NSString, SBFloatingDockDefaults, NSMutableSet, SBRecentDisplayItemsDefaults, PTSingleTestRecipe, SBIconListModel;
@protocol SBRecentDisplayItemsPersistenceDelegate, SBRecentDisplayItemsControllerDelegate, SBIconListModelObserver, SBFloatingDockSuggestionsModelDelegate;

#import <Foundation/Foundation.h>

#import "SBAppSuggestionManager.h"
#import "SBApplicationController.h"
#import "SBBestAppSuggestion.h"
#import "SBIconController.h"
#import "SBIconModel.h"
#import "SBRecentDisplayItemsController.h"
#import "SBRecentDisplayItemsDataStore.h"
#import "SBApplication.h"

@interface SBFloatingDockSuggestionsModel : NSObject <SBRecentDisplayItemsPersistenceDelegate, SBRecentDisplayItemsControllerDelegate, SBIconListModelObserver>



@property (readonly, nonatomic) SBAppSuggestionManager *appSuggestionManager; // ivar: _appSuggestionManager
@property (readonly, nonatomic) SBApplicationController *applicationController; // ivar: _applicationController
@property (readonly, nonatomic) SBBestAppSuggestion *currentAppSuggestion; // ivar: _currentAppSuggestion
@property (copy, nonatomic) NSOrderedSet *currentDisplayItems; // ivar: _currentDisplayItems
@property (readonly, nonatomic) NSMutableOrderedSet *currentRecentDisplayItems; // ivar: _currentRecentDisplayItems
@property (readonly, nonatomic) NSMutableOrderedSet *currentRecentDisplayItemsSortedByRecency; // ivar: _currentRecentDisplayItemsSortedByRecency
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFloatingDockSuggestionsModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBFloatingDockDefaults *floatingDockDefaults; // ivar: _floatingDockDefaults
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) SBIconController *iconController; // ivar: _iconController
@property (retain, nonatomic) SBIconModel *iconModel; // ivar: _iconModel
@property (readonly, nonatomic) NSUInteger maxSuggestions; // ivar: _maxSuggestions
@property (readonly, nonatomic) NSMutableSet *pendingSuggestionUpdateReasons; // ivar: _pendingSuggestionUpdateReasons
@property (readonly, weak, nonatomic) SBRecentDisplayItemsController *recentsController; // ivar: _recentsController
@property (readonly, weak, nonatomic) SBRecentDisplayItemsDataStore *recentsDataStore; // ivar: _recentsDataStore
@property (readonly, nonatomic) SBRecentDisplayItemsDefaults *recentsDefaults; // ivar: _recentsDefaults
@property (nonatomic) BOOL recentsEnabled; // ivar: _recentsEnabled
@property (retain, nonatomic) SBApplication *requestedSuggestedApplication; // ivar: _requestedSuggestedApplication
@property (readonly, nonatomic) PTSingleTestRecipe *stressTestRecipe; // ivar: _stressTestRecipe
@property (readonly) Class superclass;
@property (retain, nonatomic) SBIconListModel *userDockListModel; // ivar: _userDockListModel


-(BOOL)_displayItemContainedInUserDock:(id)arg0 ;
-(BOOL)_isPendingAppSuggestionsUpdate;
-(BOOL)_shouldProcessAppSuggestion:(id)arg0 ;
-(BOOL)dataStore:(id)arg0 shouldRestorePersistedDisplayItem:(id)arg1 ;
-(BOOL)recentDisplayItemsController:(id)arg0 shouldAddItem:(id)arg1 ;
-(BOOL)recentDisplayItemsControllerShouldRepresentAppClipsAsWebClips:(id)arg0 ;
-(NSUInteger)_indexForAppSuggestion:(id)arg0 ;
-(id)_displayItemForAppSuggestion:(id)arg0 ;
-(id)_dockListModelFromIconController;
-(id)_filterRecentDisplayItems:(id)arg0 filteredOutItems:(*id)arg1 ;
-(id)_moveOrAddRecentThenCull:(id)arg0 ;
-(id)_oldestRecent;
-(id)init;
-(id)initWithMaximumNumberOfSuggestions:(NSUInteger)arg0 iconController:(id)arg1 recentsController:(id)arg2 recentsDataStore:(id)arg3 recentsDefaults:(id)arg4 floatingDockDefaults:(id)arg5 appSuggestionManager:(id)arg6 applicationController:(id)arg7 ;
-(id)persistedDisplayItemsForDataStore:(id)arg0 ;
-(void)_addStateCaptureHandlers;
-(void)_appSuggestionsChanged:(id)arg0 ;
-(void)_handleNewRecentItem:(id)arg0 ;
-(void)_iconModelDidChange:(id)arg0 ;
-(void)_iconModelDidLayout:(id)arg0 ;
-(void)_initializeAndObserveDefaults;
-(void)_performAppSuggestionChangedWithNewSuggestion:(id)arg0 ;
-(void)_reloadRecentsAndSuggestions;
-(void)_runStressTestWithCompletion:(id)arg0 ;
-(void)_updateCurrentDisplayItemsAfterContinuityChange:(BOOL)arg0 notifyDelegate:(BOOL)arg1 ;
-(void)beginPendingUpdatesForReason:(id)arg0 ;
-(void)dataStore:(id)arg0 persistDisplayItems:(id)arg1 ;
-(void)dealloc;
-(void)dockViewDidBecomeVisible;
-(void)dockViewDidResignVisible;
-(void)endPendingUpdatesForReason:(id)arg0 ;
-(void)iconList:(id)arg0 didAddIcon:(id)arg1 ;
-(void)iconList:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)recentDisplayItemsController:(id)arg0 didAddItem:(id)arg1 ;
-(void)recentDisplayItemsController:(id)arg0 didAddItem:(id)arg1 andDropItem:(id)arg2 ;
-(void)recentDisplayItemsController:(id)arg0 didMoveItemToFront:(id)arg1 ;
-(void)recentDisplayItemsController:(id)arg0 didRemoveItem:(id)arg1 ;
-(void)resetRecentsAndSuggestions;


@end


#endif