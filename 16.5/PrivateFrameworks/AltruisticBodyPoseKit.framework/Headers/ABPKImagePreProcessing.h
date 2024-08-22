// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKIMAGEPREPROCESSING_H
#define ABPKIMAGEPREPROCESSING_H


#import <Foundation/Foundation.h>

#import "ABPKPaddingParams.h"

@interface ABPKImagePreProcessing : NSObject {
    ABPKPaddingParams *_paddingParameters;
    CGFloat _startScale;
    CGFloat _timeScale;
    CGFloat _startPadding;
    CGFloat _timePadding;
    CGFloat _startConvertYCbCrToBGRA;
    CGFloat _timeConvertYCbCrToBGRA;
    CGFloat _startConvertARGBToBGRA;
    CGFloat _timeConvertARGBToBGRA;
    CGFloat _startConvertGrayScaleToBGRA;
    CGFloat _timeConvertGrayScaleToBGRA;
    *OpaqueVTPixelTransferSession _vtPixelTransferSession;
}




-(id)initWithPreProcessingParams:(id)arg0 ;
-(int)preprocessColorImage:(struct __CVBuffer *)arg0 outputBuffer:(struct __CVBuffer *)arg1 ;
-(int)preprocessData:(struct __CVBuffer *)arg0 outputBuffer:(struct __CVBuffer *)arg1 ;
-(int)preprocessGrayscaleImage:(struct __CVBuffer *)arg0 outputBuffer:(struct __CVBuffer *)arg1 ;
-(void)_endARGBToBGRASignpost;
-(void)_endARGBToRGBASignpost;
-(void)_endGrayToBGRASignpost;
-(void)_endPaddingSignpost;
-(void)_endScaleSignpost;
-(void)_endYCbCrToARGBSignpost;
-(void)_startARGBToBGRASignpost;
-(void)_startARGBToRGBASignpost;
-(void)_startGrayToBGRASignpost;
-(void)_startPaddingSignpost;
-(void)_startScaleSignpost;
-(void)_startYCbCrToARGBSignpost;
-(void)dealloc;
-(void)logProfilingDetails;


@end


#endif