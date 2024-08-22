// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXADDASSETSTOASSETCOLLECTIONACTION_H
#define PXADDASSETSTOASSETCOLLECTIONACTION_H

@class PHAssetCollection, PHAsset, PHFetchResult, PHPhotoLibrary, NSArray;
@protocol PXFastEnumeration;


#import "PXAssetsAction.h"
#import "PXContentSyndicationPhotoKitAssetGroup.h"

@interface PXAddAssetsToAssetCollectionAction : PXAssetsAction

@property (retain, nonatomic) NSObject<PXFastEnumeration> *addedAssets; // ivar: _addedAssets
@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) PXContentSyndicationPhotoKitAssetGroup *assetGroup; // ivar: _assetGroup
@property (retain, nonatomic) PHAsset *dropTargetAsset; // ivar: _dropTargetAsset
@property (readonly, nonatomic) PHFetchResult *existingAssets; // ivar: _existingAssets
@property (nonatomic) BOOL shouldSortAssetsByCreationDate; // ivar: _shouldSortAssetsByCreationDate
@property (readonly, nonatomic) PHPhotoLibrary *targetPhotoLibrary; // ivar: _targetPhotoLibrary
@property (readonly, nonatomic) NSArray *unsavedSyndicatedAssets;


-(id)actionNameLocalizationKey;
-(id)initWithAssets:(id)arg0 assetCollection:(id)arg1 ;
-(void)_addAssets:(id)arg0 completionHandler:(id)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif