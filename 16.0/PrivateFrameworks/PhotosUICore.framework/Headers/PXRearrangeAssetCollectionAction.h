// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXREARRANGEASSETCOLLECTIONACTION_H
#define PXREARRANGEASSETCOLLECTIONACTION_H

@class PHFetchResult, PHAssetCollection, PHAsset;
@protocol PXFastEnumeration;


#import "PXPhotosAction.h"

@interface PXRearrangeAssetCollectionAction : PXPhotosAction {
    PHFetchResult *_beforeFetchResult;
    PHFetchResult *_afterFetchResult;
}


@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *movedAssets; // ivar: _movedAssets
@property (readonly, nonatomic) PHAsset *targetAsset; // ivar: _targetAsset


+(BOOL)canPerformOnCollection:(id)arg0 ;
-(BOOL)_canPerformUndo;
-(NSInteger)_adjustedTargetIndexForFetchResult:(id)arg0 movedAssets:(id)arg1 targetAsset:(id)arg2 ;
-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)initWithAssetCollection:(id)arg0 movedAssets:(id)arg1 targetAsset:(id)arg2 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif