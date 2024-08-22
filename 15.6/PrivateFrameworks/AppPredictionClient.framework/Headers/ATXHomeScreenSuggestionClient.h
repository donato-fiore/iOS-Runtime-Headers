// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHOMESCREENSUGGESTIONCLIENT_H
#define ATXHOMESCREENSUGGESTIONCLIENT_H

@class NSXPCListener, _PASQueueLock, ATXUICacheManager, NSUserDefaults, NSString, NSXPCConnection;
@protocol NSXPCListenerDelegate, ATXHomeScreenSuggestionServerXPCInterface, ATXChronoServicesProviderDelegate, ATXWidgetDwellTrackerDelegate, ATXHomeScreenEventLoggerDelegate, ATXHomeScreenEventLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenConfigCache.h"
#import "ATXEngagementRecordManager.h"
#import "ATXWidgetDwellTracker.h"
#import "ATXActionPredictionClient.h"
#import "ATXChronoServicesProvider.h"

@interface ATXHomeScreenSuggestionClient : NSObject <NSXPCListenerDelegate, ATXHomeScreenSuggestionServerXPCInterface, ATXChronoServicesProviderDelegate, ATXWidgetDwellTrackerDelegate, ATXHomeScreenEventLoggerDelegate, ATXHomeScreenEventLogging>

 {
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSXPCListener *_xpcListener;
    _PASQueueLock *_lock;
    int _notifyObservers;
    ATXUICacheManager *_uiCacheManager;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXWidgetDwellTracker *_widgetDwellTracker;
    ATXActionPredictionClient *_actionPredictionClient;
    ATXChronoServicesProvider *_chronoServicesProvider;
    NSUserDefaults *_atxDefaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat layoutUpdateSuppressionInterval; // ivar: _layoutUpdateSuppressionInterval
@property (nonatomic) CGFloat rotationSuppressionInterval; // ivar: _rotationSuppressionInterval
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timerLeeway; // ivar: _timerLeeway
@property (retain) NSXPCConnection *xpcConnection; // ivar: _unsafeXPCConnection


+(id)sharedInstance;
-(BOOL)_isFallbackSuggestionUsed:(id)arg0 guardedData:(id)arg1 ;
-(BOOL)_isSystemInitiatedLayoutUpdateAllowed:(id)arg0 ;
-(BOOL)_isWidgetEngaged:(id)arg0 kind:(id)arg1 afterMostRecentProactiveRotationToSuggestionWithIdentifier:(id)arg2 guardedData:(id)arg3 ;
-(BOOL)_replaceSuggestionIfNeeded:(id)arg0 fromProactiveWidget:(id)arg1 guardedData:(id)arg2 ;
-(BOOL)hasWidgetBeenSeen:(id)arg0 ;
-(BOOL)hasWidgetBeenTapped:(id)arg0 ;
-(BOOL)isSuggestionReplacementAvailableForSuggestion:(id)arg0 inLayout:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(NSInteger)_layoutTypeOfSuggestion:(id)arg0 inLayout:(id)arg1 ;
-(NSUInteger)pageIndexOfAppPredictionPanelWithIdentifier:(id)arg0 ;
-(id)_computePreviousSuggestedSuggestionWidgetLayoutsWithGuardedData:(id)arg0 cachedSuggestions:(id)arg1 ;
-(id)_knownProactiveWidgetUniqueIdentifiersInPages:(id)arg0 ;
-(id)_loadKnownHomeScreenProactiveWidgetUniqueIds;
-(id)_loadKnownTodayPageProactiveWidgetUniqueIds;
-(id)_newSuggestionLayoutForOldLayout:(id)arg0 replacedSuggestionId:(id)arg1 shouldSuggestionsBeDisjoint:(BOOL)arg2 usedFallbackIndexSet:(id)arg3 guardedData:(id)arg4 ;
-(id)_replaceSuggestionWithId:(id)arg0 fromSuggestionsArray:(id)arg1 suggestionLayoutType:(NSInteger)arg2 usedFallbackIndexSet:(id)arg3 shouldSuggestionsBeDisjoint:(BOOL)arg4 guardedData:(id)arg5 ;
-(id)homeScreenPrediction;
-(id)init;
-(id)initWithHomeScreenConfigCache:(id)arg0 engagementRecordManager:(id)arg1 widgetDwellTracker:(id)arg2 widgetDismissManager:(id)arg3 uiCacheManager:(id)arg4 actionPredictionClient:(id)arg5 chronoServicesProvider:(id)arg6 store:(id)arg7 logger:(id)arg8 ;
-(id)layoutForAppPredictionPanel:(id)arg0 ;
-(id)layoutForSuggestionsWidget:(id)arg0 ;
-(id)loadHomeScreenPageConfigurationsWithError:(*id)arg0 ;
-(id)unusedFallbackAppSuggestionsForPage:(NSInteger)arg0 ;
-(void)_alertUserIfNeededOfStackChange:(id)arg0 widgetOnTop:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)_cancelAndReleaseLayoutUpdateSuppressionTimer:(id)arg0 ;
-(void)_cleanupGuardedData:(id)arg0 ;
-(void)_clearRotationSuppressionTimerWithGuardedData:(id)arg0 ;
-(void)_dismissSuggestions:(id)arg0 guardedData:(id)arg1 fromSuggestionsWidget:(id)arg2 dismissFromAllUIs:(BOOL)arg3 duration:(CGFloat)arg4 ;
-(void)_handleStackSuggestionDidUpdate:(id)arg0 ;
-(void)_layoutUpdateSuppressionTimerFired;
-(void)_notifyObserversAboutLayoutUpdateWithGuardedData:(id)arg0 ;
-(void)_notifyObserversAboutSuggestionRefreshWithGuardedData:(id)arg0 ;
-(void)_readCachedSuggestionsFromDiskAndUpdateGuardedData:(id)arg0 ;
-(void)_recordSuggestedWidgetIfNecessaryInStacks:(id)arg0 guardedData:(id)arg1 ;
-(void)_refreshInferredEngagementStatusForWidgetSuggestions:(id)arg0 ;
-(void)_replaceSuggestionForAllProactiveWidgets:(id)arg0 guardedData:(id)arg1 ;
-(void)_replaceSuggestionWithId:(id)arg0 shouldSuggestionsBeDisjoint:(BOOL)arg1 guardedData:(id)arg2 ;
-(void)_rotationSuppressionTimerFired;
-(void)_startSuppressingRotationForTimeInterval:(CGFloat)arg0 leeway:(CGFloat)arg1 guardedData:(id)arg2 ;
-(void)_startSuppressingSystemInitiatedLayoutUpdateForTimeInterval:(CGFloat)arg0 leeway:(CGFloat)arg1 guardedData:(id)arg2 ;
-(void)_toggleSiriSearchSettingsOffForAppSuggestion:(id)arg0 ;
-(void)_updateGuardedData:(id)arg0 withCachedSuggestions:(id)arg1 updateProactiveWidgetLayoutsOnly:(BOOL)arg2 ;
-(void)_updateKnownWidgetUniqueIdsIfNecessaryWithGuardedData:(id)arg0 ;
-(void)_updateLoggerStacksToStackSuggestionsFromHomeScreenCachedSuggestions:(id)arg0 ;
-(void)blendingLayerDidUpdateHomeScreenCachedSuggestions:(id)arg0 completion:(id)arg1 ;
-(void)chronoServiceProvider:(id)arg0 finishedPrewarmingSuggestions:(id)arg1 ;
-(void)chronoServiceProvider:(id)arg0 reloadDidCompleteForWidget:(id)arg1 success:(BOOL)arg2 widgetIsReadyForDisplay:(BOOL)arg3 error:(id)arg4 ;
-(void)dealloc;
-(void)didFinishExecutingTappedSuggestion:(id)arg0 fromWidget:(id)arg1 ;
-(void)forceDebugRotationForStack:(id)arg0 extensionBundleId:(id)arg1 kind:(id)arg2 completion:(id)arg3 ;
-(void)getCurrentSuggestionsWidgetAndAppPredictionPanelLayoutsWithCompletionHandler:(id)arg0 ;
-(void)homeScreenPredictionWithReply:(id)arg0 ;
-(void)loadHomeScreenPageConfigurationsWithCompletionHandler:(id)arg0 ;
-(void)logContextMenuDismissOnceForSuggestion:(id)arg0 widget:(id)arg1 blendingCacheId:(id)arg2 ;
-(void)logContextMenuNeverShowAgainForSuggestion:(id)arg0 widget:(id)arg1 blendingCacheId:(id)arg2 ;
-(void)logDeviceLock;
-(void)logDeviceUnlock;
-(void)logDidTapSuggestion:(id)arg0 widget:(id)arg1 blendingCacheId:(id)arg2 ;
-(void)logHomeScreenDidDisappearWithReason:(id)arg0 ;
-(void)logHomeScreenPageDidAppear:(NSUInteger)arg0 topWidgetsByStackIdentifier:(id)arg1 prediction:(id)arg2 ;
-(void)logSpecialPageDidAppear:(NSUInteger)arg0 widgetsByStackId:(id)arg1 prediction:(id)arg2 ;
-(void)logSpecialPageDidDisappear:(NSUInteger)arg0 ;
-(void)logStackDidAppear:(id)arg0 topWidget:(id)arg1 prediction:(id)arg2 ;
-(void)logStackDidDisappear:(id)arg0 topWidget:(id)arg1 prediction:(id)arg2 ;
-(void)logStackDidTap:(id)arg0 engagedUrl:(id)arg1 widgetOnTop:(id)arg2 prediction:(id)arg3 ;
-(void)logStackDidTap:(id)arg0 widgetOnTop:(id)arg1 prediction:(id)arg2 ;
-(void)logStackStatusDidChange:(id)arg0 widgetOnTop:(id)arg1 reason:(NSUInteger)arg2 prediction:(id)arg3 ;
-(void)logStackVisibilityChanged:(id)arg0 visibleRect:(struct CGRect )arg1 topWidget:(id)arg2 prediction:(id)arg3 ;
-(void)logSuggestionsDidAppear:(id)arg0 widget:(id)arg1 blendingCacheId:(id)arg2 ;
-(void)logSuggestionsDidDisappear:(id)arg0 widget:(id)arg1 blendingCacheId:(id)arg2 ;
-(void)logSupplementaryActionInContextMenu:(NSUInteger)arg0 stackId:(id)arg1 widgetOnTop:(id)arg2 prediction:(id)arg3 ;
-(void)logUserDidAcceptWidgetOnboardingSuggestion:(id)arg0 ;
-(void)logUserDidAddPinnedWidget:(id)arg0 defaultsComparator:(id)arg1 ;
-(void)logUserDidAddWidgetToStack:(id)arg0 stackIdentifier:(id)arg1 isSuggestion:(BOOL)arg2 ;
-(void)logUserDidChangeStackConfiguration:(id)arg0 ;
-(void)logUserDidCreateStack:(id)arg0 isSuggestion:(BOOL)arg1 ;
-(void)logUserDidDeletePinnedWidget:(id)arg0 stackLocation:(NSUInteger)arg1 ;
-(void)logUserDidDeleteStack:(id)arg0 stackKind:(NSUInteger)arg1 stackLocation:(NSUInteger)arg2 ;
-(void)logUserDidDeleteWidgetOnStack:(id)arg0 stackIdentifier:(id)arg1 stackKind:(NSUInteger)arg2 stackLocation:(NSUInteger)arg3 ;
-(void)logUserDidEnterEditModeForWidgetOnboarding;
-(void)logUserDidRejectWidgetOnboardingSuggestion:(id)arg0 ;
-(void)logUserDidStartWidgetOnboarding;
-(void)logUserDidSwitchHomeScreenExperience:(NSUInteger)arg0 ;
-(void)logWidgetAddedFeaturesInCoreAnalytics:(id)arg0 rankOfWidgetInGallery:(NSUInteger)arg1 galleryItems:(id)arg2 ;
-(void)logWidgetDidAppear:(id)arg0 blendingCacheId:(id)arg1 ;
-(void)logWidgetDidAppear:(id)arg0 stackId:(id)arg1 prediction:(id)arg2 ;
-(void)logWidgetDidDisappear:(id)arg0 blendingCacheId:(id)arg1 ;
-(void)logWidgetDidDisappear:(id)arg0 stackId:(id)arg1 prediction:(id)arg2 ;
-(void)logWidgetInsertionDidFailInStack:(id)arg0 prediction:(id)arg1 ;
-(void)logWidgetOccluded:(id)arg0 blendingCacheId:(id)arg1 ;
-(void)logWidgetUnoccluded:(id)arg0 blendingCacheId:(id)arg1 ;
-(void)markFallbackAppSuggestion:(id)arg0 asUnusedForPage:(NSInteger)arg1 ;
-(void)markFallbackAppSuggestion:(id)arg0 asUsedForPage:(NSInteger)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setIsUserInteractingWithProactiveWidget:(BOOL)arg0 ;
-(void)significantDwellDetectedForWidget:(id)arg0 date:(id)arg1 ;
-(void)startSuppressingRotationForTimeInterval:(CGFloat)arg0 leeway:(CGFloat)arg1 ;
-(void)synchronouslyRelinquishOnDiskResourcesAheadOfDataDeletionWithCompletionHandler:(id)arg0 ;
-(void)userDidAddSuggestedWidgetPermanently:(id)arg0 toStackWithIdentifier:(id)arg1 prediction:(id)arg2 ;
-(void)userDidRemoveSuggestedWidget:(id)arg0 fromStackWithIdentifier:(id)arg1 prediction:(id)arg2 ;
-(void)writeDockAppList:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeHomeScreenPageConfigurations:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeTodayPageStacks:(id)arg0 appPredictionPanels:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif