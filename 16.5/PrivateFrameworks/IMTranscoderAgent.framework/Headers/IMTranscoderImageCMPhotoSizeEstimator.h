// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMTRANSCODERIMAGECMPHOTOSIZEESTIMATOR_H
#define IMTRANSCODERIMAGECMPHOTOSIZEESTIMATOR_H



#import "IMTranscoderImageSizeEstimator.h"

@interface IMTranscoderImageCMPhotoSizeEstimator : IMTranscoderImageSizeEstimator {
    *CMPhotoDecompressionContainer _container;
}




-(NSUInteger)estimatedSizeForOutputUTI:(id)arg0 maximumDimension:(NSInteger)arg1 quality:(CGFloat)arg2 ;
-(NSUInteger)optimizedEstimatedSizeForOutputUTI:(id)arg0 maximumDimension:(NSInteger)arg1 quality:(CGFloat)arg2 ;
-(id)initWithURL:(id)arg0 uti:(id)arg1 imageSource:(struct CGImageSource *)arg2 ;
-(void)dealloc;


@end


#endif