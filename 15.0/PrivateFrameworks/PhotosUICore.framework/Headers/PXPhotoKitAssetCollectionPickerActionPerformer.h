// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITASSETCOLLECTIONPICKERACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONPICKERACTIONPERFORMER_H

@class UIViewController, NSString;
@protocol UIAdaptivePresentationControllerDelegate;


#import "PXPhotoKitAssetCollectionActionPerformer.h"

@interface PXPhotoKitAssetCollectionPickerActionPerformer : PXPhotoKitAssetCollectionActionPerformer <UIAdaptivePresentationControllerDelegate>

 {
    UIViewController *_pickerController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)createActivityWithTitle:(id)arg0 actionType:(id)arg1 actionSystemImageName:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(void)_handleAddAssets:(id)arg0 toRegularAlbum:(id)arg1 ;
-(void)_handlePickedAssets:(id)arg0 ;
-(void)performUserInteractionTask;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif