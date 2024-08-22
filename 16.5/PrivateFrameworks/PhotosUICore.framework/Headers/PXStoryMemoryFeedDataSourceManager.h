// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYMEMORYFEEDDATASOURCEMANAGER_H
#define PXSTORYMEMORYFEEDDATASOURCEMANAGER_H

@class NSString, PHPhotoLibrary;
@protocol PXStoryMutableMemoryFeedDataSourceManager, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXPreferencesObserver;


#import "PXSectionedDataSourceManager.h"
#import "PXFetchResultBasedMemoriesDataSourceManager.h"
#import "PXUpdater.h"

@interface PXStoryMemoryFeedDataSourceManager : PXSectionedDataSourceManager <PXStoryMutableMemoryFeedDataSourceManager, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXPreferencesObserver>



@property (readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *allMemoriesDataSourceManager; // ivar: _allMemoriesDataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *favoriteMemoriesDataSourceManager; // ivar: _favoriteMemoriesDataSourceManager
@property (readonly, nonatomic) BOOL hasAnyFavorites; // ivar: _hasAnyFavorites
@property (readonly, nonatomic) BOOL hasAnyMemories;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) BOOL wantsFavoritesOnly; // ivar: _wantsFavoritesOnly


-(id)createInitialDataSource;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)pauseChangeDeliveryWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(void)_invalidateChildDataSourceManagers;
-(void)_invalidateDataSource;
-(void)_invalidateHasAnyFavorites;
-(void)_setDataSourceToEmpty;
-(void)_setNeedsUpdate;
-(void)_updateChildDataSourceManagers;
-(void)_updateDataSource;
-(void)_updateHasAnyFavorites;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)preferencesDidChange;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg0 ;


@end


#endif