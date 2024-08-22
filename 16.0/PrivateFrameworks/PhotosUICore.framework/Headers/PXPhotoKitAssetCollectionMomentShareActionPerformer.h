// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITASSETCOLLECTIONMOMENTSHAREACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONMOMENTSHAREACTIONPERFORMER_H

@class NSString;
@protocol PXCMMWorkflowCoordinatorDelegate;


#import "PXPhotoKitAssetCollectionActionPerformer.h"
#import "PXCMMWorkflowCoordinator.h"

@interface PXPhotoKitAssetCollectionMomentShareActionPerformer : PXPhotoKitAssetCollectionActionPerformer <PXCMMWorkflowCoordinatorDelegate>

 {
    PXCMMWorkflowCoordinator *_workflowCoordinator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)createAlertActionWithTitle:(id)arg0 handler:(id)arg1 ;
+(id)createStandardActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
-(NSInteger)shareOriginForSession:(id)arg0 workflowCoordinator:(id)arg1 ;
-(void)completeUserInteractionTaskWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)performUserInteractionTask;
-(void)workflowCoordinator:(id)arg0 workflowViewController:(id)arg1 didFinishSession:(id)arg2 withActivityState:(NSUInteger)arg3 ;


@end


#endif