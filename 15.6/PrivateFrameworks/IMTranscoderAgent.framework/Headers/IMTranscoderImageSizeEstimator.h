// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTRANSCODERIMAGESIZEESTIMATOR_H
#define IMTRANSCODERIMAGESIZEESTIMATOR_H


#import <Foundation/Foundation.h>


@interface IMTranscoderImageSizeEstimator : NSObject {
    CGSize _originalSize;
    CGFloat _normalizedInputFactor;
}




+(id)newEstimatorWithURL:(id)arg0 uti:(id)arg1 imageSource:(struct CGImageSource *)arg2 ;
-(CGFloat)_estimatedBytesPerPixelForJPEGQuality:(CGFloat)arg0 ;
-(CGFloat)_nominalBytesPerPixelForUTI:(id)arg0 ;
-(CGFloat)_normalizedInputFactorForUTI:(id)arg0 bytesPerPixel:(CGFloat)arg1 ;
-(NSUInteger)estimatedSizeForOutputUTI:(id)arg0 maximumDimension:(NSInteger)arg1 quality:(CGFloat)arg2 ;
-(id)initWithUTI:(id)arg0 imageSource:(struct CGImageSource *)arg1 ;
-(id)initWithUTI:(id)arg0 originalSize:(struct CGSize )arg1 fileSize:(NSUInteger)arg2 ;
-(struct CGSize )_newSizeForMaximumDimension:(NSInteger)arg0 originalSize:(struct CGSize )arg1 ;


@end


#endif