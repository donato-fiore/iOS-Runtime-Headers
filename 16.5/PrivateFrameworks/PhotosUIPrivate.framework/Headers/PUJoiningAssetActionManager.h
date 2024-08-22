// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUJOININGASSETACTIONMANAGER_H
#define PUJOININGASSETACTIONMANAGER_H

@class NSMapTable;


#import "PUAssetActionManager.h"

@interface PUJoiningAssetActionManager : PUAssetActionManager

@property (readonly, nonatomic) NSMapTable *_actionManagerByClass; // ivar: __actionManagerByClass
@property (retain, nonatomic, setter=_setActionManagerForNoAsset:) PUAssetActionManager *_actionManagerForNoAsset; // ivar: __actionManagerForNoAsset


-(BOOL)canPerformAction:(NSUInteger)arg0 onAllAssetsByAssetCollection:(id)arg1 ;
-(BOOL)canPerformActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(NSUInteger)arg0 onAllAssetsByAssetCollection:(id)arg1 ;
-(BOOL)shouldEnableActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(NSUInteger)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg0 ;
-(id)_actionManagerForAsset:(id)arg0 ;
-(id)_actionManagerForAssets:(id)arg0 ;
-(id)_actionManagerForAssetsByAssetCollection:(id)arg0 ;
-(id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg0 withNewStillImageTime:(struct ? )arg1 ;
-(id)actionPerformerForSettingFavoriteTo:(BOOL)arg0 onAssetsByAssetCollection:(id)arg1 ;
-(id)actionPerformerForSimpleActionType:(NSUInteger)arg0 onAssetsByAssetCollection:(id)arg1 ;
-(id)init;
-(void)registerActionManager:(id)arg0 forAssetClass:(Class)arg1 ;


@end


#endif