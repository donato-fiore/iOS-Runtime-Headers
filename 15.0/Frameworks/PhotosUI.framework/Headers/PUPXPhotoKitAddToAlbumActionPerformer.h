// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPXPHOTOKITADDTOALBUMACTIONPERFORMER_H
#define PUPXPHOTOKITADDTOALBUMACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer;


#import "PUAlbumPickerViewController.h"

@interface PUPXPhotoKitAddToAlbumActionPerformer : PXPhotoKitAssetActionPerformer

@property (retain, nonatomic) PUAlbumPickerViewController *albumPickerViewController; // ivar: _albumPickerViewController


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
-(void)_handlePickedAlbum:(id)arg0 assets:(id)arg1 ;
-(void)_handleUserInteractionTaskResult:(BOOL)arg0 error:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif