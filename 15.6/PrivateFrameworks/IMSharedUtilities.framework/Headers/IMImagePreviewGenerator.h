// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMIMAGEPREVIEWGENERATOR_H
#define IMIMAGEPREVIEWGENERATOR_H

@protocol IMPreviewGeneratorProtocol, IMUTITypeInformation;


#import "IMPreviewGenerator.h"

@interface IMImagePreviewGenerator : IMPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>





+(BOOL)writesToDisk;
+(id)UTITypes;
+(id)fetchUTITypes;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg0 balloonBundleID:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints )arg2 outSize:(struct CGSize *)arg3 error:(*id)arg4 ;
+(struct CGImage *)cropAndScaleImageWithImageSource:(struct CGImageSource *)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 ;
+(struct CGImage *)newPreviewFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(struct CGImage *)newThumbnailFillToSize:(struct CGSize )arg0 imagePxSize:(struct CGSize )arg1 imageSource:(struct CGImageSource *)arg2 scale:(CGFloat)arg3 ;
+(struct CGSize )sizePreviewAtSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;


@end


#endif