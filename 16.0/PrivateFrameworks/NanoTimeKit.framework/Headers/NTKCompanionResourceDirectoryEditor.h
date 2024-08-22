// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOMPANIONRESOURCEDIRECTORYEDITOR_H
#define NTKCOMPANIONRESOURCEDIRECTORYEDITOR_H

@class CLKDevice, NSString;

#import <Foundation/Foundation.h>


@interface NTKCompanionResourceDirectoryEditor : NSObject {
    BOOL _resourceDirectoryIsHardLink;
}


@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (retain, nonatomic) NSString *galleryPreviewResourceDirectory; // ivar: _galleryPreviewResourceDirectory
@property (retain, nonatomic) NSString *resourceDirectory; // ivar: _resourceDirectory
@property (nonatomic) NSInteger state; // ivar: _state


+(BOOL)_transcodeIrisVideoOf:(id)arg0 forPhoto:(id)arg1 withCrop:(struct CGRect )arg2 into:(id)arg3 previewOnly:(BOOL)arg4 ;
+(BOOL)_transcodeStillImageOf:(id)arg0 forPhoto:(id)arg1 withCrop:(struct CGRect )arg2 into:(id)arg3 ;
+(NSUInteger)_subsampleFactorForScale:(CGFloat)arg0 ;
+(id)_createResourceDirectoryWithAsset:(id)arg0 assetCollection:(id)arg1 forDevice:(id)arg2 previewOnly:(BOOL)arg3 ;
+(id)_cropAndScaleUIImage:(id)arg0 cropRect:(struct CGRect )arg1 outputSize:(struct CGSize )arg2 ;
+(id)_linkPhoto:(id)arg0 to:(id)arg1 previewOnly:(BOOL)arg2 ;
+(id)_scaleImage:(id)arg0 toLongestEdgeInPixels:(CGFloat)arg1 ;
+(id)_subsampledImageWithData:(id)arg0 orientation:(NSInteger)arg1 subsampleFactor:(NSUInteger)arg2 ;
+(id)_transcodeAsset:(id)arg0 withCrop:(struct CGRect )arg1 into:(id)arg2 previewOnly:(BOOL)arg3 ;
+(id)_videoAssetOf:(id)arg0 ;
+(id)_writeAsset:(id)arg0 image:(id)arg1 withImageCrop:(struct CGRect )arg2 to:(id)arg3 ;
+(struct CGSize )_watchPhotoImageSize;
+(struct CGSize )_watchPhotoVideoSize;
+(void)_imageDataForAsset:(id)arg0 completion:(id)arg1 ;
+(void)_imageForAsset:(id)arg0 forSize:(struct CGSize )arg1 completion:(id)arg2 ;
-(id)initWithResourceDirectory:(id)arg0 forDevice:(id)arg1 ;
-(void)_deleteResourceDirectoryHardLinkIfNecessary;
-(void)dealloc;
-(void)finalizeWithCompletion:(id)arg0 ;
-(void)generateGalleryPreviewResourceDirectoryWithCompletion:(id)arg0 ;


@end


#endif