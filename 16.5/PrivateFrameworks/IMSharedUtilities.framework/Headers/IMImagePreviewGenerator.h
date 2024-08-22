// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMIMAGEPREVIEWGENERATOR_H
#define IMIMAGEPREVIEWGENERATOR_H

@protocol IMPreviewGeneratorProtocol, IMUTITypeInformation;


#import "IMPreviewGenerator.h"

@interface IMImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>





+(BOOL)_getUncroppedSizeForImageAtURL:(id)arg0 scale:(CGFloat)arg1 withImageSizeInPx:(struct CGSize )arg2 maximumSizeInPx:(struct CGSize )arg3 minimumSizeInPx:(struct CGSize )arg4 previewSize:(struct CGSize *)arg5 ;
+(BOOL)writesToDisk;
+(id)UTITypes;
+(id)fetchUTITypes;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg0 balloonBundleID:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints )arg2 outSize:(struct CGSize *)arg3 error:(*id)arg4 ;
+(struct CGImage *)_blastdoorPreviewForFileAtURL:(id)arg0 maxPxWidth:(CGFloat)arg1 scale:(CGFloat)arg2 isScreenshot:(*BOOL)arg3 error:(*id)arg4 ;
+(struct CGImage *)_newCroppedAndScaledImageWithImageSource:(struct CGImageSource *)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 ;
+(struct CGImage *)newPreviewFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(struct CGImage *)newThumbnailFillToSize:(struct CGSize )arg0 imagePxSize:(struct CGSize )arg1 imageSource:(struct CGImageSource *)arg2 scale:(CGFloat)arg3 ;
+(struct CGSize )sizePreviewAtSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;


@end


#endif