// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUUIIMAGEPICKERCONTROLLERHELPER_H
#define PUUIIMAGEPICKERCONTROLLERHELPER_H

@protocol OS_dispatch_group, PUPhotoPicker;

#import <Foundation/Foundation.h>

#import "PUPhotosGridDownloadHelper.h"
#import "PUUIAlbumListViewController.h"
#import "PUPhotosGridViewController.h"

@interface PUUIImagePickerControllerHelper : NSObject {
    PUPhotosGridDownloadHelper *_downloadHelper;
}


@property (readonly, weak, nonatomic) PUUIAlbumListViewController *albumListViewController; // ivar: _albumListViewController
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic, getter=isAnyAssetDownloading) BOOL anyAssetDownloading;
@property (nonatomic) BOOL didHandleSelectionOfAssets; // ivar: _didHandleSelectionOfAssets
@property (readonly, weak, nonatomic) PUPhotosGridViewController *gridViewController; // ivar: _gridViewController
@property (retain, nonatomic) NSObject<OS_dispatch_group> *multiSelectionGroup; // ivar: _multiSelectionGroup
@property (readonly, weak, nonatomic) NSObject<PUPhotoPicker> *photoPicker; // ivar: _photoPicker
@property (readonly, nonatomic) BOOL requiresPickingConfirmation;
@property (readonly, nonatomic) BOOL showsFileSizePicker;


+(NSUInteger)imagePickerTypesForMediaTypes:(id)arg0 ;
+(id)assetsFilterPredicateForMediaTypes:(id)arg0 ;
+(id)collectionsFilterPredicateForMediaTypes:(id)arg0 ;
+(int)albumFilterForMediaTypes:(id)arg0 ;
-(BOOL)showsPrompt;
-(NSUInteger)multipleSelectionLimit;
-(id)_extraArgumentsForResizeTaskDescriptor:(id)arg0 ;
-(id)_mediaTypes;
-(id)_pickerProperties;
-(id)initWithAlbumListViewController:(id)arg0 photoPickerServices:(id)arg1 ;
-(id)initWithGridViewController:(id)arg0 photoPickerServices:(id)arg1 ;
-(void)_handleSelectionOfDownloadedAssets:(id)arg0 resizeTaskDescriptor:(id)arg1 ;
-(void)_notifyImagePickerOfAssetAvailability:(id)arg0 resizeTaskDescriptor:(id)arg1 ;
-(void)_pushImageViewControllerForAsset:(id)arg0 allowEditing:(BOOL)arg1 expectsLivePhoto:(BOOL)arg2 ;
-(void)_selectAsset:(id)arg0 withHintCollection:(id)arg1 hintIndexPath:(id)arg2 ;
-(void)_showImageViewController:(id)arg0 ;
-(void)cancelPhotoPicker;
-(void)handleKeyboardAvoidanceIfNeeded:(id)arg0 ;
-(void)handleSelectionOfAsset:(id)arg0 inCollection:(id)arg1 resizeTaskDescriptor:(id)arg2 ;
-(void)handleSelectionOfAssets:(id)arg0 resizeTaskDescriptor:(id)arg1 ;
-(void)handleToggleSelectionOfItemAtIndexPath:(id)arg0 ;
-(void)updateSessionInfo;


@end


#endif