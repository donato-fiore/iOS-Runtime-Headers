// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNAVATAREDITINGMANAGER_H
#define CNAVATAREDITINGMANAGER_H

@class NSString, UIImage, AVTStickerConfiguration, UIViewController;
@protocol AVTPoseSelectionViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, AVTAvatarRecord, CNAvatarEditingManagerDelegate;

#import <Foundation/Foundation.h>

#import "CNPhotoPickerAnimojiProviderItem.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNAvatarEditingManager : NSObject <AVTPoseSelectionViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>



@property (readonly, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAvatarEditingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *imageWithAlpha; // ivar: _imageWithAlpha
@property (retain, nonatomic) CNPhotoPickerAnimojiProviderItem *originalItem; // ivar: _originalItem
@property (retain, nonatomic) AVTStickerConfiguration *poseConfiguration; // ivar: _poseConfiguration
@property (readonly) Class superclass;
@property (readonly, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


+(id)log;
-(id)captureFlashViewWithSize:(struct CGSize )arg0 alpha:(CGFloat)arg1 ;
-(id)compositeImageDataForImage:(id)arg0 backgroundColor:(id)arg1 ;
-(id)createImagePickerForEditingImageData:(id)arg0 withCropRect:(struct CGRect )arg1 customBackgroundColor:(id)arg2 ;
-(id)fullScreenImageFromImage:(id)arg0 inSize:(struct CGSize )arg1 ;
-(id)imagePickerForItem:(id)arg0 ;
-(id)initForEditingWithAvatarRecord:(id)arg0 variantsManager:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithAvatarRecord:(id)arg0 variantsManager:(id)arg1 ;
-(id)renderImage:(id)arg0 inRect:(struct CGRect )arg1 ;
-(struct CGRect )computeFullscreenImageRectForScreenWithSize:(struct CGSize )arg0 ;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)poseSelectionController:(id)arg0 didSelectPoseWithConfiguration:(id)arg1 ;
-(void)poseSelectionControllerDidCancel:(id)arg0 ;
-(void)presentImagePickerForImage:(id)arg0 fadeIn:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif