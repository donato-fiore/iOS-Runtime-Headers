// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCAMERATRANSIENTASSETACTIONMANAGER_H
#define PUCAMERATRANSIENTASSETACTIONMANAGER_H



#import "PUAssetActionManager.h"

@interface PUCameraTransientAssetActionManager : PUAssetActionManager



-(BOOL)canPerformActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(BOOL)shouldEnableActionType:(NSUInteger)arg0 onAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(NSUInteger)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg0 ;


@end


#endif