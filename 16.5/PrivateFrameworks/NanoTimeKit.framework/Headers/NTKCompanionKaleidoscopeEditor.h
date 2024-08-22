// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOMPANIONKALEIDOSCOPEEDITOR_H
#define NTKCOMPANIONKALEIDOSCOPEEDITOR_H

@class UIImage, PHAsset;


#import "NTKCompanionResourceDirectoryEditor.h"
#import "NTKPhoto.h"

@interface NTKCompanionKaleidoscopeEditor : NTKCompanionResourceDirectoryEditor {
    NTKPhoto *_pickedPhoto;
    UIImage *_pickedImage;
    PHAsset *_newAsset;
    UIImage *_newImage;
}


@property (readonly, nonatomic) NSInteger photosCount;


+(id)_fetchAssetForPhoto:(id)arg0 ;
-(id)initWithResourceDirectory:(id)arg0 forDevice:(id)arg1 ;
-(void)_readPickedPhoto;
-(void)_reinitializeWithPhoto:(id)arg0 image:(id)arg1 ;
-(void)finalizeWithCompletion:(id)arg0 ;
-(void)generateGalleryPreviewResourceDirectoryWithCompletion:(id)arg0 ;
-(void)imageForPhotoWithCompletion:(id)arg0 ;
-(void)setAsset:(id)arg0 completion:(id)arg1 ;
-(void)setPhoto:(id)arg0 completion:(id)arg1 ;
-(void)setRawImage:(id)arg0 completion:(id)arg1 ;


@end


#endif