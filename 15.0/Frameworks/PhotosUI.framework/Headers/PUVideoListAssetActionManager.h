// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUVIDEOLISTASSETACTIONMANAGER_H
#define PUVIDEOLISTASSETACTIONMANAGER_H

@protocol PUVideoListAssetExpungeActionPerformerDelegate;


#import "PUPhotoKitAssetActionManager.h"

@interface PUVideoListAssetActionManager : PUPhotoKitAssetActionManager

@property (weak, nonatomic) NSObject<PUVideoListAssetExpungeActionPerformerDelegate> *actionPerformerDelegate; // ivar: _actionPerformerDelegate


-(BOOL)canPerformActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(NSUInteger)arg0 onAllAssetsByAssetCollection:(id)arg1 ;
-(NSUInteger)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg0 ;
-(id)actionPerformerForSimpleActionType:(NSUInteger)arg0 onAssetsByAssetCollection:(id)arg1 ;


@end


#endif