// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPXASSETACTIONMANAGER_H
#define PUPXASSETACTIONMANAGER_H

@class PXAssetActionManager;


#import "PUAssetActionManager.h"

@interface PUPXAssetActionManager : PUAssetActionManager {
    PXAssetActionManager *_underlyingActionManager;
}




-(BOOL)canPerformActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(NSUInteger)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg0 allowsRemove:(BOOL)arg1 ;
-(id)_selectionSnapshotForAssetReferences:(id)arg0 ;
-(id)actionPerformerForSettingFavoriteTo:(BOOL)arg0 onAssetReferences:(id)arg1 ;
-(id)actionPerformerForSimpleActionType:(NSUInteger)arg0 onAssetReferences:(id)arg1 ;
-(id)actionPerformerForSimpleActionType:(NSUInteger)arg0 onAssetsByAssetCollection:(id)arg1 ;
-(id)barButtonItemForActionType:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithUnderlyingActionManager:(id)arg0 ;
-(id)localizedTitleForActionType:(NSUInteger)arg0 ;
-(id)px_selectionManager;


@end


#endif