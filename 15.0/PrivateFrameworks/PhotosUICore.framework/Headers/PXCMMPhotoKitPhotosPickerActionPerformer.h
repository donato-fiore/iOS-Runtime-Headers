// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMPHOTOKITPHOTOSPICKERACTIONPERFORMER_H
#define PXCMMPHOTOKITPHOTOSPICKERACTIONPERFORMER_H

@class UIViewController;
@protocol PXCMMPhotoKitActionPerformer;


#import "PXCMMShowPhotosPickerActionPerformer.h"
#import "PXCMMPhotoKitSession.h"

@interface PXCMMPhotoKitPhotosPickerActionPerformer : PXCMMShowPhotosPickerActionPerformer <PXCMMPhotoKitActionPerformer>

 {
    UIViewController *_photosPickerViewController;
}


@property (readonly, nonatomic) PXCMMPhotoKitSession *session;


-(id)_currentAssets;
-(id)_currentSelectedAssets;
-(void)_pickerDidCompleteWithPickedAssets:(id)arg0 ;
-(void)performUserInteractionTask;


@end


#endif