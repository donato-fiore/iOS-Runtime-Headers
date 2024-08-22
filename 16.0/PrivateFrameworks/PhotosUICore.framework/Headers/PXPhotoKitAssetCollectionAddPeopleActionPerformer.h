// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITASSETCOLLECTIONADDPEOPLEACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONADDPEOPLEACTIONPERFORMER_H



#import "PXPhotoKitAssetCollectionSharedAlbumOptionsActionPerformer.h"

@interface PXPhotoKitAssetCollectionAddPeopleActionPerformer : PXPhotoKitAssetCollectionSharedAlbumOptionsActionPerformer



+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;


@end


#endif