// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHOMESCREENSERVICE_H
#define SBHOMESCREENSERVICE_H

@class NSMutableSet, FBServiceClientAuthenticator, NSNumber, SBSHomeScreenServiceArrayOfStrings, NSString, BSServiceConnectionListener, SBSDebugActiveWidgetInfo, SBSHomeScreenServiceArrayOfNumbers;
@protocol BSServiceConnectionListenerDelegate, SBSHomeScreenServiceClientToServerInterface;

#import <Foundation/Foundation.h>

#import "SBIconController.h"

@interface SBHomeScreenService : NSObject <BSServiceConnectionListenerDelegate, SBSHomeScreenServiceClientToServerInterface>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSMutableSet *activeConnections; // ivar: _activeConnections
@property (readonly, nonatomic) FBServiceClientAuthenticator *activeWidgetInfoAuthenticator; // ivar: _activeWidgetInfoAuthenticator
@property (readonly, nonatomic) FBServiceClientAuthenticator *addDebugIconAuthenticator; // ivar: _addDebugIconAuthenticator
@property (readonly, nonatomic) FBServiceClientAuthenticator *addEmptyPageAuthenticator; // ivar: _addEmptyPageAuthenticator
@property (readonly, nonatomic) FBServiceClientAuthenticator *addWidgetToTodayViewAuthenticator; // ivar: _addWidgetToTodayViewAuthenticator
@property (readonly, nonatomic) FBServiceClientAuthenticator *addsNewIconsToHomeScreenAuthenticator; // ivar: _addsNewIconsToHomeScreenAuthenticator
@property (copy, nonatomic) NSNumber *addsNewIconsToHomeScreenValue;
@property (readonly, copy, nonatomic) SBSHomeScreenServiceArrayOfStrings *allHomeScreenApplicationBundleIdentifiers;
@property (readonly, copy, nonatomic) SBSHomeScreenServiceArrayOfStrings *allHomeScreenApplicationPlaceholderBundleIdentifiers;
@property (readonly, copy, nonatomic) NSString *allIconLists;
@property (readonly, nonatomic) FBServiceClientAuthenticator *appLibraryRequestUpdateAuthenticator; // ivar: _appLibraryRequestUpdateAuthenticator
@property (readonly, nonatomic) FBServiceClientAuthenticator *configurationAuthenticator; // ivar: _configurationAuthenticator
@property (readonly, nonatomic) BSServiceConnectionListener *connectionListener; // ivar: _connectionListener
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SBSDebugActiveWidgetInfo *debuggingActiveWidgetInfo;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBServiceClientAuthenticator *displayedDateAuthenticator; // ivar: _displayedDateAuthenticator
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FBServiceClientAuthenticator *homeScreenBundleIdentifiersAuthenticator; // ivar: _homeScreenBundleIdentifiersAuthenticator
@property (readonly, copy, nonatomic) NSNumber *homeScreenLayoutAvailability;
@property (readonly, nonatomic) FBServiceClientAuthenticator *homeScreenLayoutAvailabilityAuthenticator; // ivar: _homeScreenLayoutAvailabilityAuthenticator
@property (nonatomic, getter=isHomeScreenLayoutAvailable) BOOL homeScreenLayoutAvailable; // ivar: _homeScreenLayoutAvailable
@property (readonly, nonatomic) SBIconController *iconController; // ivar: _iconController
@property (readonly, nonatomic) FBServiceClientAuthenticator *iconFolderPathLookupAuthenticator; // ivar: _iconFolderPathLookupAuthenticator
@property (readonly, nonatomic) FBServiceClientAuthenticator *largeIconLayoutAuthenticator; // ivar: _largeIconLayoutAuthenticator
@property (copy, nonatomic) NSNumber *largeIconLayoutEnabledValue;
@property (readonly, nonatomic) NSMutableSet *layoutObservingConnections; // ivar: _layoutObservingConnections
@property (copy, nonatomic) NSNumber *lowDensityIconLayoutEnabledValue;
@property (readonly, nonatomic) FBServiceClientAuthenticator *lowDensityLayoutAuthenticator; // ivar: _lowDensityLayoutAuthenticator
@property (readonly, nonatomic) FBServiceClientAuthenticator *observeInstalledWebClipsAuthenticator; // ivar: _observeInstalledWebClipsAuthenticator
@property (readonly, nonatomic) FBServiceClientAuthenticator *openPodAuthenticator; // ivar: _openPodAuthenticator
@property (readonly, copy, nonatomic) SBSHomeScreenServiceArrayOfNumbers *overflowSlotCounts;
@property (readonly, nonatomic) FBServiceClientAuthenticator *overflowSlotsAuthenticator; // ivar: _overflowSlotsAuthenticator
@property (readonly, nonatomic) FBServiceClientAuthenticator *requestSuggestedAppAuthenticator; // ivar: _requestSuggestedAppAuthenticator
@property (readonly, nonatomic) FBServiceClientAuthenticator *resetHomeScreenLayoutAuthenticator; // ivar: _resetHomeScreenLayoutAuthenticator
@property (copy, nonatomic) NSNumber *restrictedWidgetsIconLayoutEnabledValue;
@property (readonly, nonatomic) FBServiceClientAuthenticator *restrictedWidgetsLayoutAuthenticator; // ivar: _restrictedWidgetsLayoutAuthenticator
@property (readonly, nonatomic) FBServiceClientAuthenticator *showsBadgesInAppLibraryAuthenticator; // ivar: _showsBadgesInAppLibraryAuthenticator
@property (copy, nonatomic) NSNumber *showsBadgesInAppLibraryValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableSet *webClipObservingConnections; // ivar: _webClipObservingConnections


+(BOOL)isHomeScreenLayoutAvailableForIconController:(id)arg0 ;
-(BOOL)debugContinuityWithBadgeType:(id)arg0 ;
-(BOOL)hasWidgetWithBundleIdentifier:(id)arg0 ;
-(id)_translatedSBSPresentationErrorCompletionForSBHPresentationErrorCompletion:(SEL)arg0 ;
-(id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg0 ;
-(id)folderPathToIconWithBundleIdentifier:(id)arg0 ;
-(id)initWithIconController:(id)arg0 ;
-(void)_requestAppLibraryUpdate:(id)arg0 reason:(id)arg1 optionalCompletionHandler:(id)arg2 ;
-(void)addDebugIconWithSizeClassDescription:(id)arg0 inPage:(id)arg1 atPositionDescription:(id)arg2 ;
-(void)addEmptyPage;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg0 ;
-(void)changeDisplayedDateOffsetOverride:(id)arg0 ;
-(void)changeDisplayedDateOverride:(id)arg0 ;
-(void)clearAllOverflowSlotCounts;
-(void)clearTodayViewLayout;
-(void)configureDeweyEachAppHasItsOwnCategory;
-(void)configureDeweyOneCategoryWithAllApps;
-(void)configureLibraryWithCategoryLimit:(id)arg0 ;
-(void)dealloc;
-(void)dismissAppLibraryWithCompletion:(id)arg0 ;
-(void)forbidApplicationBundleIdentifierFromLibrary:(id)arg0 withCompletion:(id)arg1 ;
-(void)iconModelDidLayout:(id)arg0 ;
-(void)ignoreAllApps;
-(void)insertEmptyPageAtIndex:(id)arg0 ;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;
-(void)noteHomeScreenLayoutAvailabilityDidChange;
-(void)noteInstalledWebClipsDidChange;
-(void)organizeAllIconsAcrossPagesWithPageCount:(id)arg0 ;
-(void)organizeAllIconsIntoFoldersWithPageCount:(id)arg0 ;
-(void)overrideBadgeValue:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(void)presentAppLibraryAnimated:(id)arg0 completion:(id)arg1 ;
-(void)presentAppLibraryCategoryPodForCategoryIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)refreshAppLibrary:(id)arg0 reason:(id)arg1 ;
-(void)reloadHomeScreenLayout;
-(void)reloadIcons;
-(void)removeAllWidgets;
-(void)removeWidgetsFromHomeScreen;
-(void)requestAppLibraryUpdate:(id)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(void)requestSuggestedApplicationWithBundleIdentifier:(id)arg0 assertionPort:(id)arg1 completion:(id)arg2 ;
-(void)resetCategoriesLayoutWithCompletion:(id)arg0 ;
-(void)resetHomeScreenLayoutWithCompletion:(id)arg0 ;
-(void)resetTodayViewLayout;
-(void)runDownloadingIconTest;
-(void)runFloatingDockStressTestWithCompletion:(id)arg0 ;
-(void)runRemoveAndRestoreIconTest;
-(void)setIconListsHidden:(id)arg0 ;
-(void)setObservingHomeScreenLayoutAvailability:(id)arg0 ;
-(void)setObservingInstalledWebClips:(id)arg0 ;
-(void)setupHomeScreenForWidgetScrollPerformanceTest;
-(void)unforbidApplicationBundleIdentifierFromLibrary:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif