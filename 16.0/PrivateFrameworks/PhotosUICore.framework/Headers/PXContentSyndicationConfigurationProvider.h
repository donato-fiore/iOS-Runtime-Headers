// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTSYNDICATIONCONFIGURATIONPROVIDER_H
#define PXCONTENTSYNDICATIONCONFIGURATIONPROVIDER_H

@class SLHighlightCenter, NSString, PHPhotoLibrary;
@protocol PXCollectionsDataSourceManagerObserver, PXSettingsKeyObserver, SLHighlightCenterDelegate;


#import "PXObservable.h"
#import "PXContentSyndicationDataSourceManager.h"

@interface PXContentSyndicationConfigurationProvider : PXObservable <PXCollectionsDataSourceManagerObserver, PXSettingsKeyObserver, SLHighlightCenterDelegate>

 {
    SLHighlightCenter *_socialLayerHighlightCenter;
}


@property (nonatomic) BOOL contentSyndicationIsAvailable; // ivar: _contentSyndicationIsAvailable
@property (nonatomic) NSInteger dataSourceType; // ivar: _dataSourceType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL readyToLoadActualDataSourceManager; // ivar: _readyToLoadActualDataSourceManager
@property (nonatomic) BOOL showContentSyndicationItemInSidebar; // ivar: _showContentSyndicationItemInSidebar
@property (readonly, nonatomic) BOOL showUnsavedSyndicatedContentInFeaturedPhotos; // ivar: _showUnsavedSyndicatedContentInFeaturedPhotos
@property (readonly, nonatomic) BOOL showUnsavedSyndicatedContentInMemories; // ivar: _showUnsavedSyndicatedContentInMemories
@property (nonatomic) BOOL showUnsavedSyndicatedContentInPhotosGrids; // ivar: _showUnsavedSyndicatedContentInPhotosGrids
@property (readonly) Class superclass;
@property (retain, nonatomic) PXContentSyndicationDataSourceManager *syndicationItemsDataSourceManager; // ivar: _syndicationItemsDataSourceManager
@property (retain, nonatomic) PHPhotoLibrary *syndicationPhotoLibrary; // ivar: _syndicationPhotoLibrary
@property (nonatomic) int systemLibraryChangeToken; // ivar: _systemLibraryChangeToken


+(id)sharedInstance;
+(id)testingOverride_contentSyndicationEnabled;
+(void)setTestingOverride_contentSyndicationEnabled:(id)arg0 ;
-(id)_dataSourceManagerForDataSourceType:(NSInteger)arg0 ;
-(id)_init;
-(id)init;
-(void)_createDataSourceManagerIfNeeded;
-(void)_invalidateDataSourceManager;
-(void)_markDataSourceManagerAsReadyToLoad;
-(void)_startObservingSystemLibraryChanges;
-(void)_stopObservingSystemLibraryChanges;
-(void)_updateContentSyndicationAvailability;
-(void)_updateDataSourceType;
-(void)_updateEverything;
-(void)_updateShowContentSyndicationItemInSidebar;
-(void)_updateShowUnsavedSyndicatedContentInFeaturedPhotos;
-(void)_updateShowUnsavedSyndicatedContentInMemories;
-(void)_updateShowUnsavedSyndicatedContentInPhotosGrids;
-(void)dealloc;
-(void)highlightCenter:(id)arg0 didRemoveHighlights:(id)arg1 ;
-(void)highlightCenterSettingsEnablementHasChanged:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif