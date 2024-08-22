// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCMMPHOTOKITPHOTOSPICKERACTIONPERFORMER_H
#define PXCMMPHOTOKITPHOTOSPICKERACTIONPERFORMER_H

@class UIViewController, NSArray, NSString;
@protocol PXCMMPhotoKitActionPerformer, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate;


#import "PXCMMShowPhotosPickerActionPerformer.h"
#import "PXCMMPhotoKitSession.h"

@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate>

 {
    UIViewController *_photosPickerViewController;
}


@property (readonly, nonatomic) NSArray *currentAssetIdentifiers; // ivar: _currentAssetIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXCMMPhotoKitSession *session;
@property (readonly) Class superclass;


-(void)_pickerDidCompleteWithPickedAssets:(id)arg0 ;
-(void)performUserInteractionTask;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif