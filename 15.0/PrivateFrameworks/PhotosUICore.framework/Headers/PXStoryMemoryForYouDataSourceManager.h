// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYMEMORYFORYOUDATASOURCEMANAGER_H
#define PXSTORYMEMORYFORYOUDATASOURCEMANAGER_H

@class NSString, PHFetchResult, NSDate, PHPhotoLibrary;
@protocol PXStoryMutableMemoryForYouDataSourceManager, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXMemoryForYouDataSourceManager;


#import "PXSectionedDataSourceManager.h"
#import "PXFetchResultBasedMemoriesDataSourceManager.h"
#import "PXStateBasedMemoriesDataSource.h"
#import "PXUpdater.h"

@interface PXStoryMemoryForYouDataSourceManager : PXSectionedDataSourceManager <PXStoryMutableMemoryForYouDataSourceManager, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXMemoryForYouDataSourceManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXFetchResultBasedMemoriesDataSourceManager *forYouMemoriesDataSourceManager; // ivar: _forYouMemoriesDataSourceManager
@property (readonly, nonatomic) BOOL hasAnyMemories;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) PHFetchResult *memories;
@property (readonly, nonatomic) NSDate *mostRecentCreationDate;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) PXStateBasedMemoriesDataSource *previousForYouMemoriesDataSource; // ivar: _previousForYouMemoriesDataSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(id)createInitialDataSource;
-(id)dailyMemoriesFromMemoryFetchResult:(id)arg0 ;
-(id)dataSourceFromFetchResult:(id)arg0 ;
-(id)forYouMemoryFetchOptions;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)pauseChangeDeliveryWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(void)_invalidateDataSource;
-(void)_setNeedsUpdate;
-(void)_updateDataSource;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg0 ;


@end


#endif