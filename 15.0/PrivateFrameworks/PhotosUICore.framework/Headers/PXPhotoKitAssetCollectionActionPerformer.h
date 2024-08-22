// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITASSETCOLLECTIONACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONACTIONPERFORMER_H

@class PHFetchResult, NSString;
@protocol PXPhotoStreamComposeServiceDelegate, PXVideoTrimQueueControllerDelegate, PXAssetsSharingHelperDelegate, PXPhotoKitAssetCollectionActionPerformerInput, UIDragSession, UIDropSession;


#import "PXAssetCollectionActionPerformer.h"
#import "PXVideoTrimQueueController.h"
#import "PXPhotoStreamComposeServiceViewController.h"
#import "PXAssetsDataSource.h"
#import "PXAssetReference.h"

@interface PXPhotoKitAssetCollectionActionPerformer : PXAssetCollectionActionPerformer <PXPhotoStreamComposeServiceDelegate, PXVideoTrimQueueControllerDelegate, PXAssetsSharingHelperDelegate, PXPhotoKitAssetCollectionActionPerformerInput>

 {
    PXVideoTrimQueueController *_trimController;
    PXPhotoStreamComposeServiceViewController *_composeServiceController;
}


@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<UIDragSession> *dragSession;
@property (readonly, nonatomic) NSObject<UIDropSession> *dropSession;
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly) Class superclass;


+(BOOL)canPerformActionType:(id)arg0 onAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)createActivityWithTitle:(id)arg0 actionType:(id)arg1 actionSystemImageName:(id)arg2 ;
+(id)createAlertActionWithTitle:(id)arg0 handler:(id)arg1 ;
+(id)createBarButtonItemForAssetCollectionReference:(id)arg0 withTarget:(id)arg1 action:(SEL)arg2 ;
+(id)createStandardActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(BOOL)assetsSharingHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetsSharingHelper:(id)arg0 presentViewController:(id)arg1 ;
-(id)_confirmationAlertTitleForBlacklistingAction:(id)arg0 viewSpec:(id)arg1 ;
-(id)localizedTitleForUseCase:(NSUInteger)arg0 ;
-(void)_handleAddToCloudSharedAlbum:(id)arg0 pickedAssets:(id)arg1 ;
-(void)_promptBlacklistingConfirmatonForUserAction:(id)arg0 viewSpec:(id)arg1 completionHandler:(id)arg2 ;
-(void)controller:(id)arg0 didCancelTrimmingVideoSources:(id)arg1 ;
-(void)controller:(id)arg0 didFinishTrimmingVideoSources:(id)arg1 ;
-(void)controller:(id)arg0 dismissViewControllerWithCompletion:(id)arg1 ;
-(void)controller:(id)arg0 presentViewController:(id)arg1 ;
-(void)photoStreamComposeService:(id)arg0 didPostComment:(id)arg1 ;
-(void)photoStreamComposeServiceDidCancel:(id)arg0 ;


@end


#endif