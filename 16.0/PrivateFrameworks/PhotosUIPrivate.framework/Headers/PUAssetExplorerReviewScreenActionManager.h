// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSETEXPLORERREVIEWSCREENACTIONMANAGER_H
#define PUASSETEXPLORERREVIEWSCREENACTIONMANAGER_H

@protocol PUReviewAssetProvider, PUAssetExplorerReviewScreenActionManagerDelegate;


#import "PUAssetActionManager.h"
#import "PUUUIDSelectionManager.h"

@interface PUAssetExplorerReviewScreenActionManager : PUAssetActionManager

@property (readonly, nonatomic) NSUInteger _sourceType; // ivar: __sourceType
@property (readonly, nonatomic) PUUUIDSelectionManager *disableLivePhotosSelectionManager; // ivar: _disableLivePhotosSelectionManager
@property (weak, nonatomic) NSObject<PUReviewAssetProvider> *reviewAssetProvider; // ivar: _reviewAssetProvider
@property (weak, nonatomic) NSObject<PUAssetExplorerReviewScreenActionManagerDelegate> *reviewScreenActionManagerDelegate; // ivar: _reviewScreenActionManagerDelegate
@property (readonly, nonatomic) PUUUIDSelectionManager *selectionManager; // ivar: _selectionManager


-(BOOL)_hasReviewScreenActionTypeForAssetActionType:(NSUInteger)arg0 ;
-(BOOL)canPerformActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(Class)_actionPerformerClassForActionType:(NSUInteger)arg0 ;
-(NSUInteger)_reviewScreenActionTypeForAssetActionType:(NSUInteger)arg0 ;
-(id)actionPerformerForSimpleActionType:(NSUInteger)arg0 onAssetsByAssetCollection:(id)arg1 ;
-(id)initWithSourceType:(NSUInteger)arg0 ;


@end


#endif