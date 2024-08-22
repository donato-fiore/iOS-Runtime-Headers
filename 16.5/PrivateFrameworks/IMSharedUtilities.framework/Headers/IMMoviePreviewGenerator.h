// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMOVIEPREVIEWGENERATOR_H
#define IMMOVIEPREVIEWGENERATOR_H



#import "IMPreviewGenerator.h"

@interface IMMoviePreviewGenerator : IMPreviewGenerator



+(BOOL)isAutoloopAsset:(id)arg0 ;
+(BOOL)writesToDisk;
+(id)UTITypes;
+(id)_avAssetForURL:(id)arg0 ;
+(id)fetchUTITypes;
+(id)generateAndPersistPreviewFromSourceURL:(id)arg0 balloonBundleID:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints )arg2 outSize:(struct CGSize *)arg3 error:(*id)arg4 ;
+(struct CGImage *)newImageWithPlayButtonOverlay:(struct CGImage *)arg0 scale:(CGFloat)arg1 transferGUID:(id)arg2 error:(*id)arg3 ;
+(struct CGImage *)newPreviewFromSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;
+(struct CGSize )sizePreviewAtSourceURL:(id)arg0 withPreviewConstraints:(struct IMPreviewConstraints )arg1 error:(*id)arg2 ;


@end


#endif