// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSANALYTICSLOGGER_H
#define WBSANALYTICSLOGGER_H

@class NSMutableDictionary, NSString, AWDServerConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_analyticsSynchronizationQueue;
    NSMutableDictionary *_pageLoadStartTimes;
    NSInteger _persona;
    NSString *_safariVersion;
}


@property (readonly, nonatomic) AWDServerConnection *awdServer; // ivar: _awdServer


+(id)sharedLogger;
-(id)_builtInImageNameToSimpleName:(id)arg0 ;
-(id)_nameForStartPageSection:(NSInteger)arg0 ;
-(id)_sanitizedPathExtensionForAnalyticsForPathExtension:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_didAddBookmarkWithMethod:(id)arg0 menuItemType:(id)arg1 ;
-(void)_didSelectFavoritesGridItemOfSection:(int)arg0 type:(int)arg1 atIndex:(NSUInteger)arg2 itemsPerRow:(NSUInteger)arg3 isNewTabPage:(BOOL)arg4 ;
-(void)_logDiagnosticMessageWithKey:(id)arg0 diagnosticMessage:(id)arg1 integerValue:(NSInteger)arg2 ;
-(void)_logDiagnosticMessageWithKey:(id)arg0 diagnosticMessage:(id)arg1 stringValue:(id)arg2 ;
-(void)_sendEvent:(id)arg0 usingBlock:(id)arg1 ;
-(void)_sendEventAddingVersionInfo:(id)arg0 usingBlock:(id)arg1 ;
-(void)ckBookmarkSyncFinishedWithResult:(NSInteger)arg0 error:(id)arg1 ;
-(void)didAcceptCompletionItemOfType:(NSInteger)arg0 atRank:(NSUInteger)arg1 ;
-(void)didAcceptSearchSuggestionOfType:(NSInteger)arg0 ;
-(void)didActivateReaderWithTrigger:(NSInteger)arg0 ;
-(void)didAddBookmarkFromToolbarMenuWithItemType:(NSInteger)arg0 ;
-(void)didAddBookmarkWithMethod:(NSInteger)arg0 ;
-(void)didAddNumberOfBookmarksInMemory:(NSUInteger)arg0 ;
-(void)didAddReadingListItemWithMethod:(NSInteger)arg0 ;
-(void)didAddWebClip;
-(void)didAutoFillCustomContactSetShowingMeCard:(BOOL)arg0 ;
-(void)didBanWebsiteWithMetadata:(id)arg0 ;
-(void)didChangeStartPageSectionVisibility:(id)arg0 visible:(BOOL)arg1 ;
-(void)didChooseTopHit:(BOOL)arg0 matchLength:(NSUInteger)arg1 matchScore:(float)arg2 ;
-(void)didClassifySafeBrowsingImageWithClassificationString:(id)arg0 confidence:(float)arg1 modelEvaluationDuration:(CGFloat)arg2 ;
-(void)didClearBrowsingDataFromInterval:(NSInteger)arg0 withMethod:(NSInteger)arg1 ;
-(void)didClearStartPageBackgroundImage;
-(void)didCloseTabWithTrigger:(NSInteger)arg0 tabClosingAction:(NSInteger)arg1 numberOfTabsClosed:(NSUInteger)arg2 tabCollectionViewType:(NSInteger)arg3 ;
-(void)didCloseTabWithTrigger:(NSInteger)arg0 tabCollectionViewType:(NSInteger)arg1 ;
-(void)didCloseVisualTabPickerWithMethod:(NSInteger)arg0 ;
-(void)didContinueUserActivityOfType:(NSInteger)arg0 ;
-(void)didConvertExtensionWithKeySupport:(id)arg0 ;
-(void)didCreateNewTabGroup;
-(void)didCreateNewTabGroupFromTheDropDownMenu;
-(void)didDeleteBookmarkInMemory;
-(void)didDeleteNumberOfBookmarksInMemory:(NSUInteger)arg0 ;
-(void)didDetectLanguageOfWebpage:(id)arg0 primaryLocale:(id)arg1 webpageCanBeTranslatedToPrimaryLocale:(BOOL)arg2 canOfferTranslation:(BOOL)arg3 firstNonPrimaryLocaleThatCanBeTranslatedTo:(id)arg4 numberOfPreferredLocales:(NSUInteger)arg5 notificationLevel:(NSInteger)arg6 ;
-(void)didDetectPossibleUserTrackingInHostApp:(id)arg0 urlHasIDFA:(BOOL)arg1 urlHasQueryString:(BOOL)arg2 userInteracted:(BOOL)arg3 viewControllerIsHidden:(BOOL)arg4 ;
-(void)didDetermineReaderAvailability:(BOOL)arg0 ;
-(void)didDismissCompletionListWithItemAccepted:(BOOL)arg0 goKeyTapped:(BOOL)arg1 unifiedFieldContentType:(NSInteger)arg2 ;
-(void)didDismissSwitchToSafariBanner;
-(void)didDownvoteDataSourceWithMetadata:(id)arg0 ;
-(void)didDragAndDropCustomStartPageBackgroundImage;
-(void)didEngageWithStartPageSection:(NSInteger)arg0 ;
-(void)didEnterBackgroundWithBookmarksInMemory;
-(void)didEnterTabViewWithMethod:(NSInteger)arg0 ;
-(void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)arg0 error:(id)arg1 ;
-(void)didFindOnPageWithTrigger:(NSInteger)arg0 ;
-(void)didLoadTabContent:(NSInteger)arg0 ;
-(void)didManuallyMarkReadingListItemAsRead:(BOOL)arg0 ;
-(void)didModifyPerSitePreferenceWithIdentifier:(id)arg0 modificationLevel:(NSInteger)arg1 type:(NSInteger)arg2 method:(NSInteger)arg3 ;
-(void)didMoveToBackgroundWithNumberOfOnGoingDownloads:(NSUInteger)arg0 ;
-(void)didOpenClearHistoryFromSource:(id)arg0 ;
-(void)didOpenNewBlankTabWithTrigger:(NSInteger)arg0 tabCollectionViewType:(NSInteger)arg1 ;
-(void)didOpenNewTabWithURLWithTrigger:(NSInteger)arg0 isExternalLink:(BOOL)arg1 tabCollectionViewType:(NSInteger)arg2 ;
-(void)didOpenNewTabWithURLWithTrigger:(NSInteger)arg0 tabCollectionViewType:(NSInteger)arg1 ;
-(void)didOpenReadingListItemWithReachableNetwork:(BOOL)arg0 isContinuousTransition:(BOOL)arg1 ;
-(void)didOpenRecommendationWithMetadata:(id)arg0 withPosition:(NSInteger)arg1 ;
-(void)didOpenTabGroupDropDownMenu;
-(void)didOpenVisualTabPickerWithMethod:(NSInteger)arg0 ;
-(void)didPerformActionOnDownloadsPopover:(NSInteger)arg0 ;
-(void)didPerformDownloadsFileEvent:(NSInteger)arg0 withFileType:(id)arg1 ;
-(void)didPerformSafeBrowsingAction:(NSInteger)arg0 fromSource:(NSInteger)arg1 ;
-(void)didPerformVisualTabPickerMiscEvent:(NSInteger)arg0 ;
-(void)didPreventBookmarkActionWithBookmarkType:(NSInteger)arg0 actionType:(NSInteger)arg1 ;
-(void)didPrintPage;
-(void)didReceiveInvalidMessageFromWebProcess:(id)arg0 ;
-(void)didReceiveWebKitAnalyticsEventWithName:(id)arg0 payload:(id)arg1 ;
-(void)didReloadWithButtonMenuEvent:(NSInteger)arg0 ;
-(void)didRemoveFrequentlyVisitedSite;
-(void)didRemoveSiteSpecificSearchProvider;
-(void)didRequestPageShowingSideBar:(BOOL)arg0 ;
-(void)didRequestSearchSuggestions;
-(void)didRequestTranslatingToLocale:(id)arg0 webpageLocale:(id)arg1 requestType:(NSInteger)arg2 isTargetLocalePrimaryLocale:(BOOL)arg3 ;
-(void)didRetrieveNumberOfFavorites:(NSUInteger)arg0 ;
-(void)didRetrieveNumberOfFrequentlyVisitedSites:(NSUInteger)arg0 ;
-(void)didRetrieveNumberOfRecommendations:(NSUInteger)arg0 numberOfTopics:(NSUInteger)arg1 ;
-(void)didRevealDownloadWithMIMEType:(id)arg0 uti:(id)arg1 result:(NSInteger)arg2 ;
-(void)didSaveInMemoryBookmarksToSideFile;
-(void)didSelectContactAutoFillSet:(int)arg0 hasPreviouslyCustomizedSet:(BOOL)arg1 ;
-(void)didSelectFavoriteWithOpenLocation:(NSInteger)arg0 ;
-(void)didSelectFavoritesGridFrequentlyVisitedItemAtIndex:(NSUInteger)arg0 itemsPerRow:(NSUInteger)arg1 isNewTabPage:(BOOL)arg2 ;
-(void)didSelectFavoritesGridItemOfType:(int)arg0 atIndex:(NSUInteger)arg1 itemsPerRow:(NSUInteger)arg2 isNewTabPage:(BOOL)arg3 ;
-(void)didSelectFrequentlyVisitedSiteWithOpenLocation:(NSInteger)arg0 ;
-(void)didSelectStartPrivateWindowInDropDownMenu;
-(void)didSelectTabGroupInDropDownMenu;
-(void)didSendTabGroup;
-(void)didSetBuiltInStartPageBackgroundImage;
-(void)didSetCustomStartPageBackgroundImage;
-(void)didSetDownloadFolderToProviderWithIdentifier:(id)arg0 isDefaultFolder:(BOOL)arg1 ;
-(void)didSetPrivateBrowsingEnabled:(BOOL)arg0 ;
-(void)didShowContactAutoFillSetsWithMeCardSets:(BOOL)arg0 showingPreviouslyCustomizedSet:(BOOL)arg1 ;
-(void)didShowPasswordGenerationPromptWithPasswordAccepted:(BOOL)arg0 ;
-(void)didShowSafeBrowsingWarningWithSource:(NSInteger)arg0 ;
-(void)didSnapBack;
-(void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(BOOL)arg0 localState:(NSInteger)arg1 remoteState:(NSInteger)arg2 ;
-(void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)arg0 ;
-(void)didSwitchToSafari:(id)arg0 entryPoint:(id)arg1 ;
-(void)didTakeActionOnClearHistory:(id)arg0 ;
-(void)didToggleDomainSpecificAutomaticReader:(BOOL)arg0 ;
-(void)didToggleGloballyUseAutomaticReader:(BOOL)arg0 ;
-(void)didToggleShowLessButtonForSection:(NSInteger)arg0 ;
-(void)didToggleShowMoreButtonForSection:(NSInteger)arg0 ;
-(void)didToggleShowMoreButtonForSection:(NSInteger)arg0 isShowingMore:(BOOL)arg1 ;
-(void)didUseGeneratedPassword;
-(void)didViewSafariOnboardingExperience:(id)arg0 ;
-(void)didVisitBookmarksWithOpenLocation:(NSInteger)arg0 numberOfBookmarksVisited:(NSUInteger)arg1 ;
-(void)generatedPasswordDidOverwriteExistingPasswordWithTrigger:(NSInteger)arg0 ;
-(void)logDiagnosticMessageWithKey:(id)arg0 diagnosticMessage:(id)arg1 ;
-(void)logDiagnosticMessageWithKey:(id)arg0 diagnosticMessage:(id)arg1 result:(NSInteger)arg2 ;
-(void)logDiagnosticMessageWithKey:(id)arg0 diagnosticMessage:(id)arg1 value:(id)arg2 ;
-(void)pageLoadCompleted:(NSUInteger)arg0 ;
-(void)pageLoadCompleted:(NSUInteger)arg0 withErrorCode:(NSInteger)arg1 ;
-(void)pageLoadStarted:(NSUInteger)arg0 ;
-(void)performOnAnalyticsQueueWithDelay:(NSInteger)arg0 block:(id)arg1 ;
-(void)recordSearchResultPageImpressionWithDefaultSearchProviderIdentifier:(id)arg0 searchProviderIdentifier:(id)arg1 provenance:(NSInteger)arg2 ;
-(void)registerQueriableMetric:(unsigned int)arg0 callback:(id)arg1 ;
-(void)registerSafariVersion:(id)arg0 persona:(NSInteger)arg1 ;
-(void)reportApplicationCacheSize:(NSUInteger)arg0 ;
-(void)reportAudioIndicatorClickEvent:(NSInteger)arg0 ;
-(void)reportAverageNumberOfTabsPerTabGroup:(NSInteger)arg0 andMaximum:(NSInteger)arg1 ;
-(void)reportCustomizationSyncEnablement:(BOOL)arg0 ;
-(void)reportFirstInteractionAfterTranslation:(NSInteger)arg0 maxVisibleHeightPercentage:(float)arg1 ;
-(void)reportInvalidMessageFromWebProcess:(id)arg0 ;
-(void)reportNumberOfDuplicateBookmarksWithTopLevelDuplicatesCount:(NSUInteger)arg0 allDuplicatesCount:(NSUInteger)arg1 ;
-(void)reportNumberOfExtensionsWithFrequencyDictionaryProvider:(id)arg0 ;
-(void)reportNumberOfPinnedTabs:(NSUInteger)arg0 ;
-(void)reportNumberOfTabGroups:(NSInteger)arg0 ;
-(void)reportNumberOfTabs:(NSInteger)arg0 ;
-(void)reportNumberOfTabsPerWindow:(NSInteger)arg0 ;
-(void)reportNumberOfWindows:(NSInteger)arg0 ;
-(void)reportOverlayStatusBarIsEnabled:(BOOL)arg0 ;
-(void)reportPerSitePreferenceModifiedEventWithPreferenceIdentifier:(id)arg0 level:(NSInteger)arg1 location:(NSInteger)arg2 ;
-(void)reportPerSitePreferencePopoverDidOpenEventVia:(NSInteger)arg0 ;
-(void)reportPictureInPictureEvent:(NSInteger)arg0 ;
-(void)reportPrivateBrowsingUsage:(NSInteger)arg0 ;
-(void)reportSafariVersion:(id)arg0 safariAndWebKitVersion:(id)arg1 ;
-(void)reportShowFullURLInSmartSearchFieldPreference:(BOOL)arg0 ;
-(void)reportShowStandaloneTabBarPreference:(BOOL)arg0 ;
-(void)reportStartPageBackgroundImageVisible:(BOOL)arg0 ;
-(void)reportStartPageBackgroundName:(id)arg0 ;
-(void)reportStartPageOverrideStatistics:(id)arg0 ;
-(void)reportStartPageSectionVisibility:(NSInteger)arg0 visible:(BOOL)arg1 ;
-(void)reportStartPageVisibility;
-(void)reportStatusForExtensions:(id)arg0 extensionType:(id)arg1 ;
-(void)reportTabsForNonTabGroupUser:(NSInteger)arg0 andAverageNumber:(NSInteger)arg1 ;
-(void)reportUnifiedFieldEvent:(NSInteger)arg0 ;
-(void)reportUnifiedFieldHistoryItemURLAutocompletedEventWithDaysSinceLastVisit:(id)arg0 ;
-(void)reportUserPreferencesOnLaunchForIconsInTabsEnabled:(BOOL)arg0 javaScriptEnabled:(BOOL)arg1 safeBrowsingEnabled:(BOOL)arg2 siteSpecificSearchEnabled:(BOOL)arg3 trackingPolicy:(NSUInteger)arg4 ;
-(void)reportWeakPasswordWarningEvent:(NSInteger)arg0 ;
-(void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg0 formProperty:(id)arg1 ;
-(void)submitAutomaticReaderActivation:(int)arg0 ;
-(void)submitVersioningMetricWithVersion:(id)arg0 variant:(int)arg1 ;
-(void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)arg0 ;
-(void)userDidParticipateInPasswordAutoFillWithInteraction:(int)arg0 ;
-(void)userDidReceiveSharedPasswordWithOutcome:(int)arg0 ;
-(void)userDidSharePasswordWithOutcome:(int)arg0 ;
-(void)userInteractedWithGeneratedPasswordWithInteractionType:(int)arg0 ;
-(void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg0 formProperty:(id)arg1 ;
-(void)webExtensionBackgroundPage:(id)arg0 livedTooLong:(CGFloat)arg1 ;


@end


#endif