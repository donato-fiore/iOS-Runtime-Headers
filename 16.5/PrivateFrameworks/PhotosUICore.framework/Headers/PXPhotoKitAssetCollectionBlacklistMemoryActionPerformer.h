// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTOKITASSETCOLLECTIONBLACKLISTMEMORYACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONBLACKLISTMEMORYACTIONPERFORMER_H



#import "PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer.h"

@interface PXPhotoKitAssetCollectionBlacklistMemoryActionPerformer : PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer



+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)createActivityWithTitle:(id)arg0 actionType:(id)arg1 actionSystemImageName:(id)arg2 ;
+(id)createAlertActionWithTitle:(id)arg0 handler:(id)arg1 ;
+(id)createStandardActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(BOOL)_didUserConfirmDeleteOfMemory;
-(BOOL)_doesUserActionRequireDisambiguation:(id)arg0 outResolvedAction:(*id)arg1 outAlertActionsForDisambiguation:(*id)arg2 alertActionHandler:(id)arg3 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif