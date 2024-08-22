// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMPREVIEWGENERATOR_H
#define IMPREVIEWGENERATOR_H

@protocol IMPreviewGeneratorProtocol, IMUTITypeInformation;

#import <Foundation/Foundation.h>


@interface IMPreviewGenerator : NSObject <IMPreviewGeneratorProtocol, IMUTITypeInformation>





+(BOOL)generatesMetadata;
+(BOOL)generatesPreview;
+(BOOL)shouldScaleUpPreview;
+(BOOL)shouldShadePreview;
+(BOOL)writesToDisk;
+(CGFloat)maxUpScale;
+(id)UTITypes;
+(id)generateAndPersistMetadataFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg0 balloonBundleID:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints )arg2 outSize:(struct CGSize *)arg3 error:(*id)arg4 ;
+(id)metadataExtension;
+(id)previewExtension;
+(struct CGImage *)newCroppedAndRescaledImageFromImage:(struct CGImage *)arg0 constraints:(struct IMPreviewConstraints )arg1 targetPxSize:(struct CGSize )arg2 ;
+(struct CGImage *)newPreviewFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(struct CGRect )_scaledTargetRectForSize:(struct CGSize )arg0 andThumbnailSize:(struct CGSize )arg1 ;
+(struct CGSize )sizePreviewAtSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(struct CGSize )thumbnailFillSizeForWidth:(CGFloat)arg0 imageSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;


@end


#endif