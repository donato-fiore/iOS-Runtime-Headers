// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITASSETCOLLECTIONSHOWMAPACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONSHOWMAPACTIONPERFORMER_H



#import "PXPhotoKitAssetCollectionActionPerformer.h"

@interface PXPhotoKitAssetCollectionShowMapActionPerformer : PXPhotoKitAssetCollectionActionPerformer



+(BOOL)canPerformActionType:(id)arg0 onAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)_effectiveAssetsFetchResultWithAssetsFetchResult:(id)arg0 assetCollectionReference:(id)arg1 dataSource:(id)arg2 ;
+(id)createActivityWithTitle:(id)arg0 actionType:(id)arg1 actionSystemImageName:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 forActivity:(id)arg1 ;
-(id)activitySystemImageName;
-(id)activityType;
-(id)localizedTitleForUseCase:(NSUInteger)arg0 ;
-(void)performUserInteractionTask;


@end


#endif