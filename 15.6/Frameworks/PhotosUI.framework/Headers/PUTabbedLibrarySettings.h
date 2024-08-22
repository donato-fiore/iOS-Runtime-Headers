// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUTABBEDLIBRARYSETTINGS_H
#define PUTABBEDLIBRARYSETTINGS_H

@class PXSettings;



@interface PUTabbedLibrarySettings : PXSettings

@property (nonatomic) BOOL enableAlbumsTab; // ivar: _enableAlbumsTab
@property (nonatomic) BOOL enableBlankTab; // ivar: _enableBlankTab
@property (nonatomic) BOOL enableConsolidatedAlbumsTab; // ivar: _enableConsolidatedAlbumsTab
@property (nonatomic) BOOL enableCuratedLibraryTab; // ivar: _enableCuratedLibraryTab
@property (nonatomic) BOOL enableForYouTab; // ivar: _enableForYouTab
@property (nonatomic) BOOL enableMemoriesTab; // ivar: _enableMemoriesTab
@property (nonatomic) BOOL enableSearchTab; // ivar: _enableSearchTab
@property (nonatomic) BOOL enableSharedTab; // ivar: _enableSharedTab
@property (nonatomic) BOOL sidebarAllPhotosSuspendsNavigationHighlights; // ivar: _sidebarAllPhotosSuspendsNavigationHighlights
@property (nonatomic) BOOL sidebarAnimateDataSourceUpdates; // ivar: _sidebarAnimateDataSourceUpdates
@property (nonatomic) BOOL sidebarAnimateSelectionUpdates; // ivar: _sidebarAnimateSelectionUpdates
@property (nonatomic) BOOL sidebarEditAutoExpandToEditableItem; // ivar: _sidebarEditAutoExpandToEditableItem
@property (readonly, nonatomic, getter=isSidebarEnabled) BOOL sidebarEnabled;
@property (nonatomic) NSInteger sidebarEnabledMode; // ivar: _sidebarEnabledMode
@property (nonatomic) BOOL sidebarHideNavBackButtonForSelectedItem; // ivar: _sidebarHideNavBackButtonForSelectedItem
@property (nonatomic) BOOL sidebarLaunchAnimateLoad; // ivar: _sidebarLaunchAnimateLoad
@property (nonatomic) NSInteger sidebarLaunchLoadMode; // ivar: _sidebarLaunchLoadMode
@property (nonatomic) BOOL sidebarOnlyScrollOffscreenItemOnScreen; // ivar: _sidebarOnlyScrollOffscreenItemOnScreen
@property (nonatomic) BOOL sidebarPauseChangeProcessingWhenHidden; // ivar: _sidebarPauseChangeProcessingWhenHidden
@property (nonatomic) NSInteger sidebarPausedChangeDetailsBufferLength; // ivar: _sidebarPausedChangeDetailsBufferLength
@property (nonatomic) BOOL sidebarScrollSelectedItemToCenter; // ivar: _sidebarScrollSelectedItemToCenter
@property (nonatomic) BOOL sidebarSimulateNonIncrementalChanges; // ivar: _sidebarSimulateNonIncrementalChanges
@property (nonatomic) BOOL sidebarSymbolImagesOnly; // ivar: _sidebarSymbolImagesOnly
@property (nonatomic) BOOL sidebarUseMacStructure; // ivar: _sidebarUseMacStructure


+(id)keyPathsForValuesAffectingSidebarEnabled;
+(id)settingsControllerModule;
+(id)sharedInstance;
+(id)transientProperties;
-(NSInteger)countOfEnabledTabs;
-(id)allTabs;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif