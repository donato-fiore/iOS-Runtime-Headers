// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STARTPAGECONTROLLER_H
#define STARTPAGECONTROLLER_H

@class WebBookmarkCollection, SFSectionModel, NSItemProvider, NSMutableArray, WebBookmarkList, WBSPrivacyReportData, NSArray, NSString, SFStartPageViewController;
@protocol _SFWebBookmarkActionHandler, SFStartPageCustomizationDataSource, SFStartPageDataSource, SFStartPageVisualStyleProviding, WBSUserDefaultObservation, StartPageDataSource;

#import <Foundation/Foundation.h>

#import "FrequentlyVisitedSitesController.h"
#import "ForYouRecommendationMediator.h"
#import "CloudTabStore.h"

@interface StartPageController : NSObject <_SFWebBookmarkActionHandler, SFStartPageCustomizationDataSource, SFStartPageDataSource>

 {
    id<SFStartPageVisualStyleProviding> *_visualStyleProvider;
    WebBookmarkCollection *_bookmarkCollection;
    SFSectionModel *_cachedCloudTabsSection;
    NSItemProvider *_cachedItemProvider;
    NSMutableArray *_cachedSections;
    WebBookmarkList *_favoritesList;
    FrequentlyVisitedSitesController *_frequentlyVisitedSitesController;
    WBSPrivacyReportData *_privacyReportData;
    WebBookmarkList *_readingList;
    NSArray *_siriSuggestions;
    ForYouRecommendationMediator *_siriSuggestionsMediator;
    id<WBSUserDefaultObservation> *_selectedCloudDeviceObservation;
    BOOL _isDroppingFavorites;
    NSMutableArray *_siriSuggestionsMetadataTokens;
    NSInteger _updatePolicy;
    NSInteger _cachedNumberOfTrackers;
}


@property (retain, nonatomic) CloudTabStore *cloudTabStore; // ivar: _cloudTabStore
@property (weak, nonatomic) NSObject<StartPageDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *libraryType; // ivar: _libraryType
@property (readonly) Class superclass;
@property (retain, nonatomic) SFStartPageViewController *viewController; // ivar: _viewController


+(void)initialize;
-(BOOL)isBackgroundImageEnabledForStartPageCustomizationViewController:(id)arg0 ;
-(BOOL)isCloudSyncEnabled;
-(BOOL)startPageViewController:(id)arg0 isSectionExpanded:(id)arg1 ;
-(NSInteger)effectiveUpdatePolicy;
-(id)_banActionForSiriSuggestion:(id)arg0 ;
-(id)_bookmarkSectionForBookmark:(id)arg0 orList:(id)arg1 forFavoritesSection:(BOOL)arg2 forTopLevelBookmarks:(BOOL)arg3 ;
-(id)_bookmarkSections;
-(id)_cloudTabsSectionWithDevice:(id)arg0 ;
-(id)_cloudTabsSections;
-(id)_downvoteActionForSiriSuggestion:(id)arg0 ;
-(id)_editActionForBookmarkUUID:(id)arg0 ;
-(id)_favoritesSection;
-(id)_frequentlyVisitedSection;
-(id)_highlightsSection;
-(id)_openMenuElementForSiriSuggestion:(id)arg0 forTabGroup:(BOOL)arg1 ;
-(id)_privacyReportSection;
-(id)_readingListSection;
-(id)_selectedCloudTabsDevice;
-(id)_shareActionForSiriSuggestion:(id)arg0 ;
-(id)_siriSuggestionsSection;
-(id)_siriSuggestionsWelcomeBanner;
-(id)backgroundImageForStartPageCustomizationViewController:(id)arg0 ;
-(id)customizationItemsForStartPageCustomizationViewController:(id)arg0 ;
-(id)init;
-(id)initWithVisualStyleProvider:(id)arg0 ;
-(id)sectionsForStartPageViewController:(id)arg0 ;
-(id)startPageViewController:(id)arg0 detailSectionForItemIdentifier:(id)arg1 ;
-(void)_appendSectionModelsForIdentifier:(id)arg0 collectionType:(id)arg1 toArray:(id)arg2 ;
-(void)_bookmarkFolderDidChange:(id)arg0 ;
-(void)_bookmarksDidReload:(id)arg0 ;
-(void)_cloudTabsDidChange;
-(void)_cloudTabsDidChange:(id)arg0 ;
-(void)_fetchHandoffResult;
-(void)_frequentlyVisitedSitesDidChange:(id)arg0 ;
-(void)_highlightsDidChange:(id)arg0 ;
-(void)_historyWasAltered;
-(void)_historyWasCleared;
-(void)_privacyProxyStateDidChange;
-(void)_privacyReportDataDidChange;
-(void)_refreshSiriSuggestions;
-(void)_reloadPrivacyReportSection;
-(void)_reportBookmarkNavigationAnalytics:(id)arg0 withIntent:(id)arg1 ;
-(void)_requestLeadImageForRecommendation:(id)arg0 ;
-(void)_scheduleHandoffApplicationUpdate:(id)arg0 ;
-(void)_sectionsDidChange:(id)arg0 ;
-(void)_setLeadImageForCard:(id)arg0 withRecommendation:(id)arg1 ;
-(void)_setReadingListRecommendationAsReadWithRecommendation:(id)arg0 ;
-(void)_setSiriSuggestions:(id)arg0 ;
-(void)_setUpContextMenuForBookmarksSection:(id)arg0 ;
-(void)_setUpDragItemProviderForBookmarksSection:(id)arg0 ;
-(void)_showEditUIForBookmarkWithUUID:(id)arg0 ;
-(void)_updateImageForRecommendation:(id)arg0 ;
-(void)_updatePrivacyReportData;
-(void)_updateRecommendationsForAllTopics;
-(void)_updateRecommendationsForTopics:(id)arg0 ;
-(void)_updateSiriSuggestionsMediator;
-(void)bookmark:(id)arg0 didProduceNavigationIntent:(id)arg1 userInfo:(id)arg2 ;
-(void)bookmark:(id)arg0 shareItems:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(void)deleteBookmark:(id)arg0 userInfo:(id)arg1 ;
-(void)didReorderSectionIdentifiersForStartPageCustomizationViewController:(id)arg0 ;
-(void)editBookmark:(id)arg0 userInfo:(id)arg1 ;
-(void)startPageCustomizationViewController:(id)arg0 didCustomizeSections:(id)arg1 ;
-(void)startPageCustomizationViewController:(id)arg0 didModifyBackgroundImageEnabled:(BOOL)arg1 ;
-(void)startPageCustomizationViewController:(id)arg0 didSelectBuiltInBackgroundImageAtURL:(id)arg1 precomputedLuminance:(CGFloat)arg2 ;
-(void)startPageCustomizationViewController:(id)arg0 didSelectCustomBackgroundImage:(id)arg1 ;
-(void)startPageCustomizationViewController:(id)arg0 willModifySectionWithIdentifier:(id)arg1 enabled:(BOOL)arg2 ;
-(void)startPageViewController:(id)arg0 didSelectItemWithIdentifier:(id)arg1 ;
-(void)startPageViewController:(id)arg0 toggleSectionExpanded:(id)arg1 ;
-(void)startPageViewControllerDidChangeRootViewVisibility:(id)arg0 ;
-(void)updatePolicyDidChange;


@end


#endif