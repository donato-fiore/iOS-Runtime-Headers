// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSCODERIMAGEFIGPHOTOSIZEESTIMATOR_H
#define IMTRANSCODERIMAGEFIGPHOTOSIZEESTIMATOR_H



#import "IMTranscoderImageSizeEstimator.h"

@interface IMTranscoderImageFigPhotoSizeEstimator : IMTranscoderImageSizeEstimator {
    *FigPhotoDecompressionContainer _container;
}




-(NSUInteger)estimatedSizeForOutputUTI:(id)arg0 maximumDimension:(NSInteger)arg1 quality:(CGFloat)arg2 ;
-(NSUInteger)optimizedEstimatedSizeForOutputUTI:(id)arg0 maximumDimension:(NSInteger)arg1 quality:(CGFloat)arg2 ;
-(id)initWithURL:(id)arg0 uti:(id)arg1 imageSource:(struct CGImageSource *)arg2 ;
-(void)dealloc;


@end


#endif