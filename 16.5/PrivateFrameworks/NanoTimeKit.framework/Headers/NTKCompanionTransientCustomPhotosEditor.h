// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOMPANIONTRANSIENTCUSTOMPHOTOSEDITOR_H
#define NTKCOMPANIONTRANSIENTCUSTOMPHOTOSEDITOR_H

@class NSMutableArray;


#import "NTKCompanionCustomPhotosEditor.h"

@interface NTKCompanionTransientCustomPhotosEditor : NTKCompanionCustomPhotosEditor {
    NSMutableArray *_photos;
    BOOL _previewIsValid;
}




-(BOOL)addAssetsFromAssetList:(id)arg0 ;
-(BOOL)addImageList:(id)arg0 ;
-(BOOL)addPhotosFromUIImagePicker:(id)arg0 ;
-(BOOL)canChangeOriginalCropOfPhotoAtIndex:(NSInteger)arg0 ;
-(BOOL)isPhotoInPhotoLibraryAtIndex:(NSInteger)arg0 ;
-(BOOL)setOriginalCrop:(struct CGRect )arg0 forPhotoAtIndex:(NSInteger)arg1 ;
-(NSInteger)photosCount;
-(id)_writeTransientPhotosInto:(id)arg0 ;
-(id)initWithResourceDirectory:(id)arg0 forDevice:(id)arg1 ;
-(struct CGRect )originalCropForPhotoAtIndex:(NSInteger)arg0 ;
-(struct CGSize )minimumNormalizedCropSizeForPhotoAtIndex:(NSInteger)arg0 ;
-(void)deletePhotoAtIndex:(NSInteger)arg0 ;
-(void)finalizeWithCompletion:(id)arg0 ;
-(void)generateGalleryPreviewResourceDirectoryWithCompletion:(id)arg0 ;
-(void)imageAndCropForPhotoAtIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)imageInPhotoLibraryForPhotoAtIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)movePhotoAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;


@end


#endif