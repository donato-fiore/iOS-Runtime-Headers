// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSIMAGEUTILS_H
#define CLSIMAGEUTILS_H



#import "CLSObject.h"

@interface CLSImageUtils : CLSObject



+(id)JPEGDataForThumbnailForFileAtURL:(id)arg0 maxSize:(struct CGSize )arg1 scaleFactor:(CGFloat)arg2 error:(*id)arg3 ;
+(id)JPEGDataFromCGImage:(struct CGImage *)arg0 desiredMinimumDimension:(NSUInteger)arg1 desiredMaximumDimension:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)JPEGDataFromCGImage:(struct CGImage *)arg0 error:(*id)arg1 ;
+(struct CGImage *)CGImageFromJPEGData:(id)arg0 error:(*id)arg1 ;


@end


#endif