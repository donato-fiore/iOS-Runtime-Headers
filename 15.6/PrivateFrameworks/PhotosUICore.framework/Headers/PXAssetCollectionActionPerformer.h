// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASSETCOLLECTIONACTIONPERFORMER_H
#define PXASSETCOLLECTIONACTIONPERFORMER_H

@class PHFetchResult;
@protocol PXDisplayAssetCollection, UIDragSession, UIDropSession;


#import "PXActionPerformer.h"
#import "PXAssetCollectionReference.h"
#import "PXAssetsDataSource.h"
#import "PXDisplayTitleInfo.h"
#import "PXAssetReference.h"

@interface PXAssetCollectionActionPerformer : PXActionPerformer

@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference; // ivar: _assetCollectionReference
@property (retain, nonatomic) PXAssetsDataSource *assetsDataSource; // ivar: _assetsDataSource
@property (retain, nonatomic) PHFetchResult *assetsFetchResult; // ivar: _assetsFetchResult
@property (readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo; // ivar: _displayTitleInfo
@property (retain, nonatomic) NSObject<UIDragSession> *dragSession; // ivar: _dragSession
@property (retain, nonatomic) NSObject<UIDropSession> *dropSession; // ivar: _dropSession
@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference; // ivar: _dropTargetAssetReference
@property (retain, nonatomic) PHFetchResult *people; // ivar: _people


-(id)initWithActionType:(id)arg0 ;
-(id)initWithActionType:(id)arg0 assetCollectionReference:(id)arg1 displayTitleInfo:(id)arg2 ;


@end


#endif