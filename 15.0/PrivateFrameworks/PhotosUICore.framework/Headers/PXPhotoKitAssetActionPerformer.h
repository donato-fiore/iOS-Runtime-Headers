// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITASSETACTIONPERFORMER_H
#define PXPHOTOKITASSETACTIONPERFORMER_H

@class NSArray, NSDictionary, NSString, PHPerson;
@protocol PXRadarConfigurationProvider;


#import "PXAssetActionPerformer.h"
#import "PXPhotoKitImportStatusManager.h"
#import "PXSectionedObjectReference.h"
#import "PXPhotoKitAssetsDataSourceManager.h"
#import "PXPhotosDataSource.h"

@interface PXPhotoKitAssetActionPerformer : PXAssetActionPerformer

@property (readonly, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) NSDictionary *assetsByAssetCollection; // ivar: _assetsByAssetCollection
@property (retain, nonatomic) NSString *importSessionID; // ivar: _importSessionID
@property (retain, nonatomic) PXPhotoKitImportStatusManager *importStatusManager; // ivar: _importStatusManager
@property (retain, nonatomic) PXSectionedObjectReference *objectReference; // ivar: _objectReference
@property (retain, nonatomic) PHPerson *person; // ivar: _person
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *photoKitDataSourceManager; // ivar: _photoKitDataSourceManager
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSourceSnapshot;
@property (nonatomic) NSUInteger presentationSource; // ivar: _presentationSource
@property (retain, nonatomic) NSObject<PXRadarConfigurationProvider> *radarConfigurationProvider; // ivar: _radarConfigurationProvider
@property (nonatomic) BOOL shouldSkipUserConfirmation; // ivar: _shouldSkipUserConfirmation


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnImplicitSelectionInContainerCollection:(id)arg0 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(BOOL)canPerformWithActionManager:(id)arg0 ;
+(BOOL)canPerformWithSelectionSnapshot:(id)arg0 person:(id)arg1 ;
+(id)createActivityWithActionManager:(id)arg0 ;
+(id)createAlertActionWithTitle:(id)arg0 handler:(id)arg1 ;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)createStandardActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(id)_indexPathsInPhotosDataSource:(id)arg0 ;
-(id)createPerformerWithClass:(Class)arg0 actionType:(id)arg1 ;
-(void)forceIncludeAssetsInDataSource;
-(void)instantlyExcludeAssetsFromDataSource;
-(void)stopExcludingAssetsFromDataSource;


@end


#endif