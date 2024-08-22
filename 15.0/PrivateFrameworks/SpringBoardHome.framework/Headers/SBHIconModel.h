// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHICONMODEL_H
#define SBHICONMODEL_H

@class NSMutableDictionary, NSMutableSet, NSHashTable, NSSet, NSTimer, NSString, NSDictionary, NSOrderedSet, SBSHomeScreenService;
@protocol SBFolderObserver, SBIconObserver, SBHIconModelApplicationDataSourceObserver, SBSHomeScreenServiceInstalledWebClipsObserver, SBIconDelegate, SBHIconStateUnarchiverIconSource, SBHIconStateUnarchiverDelegate, BSDescriptionProviding, SBHIconModelApplicationDataSource, SBHIconModelDelegate, BSInvalidatable, SBIconModelStore;

#import <Foundation/Foundation.h>

#import "SBRootFolder.h"
#import "SBIcon.h"

@interface SBHIconModel : NSObject <SBFolderObserver, SBIconObserver, SBHIconModelApplicationDataSourceObserver, SBSHomeScreenServiceInstalledWebClipsObserver, SBIconDelegate, SBHIconStateUnarchiverIconSource, SBHIconStateUnarchiverDelegate, BSDescriptionProviding>

 {
    NSMutableDictionary *_leafIconsByIdentifier;
    NSMutableDictionary *_widgetIconsByIdentifier;
    NSMutableDictionary *_applicationIconsByBundleIdentifier;
    NSMutableSet *_additionalApplicationIconIdentifiers;
    NSHashTable *_folders;
    NSMutableSet *_autosaveDisableAssertions;
    NSMutableSet *_removedIcons;
    *__CFRunLoopObserver _iconRunLoopObserver;
    *__CFRunLoopObserver _discardCachedOtherRootFoldersRunLoopObserver;
    BOOL _tagsHaveBeenSet;
    NSMutableDictionary *_alternateListLayouts;
}


@property (readonly, nonatomic) NSObject<SBHIconModelApplicationDataSource> *applicationDataSource; // ivar: _applicationDataSource
@property (copy, nonatomic) NSSet *archivedLeafIdentifiers; // ivar: _archivedLeafIdentifiers
@property (nonatomic) BOOL automaticallyAddsApplicationPlaceholders; // ivar: _automaticallyAddsApplicationPlaceholders
@property (nonatomic) BOOL automaticallyAddsApplications; // ivar: _automaticallyAddsApplications
@property (nonatomic) BOOL automaticallyAddsWebClips; // ivar: _automaticallyAddsWebClips
@property (retain, nonatomic) NSTimer *autosaveTimer; // ivar: _autosaveTimer
@property (retain, nonatomic) SBRootFolder *cachedDefaultRootFolder; // ivar: _cachedDefaultRootFolder
@property (retain, nonatomic) SBRootFolder *cachedDesiredRootFolder; // ivar: _cachedDesiredRootFolder
@property (nonatomic, getter=isCheckingModelConsistency) BOOL checkingModelConsistency; // ivar: _checkingModelConsistency
@property (readonly, copy, nonatomic) NSSet *currentLeafIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *defaultIconState;
@property (weak, nonatomic) NSObject<SBHIconModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *desiredIconState; // ivar: _desiredIconState
@property (copy, nonatomic) NSOrderedSet *desiredIconStateFlattened; // ivar: _desiredIconStateFlattened
@property (readonly, copy, nonatomic) NSSet *firstPageLeafIdentifiers;
@property (readonly, nonatomic) SBHIconGridSizeClassSizes gridSizeClassSizes;
@property (readonly, nonatomic) BOOL hasDesiredIconState;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *hiddenIconTags; // ivar: _hiddenIconTags
@property (readonly, nonatomic) SBSHomeScreenService *homeScreenService; // ivar: _homeScreenService
@property (nonatomic, getter=isIconStateDirty) BOOL iconStateDirty; // ivar: _iconStateDirty
@property (nonatomic) BOOL ignoresIconsNotInIconState; // ivar: _ignoresIconsNotInIconState
@property (retain, nonatomic) NSObject<BSInvalidatable> *installedWebClipsObservation; // ivar: _installedWebClipsObservation
@property (nonatomic) NSInteger lastLayoutStatus; // ivar: _lastLayoutStatus
@property (nonatomic, getter=isLayingOut) BOOL layingOut; // ivar: _layingOut
@property (readonly, copy, nonatomic) NSSet *leafIconIdentifiers;
@property (readonly, copy, nonatomic) NSSet *leafIcons;
@property (readonly, copy, nonatomic) NSSet *leafIconsUniquedByApplicationBundleIdentifier;
@property (readonly, nonatomic) NSUInteger listRotatedLayoutClusterGridSizeClass;
@property (readonly, copy, nonatomic) NSString *localizedDefaultFolderName;
@property (readonly, nonatomic) NSUInteger maxColumnCountForTodayList;
@property (readonly, nonatomic) NSUInteger maxIconCountForDock;
@property (readonly, nonatomic) NSUInteger maxListCountForFolders;
@property (readonly, nonatomic) NSUInteger maxRowCountForFavoriteTodayList;
@property (readonly, copy, nonatomic) NSSet *missingDesiredIconIdentifiers;
@property (nonatomic, getter=isRestoring) BOOL restoring; // ivar: _restoring
@property (readonly, nonatomic) SBRootFolder *rootFolder; // ivar: _rootFolder
@property (nonatomic) NSUInteger rootFolderAllowedGridSizeClasses; // ivar: _rootFolderAllowedGridSizeClasses
@property (retain, nonatomic) SBIcon *rootFolderIcon; // ivar: _rootFolderIcon
@property (nonatomic) BOOL sortsIconsAlphabetically; // ivar: _sortsIconsAlphabetically
@property (retain, nonatomic) NSObject<SBIconModelStore> *store; // ivar: _store
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDock;
@property (retain, nonatomic) NSObject<SBIconModelStore> *todayListsStore; // ivar: _todayListsStore
@property (readonly, copy, nonatomic) NSString *unlocalizedDefaultFolderName;
@property (readonly, copy, nonatomic) NSSet *visibleIconIdentifiers;
@property (readonly, copy, nonatomic) NSSet *visibleIconTags; // ivar: _visibleIconTags


+(Class)applicationIconClass;
+(Class)bookmarkClass;
+(Class)bookmarkIconClass;
+(Class)iconClassForApplicationWithBundleIdentifier:(id)arg0 ;
+(id)allWebClips;
+(id)currentLocaleDidChangeNotificationName;
+(id)defaultApplicationDataSource;
+(id)migratedIdentifierForLeafIdentifier:(id)arg0 ;
-(BOOL)_saveIconStateWithError:(*id)arg0 ;
-(BOOL)_shouldSkipAddingIcon:(id)arg0 toRootFolder:(id)arg1 ;
-(BOOL)addIcon:(id)arg0 toDesignatedLocationBasedOnOtherRootFolder:(id)arg1 toRootFolder:(id)arg2 options:(NSUInteger)arg3 listGridCellInfoOptions:(NSUInteger)arg4 ;
-(BOOL)addIcon:(id)arg0 toDesignatedLocationInRootFolder:(id)arg1 options:(NSUInteger)arg2 listGridCellInfoOptions:(NSUInteger)arg3 ;
-(BOOL)addIconToDesignatedLocation:(id)arg0 options:(NSUInteger)arg1 listGridCellInfoOptions:(NSUInteger)arg2 ;
-(BOOL)addIconToDesignatedLocationBasedOnDefaultIconState:(id)arg0 toRootFolder:(id)arg1 options:(NSUInteger)arg2 listGridCellInfoOptions:(NSUInteger)arg3 ;
-(BOOL)addIconToDesignatedLocationBasedOnDelegate:(id)arg0 toRootFolder:(id)arg1 options:(NSUInteger)arg2 listGridCellInfoOptions:(NSUInteger)arg3 ;
-(BOOL)addIconToDesignatedLocationBasedOnDesiredIconState:(id)arg0 toRootFolder:(id)arg1 options:(NSUInteger)arg2 listGridCellInfoOptions:(NSUInteger)arg3 ;
-(BOOL)deleteIconState;
-(BOOL)deleteIconStateWithOptions:(NSUInteger)arg0 ;
-(BOOL)iconStateUnarchiver:(id)arg0 listsAllowRotatedLayoutForFolderClass:(Class)arg1 ;
-(BOOL)isIconVisible:(id)arg0 ;
-(BOOL)isTrackingIcon:(id)arg0 ;
-(BOOL)listsAllowRotatedLayoutForFolderClass:(Class)arg0 ;
-(BOOL)saveIconStateIfNeeded;
-(BOOL)shouldAvoidCreatingIconForApplication:(id)arg0 ;
-(BOOL)shouldAvoidPlacingIconOnFirstPage:(id)arg0 ;
-(BOOL)shouldPlaceIconOnIgnoredList:(id)arg0 ;
-(Class)iconClassForApplicationWithBundleIdentifier:(id)arg0 ;
-(NSInteger)_getLoadedIconState:(*id)arg0 error:(*id)arg1 ;
-(NSUInteger)allowedGridSizeClassesForDock;
-(NSUInteger)allowedGridSizeClassesForDockForIconStateUnarchiver:(id)arg0 ;
-(NSUInteger)allowedGridSizeClassesForFolderClass:(Class)arg0 ;
-(NSUInteger)allowedGridSizeClassesForTodayList;
-(NSUInteger)allowedGridSizeClassesForTodayListForIconStateUnarchiver:(id)arg0 ;
-(NSUInteger)iconStateUnarchiver:(id)arg0 allowedGridSizeClassesForFolderClass:(Class)arg1 ;
-(NSUInteger)listRotatedLayoutClusterGridSizeClassForIconStateUnarchiver:(id)arg0 ;
-(NSUInteger)maxColumnCountForListInRootFolderWithInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)maxIconCountForDockForIconStateUnarchiver:(id)arg0 ;
-(NSUInteger)maxListCountForFoldersForIconStateUnarchiver:(id)arg0 ;
-(NSUInteger)maxRowCountForListInRootFolderWithInterfaceOrientation:(NSInteger)arg0 ;
-(id)_adjustedDesiredIndexPathInRootFolder:(id)arg0 forIconWithIdentifier:(id)arg1 ;
-(id)_adjustedIndexPathInRootFolder:(id)arg0 withinIconState:(id)arg1 forIconWithIdentifier:(id)arg2 ;
-(id)_adjustedPlatformIndexPathInRootFolder:(id)arg0 forIcon:(id)arg1 ;
-(id)_unarchiveRootFolderWithLayoutStatus:(*NSInteger)arg0 ;
-(id)addAdditionalIconMatchingIcon:(id)arg0 ;
-(id)addApplication:(id)arg0 ;
-(id)addApplication:(id)arg0 force:(BOOL)arg1 ;
-(id)addApplicationPlaceholder:(id)arg0 ;
-(id)addBookmarkIconForWebClip:(id)arg0 ;
-(id)applicationIconForBundleIdentifier:(id)arg0 ;
-(id)applicationIconsForBundleIdentifier:(id)arg0 ;
-(id)applicationWithBundleIdentifier:(id)arg0 ;
-(id)bookmarkIconForWebClipIdentifier:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)desiredFolderCreationActionsForInsertingNewIcon:(id)arg0 ;
-(id)desiredIndexPathForIconWithIdentifier:(id)arg0 ;
-(id)disableIconStateAutosaveForReason:(id)arg0 ;
-(id)expectedIconForDisplayIdentifier:(id)arg0 ;
-(id)expectedIconForDisplayIdentifier:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)iconModelMetadata;
-(id)iconState;
-(id)iconsOfClass:(Class)arg0 ;
-(id)indexPathForIconInPlatformState:(id)arg0 ;
-(id)indexPathForNewIcon:(id)arg0 isDesignatedLocation:(*BOOL)arg1 replaceExistingIconAtIndexPath:(*id)arg2 ;
-(id)indexPathInRootFolder:(id)arg0 forNewIcon:(id)arg1 isDesignatedLocation:(*BOOL)arg2 replaceExistingIconAtIndexPath:(*id)arg3 ;
-(id)init;
-(id)initWithStore:(id)arg0 ;
-(id)initWithStore:(id)arg0 applicationDataSource:(id)arg1 ;
-(id)leafIconForIdentifier:(id)arg0 ;
-(id)leafIconsForIdentifiers:(id)arg0 ;
-(id)leafIconsForIdentifiers:(id)arg0 notFoundMarker:(id)arg1 ;
-(id)localizedFolderNameForDefaultDisplayName:(id)arg0 ;
-(id)makeFolderWithDisplayName:(id)arg0 ;
-(id)makeFolderWithDisplayName:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)modernizeRootArchive:(id)arg0 ;
-(id)removeApplication:(id)arg0 ;
-(id)removeApplication:(id)arg0 pruneEmptyIcons:(BOOL)arg1 ;
-(id)removeApplicationPlaceholder:(id)arg0 ;
-(id)removeApplicationWithBundleIdentifier:(id)arg0 ;
-(id)removeApplicationWithBundleIdentifier:(id)arg0 pruneEmptyIcons:(BOOL)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)unarchivedRootFolderForAddingIconFromOtherIconState:(id)arg0 ;
-(id)widgetIcons;
-(id)widgetIconsContainingWidgetsMatchingExtensionBundleIdentifier:(id)arg0 kind:(id)arg1 sizeClass:(NSInteger)arg2 ;
-(id)widgetIconsContainingWidgetsMatchingUniqueIdentifier:(id)arg0 ;
-(struct SBHIconGridSize )iconStateUnarchiver:(id)arg0 listGridSizeForFolderClass:(Class)arg1 ;
-(struct SBHIconGridSize )iconStateUnarchiver:(id)arg0 listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg1 ;
-(struct SBHIconGridSize )listGridSizeForFolderClass:(Class)arg0 ;
-(struct SBHIconGridSize )listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg0 ;
-(struct SBHIconGridSizeClassSizes )gridSizeClassSizesForIconStateUnarchiver:(id)arg0 ;
-(void)_checkRemovedIcons;
-(void)_noteApplicationIconImageChanged:(id)arg0 ;
-(void)_noteRemovedIcons:(id)arg0 ;
-(void)_removeIconStateAutosaveDisableAssertion:(id)arg0 ;
-(void)_rootFolder:(id)arg0 moveIconsToFirstPage:(id)arg1 placeBumpedIconsSomewhereNice:(id)arg2 ;
-(void)_saveIconState;
-(void)_setUpIconRunLoopObserver;
-(void)_tearDownDiscardCachedOtherRootFoldersRunloopObserverIfNeeded;
-(void)_tearDownIconRunloopObserverIfNeeded;
-(void)addIcon:(id)arg0 ;
-(void)addIconsOfClass:(Class)arg0 toSet:(id)arg1 ;
-(void)adjustIconsToShow:(id)arg0 iconsToHide:(id)arg1 afterChangeToVisibleIconTags:(id)arg2 hiddenIconTags:(id)arg3 ;
-(void)autosaveTimerDidFire:(id)arg0 ;
-(void)checkModelConsistency;
-(void)checkModelConsistencyInRootFolder:(id)arg0 listGridCellInfoOptions:(NSUInteger)arg1 ;
-(void)checkModelConsistencyWithListGridCellInfoOptions:(NSUInteger)arg0 ;
-(void)clearDesiredIconState;
-(void)clearDesiredIconStateIfPossible;
-(void)clearDesiredIconStateWithOptions:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)didAddIcon:(id)arg0 ;
-(void)didUnarchiveMetadata:(id)arg0 ;
-(void)discardCachedOtherRootFolders;
-(void)enumerateApplicationIconsForBundleIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateLeafIconsUsingBlock:(id)arg0 ;
-(void)folder:(id)arg0 didAddIcons:(id)arg1 removedIcons:(id)arg2 ;
-(void)folder:(id)arg0 didAddList:(id)arg1 ;
-(void)folder:(id)arg0 didReplaceIcon:(id)arg1 withIcon:(id)arg2 ;
-(void)folder:(id)arg0 willAddIcon:(id)arg1 ;
-(void)folderIconStateDidDirty:(id)arg0 ;
-(void)icon:(id)arg0 launchFromLocation:(id)arg1 context:(id)arg2 ;
-(void)iconArchivableStateDidChange:(id)arg0 ;
-(void)iconModelApplicationDataSource:(id)arg0 applicationPlaceholdersAdded:(id)arg1 ;
-(void)iconModelApplicationDataSource:(id)arg0 applicationPlaceholdersRemoved:(id)arg1 ;
-(void)iconModelApplicationDataSource:(id)arg0 applicationsAdded:(id)arg1 ;
-(void)iconModelApplicationDataSource:(id)arg0 applicationsRemoved:(id)arg1 ;
-(void)iconModelApplicationDataSource:(id)arg0 applicationsUpdated:(id)arg1 ;
-(void)iconWantsUninstall:(id)arg0 ;
-(void)importDesiredIconState:(id)arg0 ;
-(void)installedWebClipsDidChange;
-(void)layout;
-(void)layoutIfNeeded;
-(void)loadAllIcons;
-(void)loadDesiredIconState;
-(void)localeChanged;
-(void)markIconStateClean;
-(void)markIconStateDirty;
-(void)reloadIcons;
-(void)removeAllIcons;
-(void)removeApplicationIconsForBundleIdentifier:(id)arg0 ;
-(void)removeIcon:(id)arg0 ;
-(void)removeIcon:(id)arg0 shouldRemoveFromRootFolder:(BOOL)arg1 ;
-(void)removeIconForIdentifier:(id)arg0 ;
-(void)removeIcons:(id)arg0 ;
-(void)saveDesiredIconState;
-(void)scheduleDiscardOfCachedOtherRootFolders;
-(void)scheduleIconStateAutosave;
-(void)setForecastedLeavesOnIconModel:(id)arg0 includingMissingIcons:(id)arg1 ;
-(void)setVisibilityOfIconsWithVisibleTags:(id)arg0 hiddenTags:(id)arg1 ;
-(void)updateExistingBookmarkIcon:(id)arg0 forUpdatedWebClip:(id)arg1 ;
-(void)willLayout;


@end


#endif