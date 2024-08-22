// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITASSETCOLLECTIONSHOWDETAILSACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONSHOWDETAILSACTIONPERFORMER_H



#import "PXPhotoKitAssetCollectionActionPerformer.h"

@interface PXPhotoKitAssetCollectionShowDetailsActionPerformer : PXPhotoKitAssetCollectionActionPerformer



+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(NSInteger)_originForAssetCollection:(id)arg0 ;
+(id)createActivityWithTitle:(id)arg0 actionType:(id)arg1 actionSystemImageName:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(id)_displayTitleInfoForDetailsOfAssetCollection:(id)arg0 withTitleCategory:(NSInteger)arg1 preferredAttributesPromise:(id)arg2 ;
-(id)_localizedTitleForAssetCollection:(id)arg0 titleCategory:(*NSInteger)arg1 ;
-(void)performUserInteractionTask;


@end


#endif