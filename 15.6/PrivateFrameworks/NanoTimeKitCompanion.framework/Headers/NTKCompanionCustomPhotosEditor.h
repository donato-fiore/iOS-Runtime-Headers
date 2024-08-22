// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPANIONCUSTOMPHOTOSEDITOR_H
#define NTKCOMPANIONCUSTOMPHOTOSEDITOR_H

@class NSMutableDictionary, NSMutableArray, NSCache;


#import "NTKCompanionResourceDirectoryEditor.h"

@interface NTKCompanionCustomPhotosEditor : NTKCompanionResourceDirectoryEditor {
    NSMutableDictionary *_pickedPhotos;
    NSMutableDictionary *_newPhotos;
    NSMutableArray *_orderList;
    NSCache *_scaledImageCache;
    BOOL _previewIsValid;
}


@property (readonly, nonatomic) NSInteger photosCount;


-(BOOL)addAssetsFromAssetList:(id)arg0 ;
-(BOOL)addAssetsFromAssetList:(id)arg0 maxPhotosCount:(NSUInteger)arg1 ;
-(BOOL)addPhotosFromUIImagePicker:(id)arg0 ;
-(BOOL)canChangeOriginalCropOfPhotoAtIndex:(NSInteger)arg0 ;
-(BOOL)isPhotoInPhotoLibraryAtIndex:(NSInteger)arg0 ;
-(BOOL)setOriginalCrop:(struct CGRect )arg0 forPhotoAtIndex:(NSInteger)arg1 ;
-(id)_copyOrTranscodePhotosTo:(id)arg0 ;
-(id)_fetchAssetsForNewPhotos:(id)arg0 ;
-(id)initWithResourceDirectory:(id)arg0 forDevice:(id)arg1 ;
-(struct CGRect )originalCropForPhotoAtIndex:(NSInteger)arg0 ;
-(struct CGSize )minimumNormalizedCropSizeForPhotoAtIndex:(NSInteger)arg0 ;
-(void)_fetchAssetsForPickedPhotos;
-(void)_readPickedPhotosFrom:(id)arg0 ;
-(void)_reinitializeWithImageList:(id)arg0 andResourceDirectory:(id)arg1 ;
-(void)deletePhotoAtIndex:(NSInteger)arg0 ;
-(void)finalizeWithCompletion:(id)arg0 ;
-(void)generateGalleryPreviewResourceDirectoryWithCompletion:(id)arg0 ;
-(void)imageAndCropForPhotoAtIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)imageInPhotoLibraryForPhotoAtIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)movePhotoAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;


@end


#endif