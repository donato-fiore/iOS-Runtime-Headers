// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITASSETCOLLECTIONSHAREACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONSHAREACTIONPERFORMER_H

@class NSString;
@protocol PXCMMWorkflowCoordinatorDelegate;


#import "PXPhotoKitAssetCollectionActionPerformer.h"

@interface PXPhotoKitAssetCollectionShareActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXCMMWorkflowCoordinatorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)createAlertActionWithTitle:(id)arg0 handler:(id)arg1 ;
+(id)createStandardActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif