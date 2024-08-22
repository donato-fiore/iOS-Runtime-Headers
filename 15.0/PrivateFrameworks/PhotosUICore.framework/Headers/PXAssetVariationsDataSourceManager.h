// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETVARIATIONSDATASOURCEMANAGER_H
#define PXASSETVARIATIONSDATASOURCEMANAGER_H

@class PHAsset, NSString;
@protocol PXPhotoLibraryUIChangeObserver, PXAssetEditOperationManagerObserver;


#import "PXSectionedDataSourceManager.h"
#import "PXAssetVariationsDataSource.h"
#import "PXAssetEditOperationManager.h"

@interface PXAssetVariationsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver, PXAssetEditOperationManagerObserver>

 {
    ? _needsUpdateFlags;
    BOOL _didCreateInitialDataSource;
}


@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) PHAsset *currentAsset; // ivar: _currentAsset
@property (nonatomic) NSInteger currentVariationType; // ivar: _currentVariationType
@property (readonly, nonatomic) PXAssetVariationsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXAssetEditOperationManager *editOperationManager; // ivar: _editOperationManager
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger pendingVariationType; // ivar: _pendingVariationType
@property (readonly) Class superclass;


-(BOOL)_needsUpdate;
-(id)_variationOptionWithType:(NSInteger)arg0 asset:(id)arg1 ;
-(id)init;
-(id)initWithAsset:(id)arg0 editOperationManager:(id)arg1 ;
-(void)_invalidateCurrentVariationType;
-(void)_invalidateDataSource;
-(void)_invalidatePendingVariationType;
-(void)_setNeedsUpdate;
-(void)_updateCurrentVariationTypeIfNeeded;
-(void)_updateDataSourceIfNeeded;
-(void)_updateIfNeeded;
-(void)_updatePendingVariationTypeIfNeeded;
-(void)didPerformChanges;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;


@end


#endif