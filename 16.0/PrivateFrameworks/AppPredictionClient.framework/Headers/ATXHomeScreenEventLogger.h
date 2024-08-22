// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENEVENTLOGGER_H
#define ATXHOMESCREENEVENTLOGGER_H

@class _PASSimpleCoalescingTimer, NSArray, NSMutableDictionary, NSSet, ATXUniversalBiomeUIStream, NSUserDefaults, NSString;
@protocol ATXHomeScreenEventLogging, OS_dispatch_queue, ATXPETEventTracker2Protocol, ATXHomeScreenEventLoggerDelegate;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenConfigCache.h"

@interface ATXHomeScreenEventLogger : NSObject <ATXHomeScreenEventLogging>

 {
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedConfigDiffOperation;
    NSArray *_currentConfigurations;
    NSMutableDictionary *_widgetIdToStackId;
    NSMutableDictionary *_stackIdToCachedStackData;
    NSMutableDictionary *_bundleIdToSBPageNumber;
    NSSet *_dockAppSet;
    BOOL _hasAppPanelOnHomeScreen;
    BOOL _hasAppPanelOnLoH;
    BOOL _hasSuggestionWidgetOnHomeScreen;
    BOOL _hasSuggestionWidgetOnLoH;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    ATXUniversalBiomeUIStream *_biomeUIStream;
    id<ATXPETEventTracker2Protocol> *_tracker;
    NSUserDefaults *_defaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATXHomeScreenEventLoggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_stackKindGivenWidgetUniqueId:(id)arg0 ;
-(NSUInteger)_stackKindGivenWidgetUniqueId:(id)arg0 stackIdToStackDataDictionary:(id)arg1 widgetIdToStackIdDictionary:(id)arg2 ;
-(NSUInteger)_stackLocationGivenWidgetUniqueId:(id)arg0 ;
-(NSUInteger)_stackLocationGivenWidgetUniqueId:(id)arg0 stackIdToStackDataDictionary:(id)arg1 widgetIdToStackIdDictionary:(id)arg2 ;
-(id)_homeScreenEventWithDate:(id)arg0 eventTypeString:(id)arg1 stackIdentifier:(id)arg2 stackKind:(NSUInteger)arg3 stackLocation:(NSUInteger)arg4 reason:(id)arg5 widget:(id)arg6 blendingCacheIdentifier:(id)arg7 metadata:(id)arg8 ;
-(id)_pageIndexGivenWidgetUniqueId:(id)arg0 ;
-(id)_pageIndexGivenWidgetUniqueId:(id)arg0 stackIdToStackDataDictionary:(id)arg1 widgetIdToStackIdDictionary:(id)arg2 ;
-(id)_stackIdentifierGivenWidgetUniqueId:(id)arg0 ;
-(id)_stackIdentifierGivenWidgetUniqueId:(id)arg0 widgetIdToStackIdDictionary:(id)arg1 ;
-(id)init;
-(id)initWithHomeScreenConfigCache:(id)arg0 biomeUIStream:(id)arg1 PETEventTracker:(id)arg2 defaults:(id)arg3 ;
-(void)_handleRemovedSuggestedWidgetsIfNecessary:(id)arg0 ;
-(void)_logAppLaunchOverallCaptureRateFromAppPredictionPanelWithTappedWidget:(id)arg0 suggestion:(id)arg1 ;
-(void)_logAppPanelLaunchRatioWithTappedWidget:(id)arg0 ;
-(void)_logCaptureRateDiversionIfAppPredictionPanelExistsWithTappedWidget:(id)arg0 ;
-(void)_logCaptureRateForAppPredictionPanelWithEngagedSuggestion:(id)arg0 isSuggestionsWidget:(BOOL)arg1 widgetIdentifier:(id)arg2 ;
-(void)_logProactiveWidgetEvent:(int)arg0 suggestionIdentifiers:(id)arg1 widget:(id)arg2 blendingCacheId:(id)arg3 date:(id)arg4 ;
-(void)_logRemovalDateOfDefaultTVWidgetIfApplicable:(id)arg0 configDiffer:(id)arg1 ;
-(void)_logSupplementaryActionInContextMenu:(NSUInteger)arg0 stackId:(id)arg1 widget:(id)arg2 prediction:(id)arg3 ;
-(void)_populateCachedIconState:(id)arg0 ;
-(void)_populateStackKindAndLocation:(id)arg0 ;
-(void)_populateSuggestedPageMetadata:(id)arg0 forPage:(id)arg1 ;
-(void)_sendEventToBiomeWithDate:(id)arg0 eventType:(int)arg1 stackIdentifier:(id)arg2 stackKind:(NSUInteger)arg3 stackLocation:(NSUInteger)arg4 reason:(id)arg5 widget:(id)arg6 blendingCacheIdentifier:(id)arg7 metadata:(id)arg8 ;
-(void)_updateCurrentConfigurationsAndLogDiff;
-(void)dockAppListDidChange;
-(void)homeScreenOrTodayPageConfigDidChange;
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
-(void)logUserDidAddApp:(id)arg0 page:(id)arg1 ;
-(void)logUserDidAddPinnedWidget:(id)arg0 page:(id)arg1 defaultsComparator:(id)arg2 ;
-(void)logUserDidAddWidgetToStack:(id)arg0 stackIdentifier:(id)arg1 isSuggestion:(BOOL)arg2 ;
-(void)logUserDidChangeStackConfiguration:(id)arg0 ;
-(void)logUserDidCreateStack:(id)arg0 page:(id)arg1 isSuggestion:(BOOL)arg2 ;
-(void)logUserDidDeletePinnedWidget:(id)arg0 stackLocation:(NSUInteger)arg1 page:(id)arg2 ;
-(void)logUserDidDeleteStack:(id)arg0 stackKind:(NSUInteger)arg1 stackLocation:(NSUInteger)arg2 page:(id)arg3 ;
-(void)logUserDidDeleteWidgetOnStack:(id)arg0 stackIdentifier:(id)arg1 stackKind:(NSUInteger)arg2 stackLocation:(NSUInteger)arg3 ;
-(void)logUserDidEnterEditModeForWidgetOnboarding;
-(void)logUserDidRejectWidgetOnboardingSuggestion:(id)arg0 ;
-(void)logUserDidRemoveApp:(id)arg0 page:(id)arg1 ;
-(void)logUserDidStartWidgetOnboarding;
-(void)logUserDidSwitchHomeScreenExperience:(NSUInteger)arg0 ;
-(void)logWidgetDidAppear:(id)arg0 blendingCacheId:(id)arg1 ;
-(void)logWidgetDidAppear:(id)arg0 stackId:(id)arg1 prediction:(id)arg2 ;
-(void)logWidgetDidDisappear:(id)arg0 blendingCacheId:(id)arg1 ;
-(void)logWidgetDidDisappear:(id)arg0 stackId:(id)arg1 prediction:(id)arg2 ;
-(void)logWidgetInsertionDidFailInStack:(id)arg0 prediction:(id)arg1 ;
-(void)logWidgetOccluded:(id)arg0 blendingCacheId:(id)arg1 ;
-(void)logWidgetUnoccluded:(id)arg0 blendingCacheId:(id)arg1 ;
-(void)notifySuggestedWidgetsToStacksChanged:(id)arg0 ;


@end


#endif