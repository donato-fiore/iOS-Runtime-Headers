// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETCOLLECTIONACTIONMANAGER_H
#define PXASSETCOLLECTIONACTIONMANAGER_H

@class PHFetchResult;
@protocol UIDragSession, UIDropSession;


#import "PXActionManager.h"
#import "PXAssetCollectionReference.h"
#import "PXAssetsDataSourceManager.h"
#import "PXDisplayTitleInfo.h"
#import "PXAssetReference.h"

@interface PXAssetCollectionActionManager : PXActionManager {
    PXAssetCollectionReference *_initialAssetCollectionReference;
}


@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (retain, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager; // ivar: _assetsDataSourceManager
@property (retain, nonatomic) PHFetchResult *assetsFetchResult; // ivar: _assetsFetchResult
@property (readonly, nonatomic) PXDisplayTitleInfo *displayTitleInfo; // ivar: _displayTitleInfo
@property (weak, nonatomic) NSObject<UIDragSession> *dragSession; // ivar: _dragSession
@property (weak, nonatomic) NSObject<UIDropSession> *dropSession; // ivar: _dropSession
@property (retain, nonatomic) PXAssetReference *dropTargetAssetReference; // ivar: _dropTargetAssetReference
@property (retain, nonatomic) PHFetchResult *people; // ivar: _people


-(BOOL)canPerformActionType:(id)arg0 ;
-(BOOL)canPerformActionType:(id)arg0 assetCollectionReference:(id)arg1 ;
-(id)actionPerformerForActionType:(id)arg0 ;
-(id)actionPerformerForActionType:(id)arg0 assetCollectionReference:(id)arg1 ;
-(id)displayTitleInfoForAssetCollection:(id)arg0 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 displayTitleInfo:(id)arg1 ;
-(id)initWithAssetCollectionReference:(id)arg0 displayTitleInfo:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg0 useCase:(NSUInteger)arg1 ;
-(id)localizedTitleForActionType:(id)arg0 useCase:(NSUInteger)arg1 assetCollectionReference:(id)arg2 ;
-(id)systemImageNameForActionType:(id)arg0 ;
-(id)systemImageNameForActionType:(id)arg0 assetCollectionReference:(id)arg1 ;


@end


#endif