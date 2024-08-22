// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSETACTIONMANAGER_H
#define PUASSETACTIONMANAGER_H

@class PXSectionedSelectionManager;
@protocol PUAssetActionManagerDelegate;

#import <Foundation/Foundation.h>


@interface PUAssetActionManager : NSObject

@property (weak, nonatomic) NSObject<PUAssetActionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PXSectionedSelectionManager *px_selectionManager;


+(id)_unlockDeviceHandler:(SEL)arg0 ;
+(id)actionManagerLog;
+(void)setUnlockDeviceHandler:(id)arg0 ;
-(BOOL)canPerformAction:(NSUInteger)arg0 onAllAssetReferences:(id)arg1 ;
-(BOOL)canPerformAction:(NSUInteger)arg0 onAllAssetsByAssetCollection:(id)arg1 ;
-(BOOL)canPerformActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(NSUInteger)arg0 onAllAssetsByAssetCollection:(id)arg1 ;
-(BOOL)shouldEnableActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(NSUInteger)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg0 ;
-(NSUInteger)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg0 allowsRemove:(BOOL)arg1 ;
-(id)_assetsByAssetCollectionForAssetReferences:(id)arg0 ;
-(id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg0 withNewStillImageTime:(struct ? )arg1 ;
-(id)actionPerformerForPastingAdjustmentsByAssetCollection:(id)arg0 ;
-(id)actionPerformerForRemoveAssetsFromFeaturedPhotosByAssetCollection:(id)arg0 assetToSuggestionMap:(id)arg1 ;
-(id)actionPerformerForRevertingAdjustmentsByAssetCollection:(id)arg0 ;
-(id)actionPerformerForSettingFavoriteTo:(BOOL)arg0 onAssetReferences:(id)arg1 ;
-(id)actionPerformerForSettingFavoriteTo:(BOOL)arg0 onAssetsByAssetCollection:(id)arg1 ;
-(id)actionPerformerForSimpleActionType:(NSUInteger)arg0 onAssetReferences:(id)arg1 ;
-(id)actionPerformerForSimpleActionType:(NSUInteger)arg0 onAssetsByAssetCollection:(id)arg1 ;
-(id)barButtonItemForActionType:(NSUInteger)arg0 ;
-(id)localizedTitleForActionType:(NSUInteger)arg0 ;


@end


#endif