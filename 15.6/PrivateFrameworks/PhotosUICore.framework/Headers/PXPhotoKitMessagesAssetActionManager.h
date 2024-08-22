// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITMESSAGESASSETACTIONMANAGER_H
#define PXPHOTOKITMESSAGESASSETACTIONMANAGER_H



#import "PXPhotoKitAssetActionManager.h"

@interface PXPhotoKitMessagesAssetActionManager : PXPhotoKitAssetActionManager



+(id)assetActionManagerWithCMMSession:(id)arg0 ;
-(NSUInteger)presentationSource;
-(id)_selectionSnapshotForPerformerClass:(Class)arg0 applySubsetIfNeeded:(BOOL)arg1 ;
-(void)px_registerAdditionalPerformerClasses;


@end


#endif