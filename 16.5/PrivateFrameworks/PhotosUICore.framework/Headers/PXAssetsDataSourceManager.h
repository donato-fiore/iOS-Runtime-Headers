// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXASSETSDATASOURCEMANAGER_H
#define PXASSETSDATASOURCEMANAGER_H

@class NSString, NSPredicate, NSAttributedString;
@protocol PXMutableAssetsDataSourceManager;


#import "PXSectionedDataSourceManager.h"
#import "PXAssetsDataSource.h"
#import "PXSharedLibrarySharingSuggestionsCountsManager.h"

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager <PXMutableAssetsDataSourceManager>



@property (nonatomic) NSInteger backgroundFetchOriginSection;
@property (readonly, nonatomic) PXAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBackgroundFetching; // ivar: _isBackgroundFetching
@property (readonly, nonatomic) BOOL isLoadingInitialDataSource; // ivar: _isLoadingInitialDataSource
@property (readonly, copy, nonatomic) NSAttributedString *localizedEmptyPlaceholderAttributedMessage; // ivar: _localizedEmptyPlaceholderAttributedMessage
@property (readonly, copy, nonatomic) NSString *localizedEmptyPlaceholderTitle; // ivar: _localizedEmptyPlaceholderTitle
@property (readonly, copy, nonatomic) NSString *localizedLoadingInitialDataSourceMessage; // ivar: _localizedLoadingInitialDataSourceMessage
@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsCountsManager *px_sharedLibrarySharingSuggestionsCountsManager;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsFiltering; // ivar: _supportsFiltering


-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateSection:(NSInteger)arg0 andSectionsBeforeAndAfter:(NSInteger)arg1 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg0 ;
-(id)createDataSourceManagerForAssetsInSectionOfAsset:(id)arg0 ;
-(id)mutableChangeObject;
-(void)ensureLastSectionHasContent;
-(void)ensureStartingSectionHasContent;
-(void)excludeAssetsAtIndexPaths:(id)arg0 ;
-(void)forceIncludeAssetsAtIndexPaths:(id)arg0 ;
-(void)refreshResultsForAssetCollection:(id)arg0 ;
-(void)registerChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)setCurationEnabled:(BOOL)arg0 forAssetCollection:(id)arg1 ;
-(void)setFilteringDisabled:(BOOL)arg0 forAssetCollection:(id)arg1 ;
-(void)startBackgroundFetchIfNeeded;
-(void)stopExcludingAssets:(id)arg0 ;
-(void)stopForceIncludingAllAssets;
-(void)unregisterChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)waitForAvailabilityOfAsset:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif