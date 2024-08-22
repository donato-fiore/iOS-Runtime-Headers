// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITASSETCOLLECTIONSORTACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONSORTACTIONPERFORMER_H



#import "PXPhotoKitAssetCollectionActionPerformer.h"

@interface PXPhotoKitAssetCollectionSortActionPerformer : PXPhotoKitAssetCollectionActionPerformer



+(BOOL)canPerformActionType:(id)arg0 onAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)createActivityWithTitle:(id)arg0 actionType:(id)arg1 actionSystemImageName:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(void)_handleSortOrderSelected:(NSInteger)arg0 forAssetCollection:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif