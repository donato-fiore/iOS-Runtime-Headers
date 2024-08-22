// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOKITASSETACTIONMANAGER_H
#define PUPHOTOKITASSETACTIONMANAGER_H



#import "PUAssetActionManager.h"
#import "PUPhotoKitDataSourceManager.h"

@interface PUPhotoKitAssetActionManager : PUAssetActionManager

@property (retain, nonatomic) PUPhotoKitDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (nonatomic) BOOL enableNavigateToPhotos; // ivar: _enableNavigateToPhotos


+(Class)actionPerformerClassForActionType:(NSUInteger)arg0 ;
-(BOOL)_actionTypeIsSimple:(NSUInteger)arg0 ;
-(BOOL)canPerformActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(NSUInteger)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg0 allowsRemove:(BOOL)arg1 ;
-(id)_photoKitAssetsDataSource;
-(id)_photosDataSource;
-(id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg0 withNewStillImageTime:(struct ? )arg1 ;
-(id)actionPerformerForRemoveAssetsFromFeaturedPhotosByAssetCollection:(id)arg0 assetToSuggestionMap:(id)arg1 ;
-(id)actionPerformerForSettingFavoriteTo:(BOOL)arg0 onAssetsByAssetCollection:(id)arg1 ;
-(id)actionPerformerForSimpleActionType:(NSUInteger)arg0 onAssetsByAssetCollection:(id)arg1 ;


@end


#endif