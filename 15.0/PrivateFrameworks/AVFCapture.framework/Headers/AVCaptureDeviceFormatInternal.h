// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREDEVICEFORMATINTERNAL_H
#define AVCAPTUREDEVICEFORMATINTERNAL_H

@class FigCaptureSourceFormat, NSArray;

#import <Foundation/Foundation.h>


@interface AVCaptureDeviceFormatInternal : NSObject {
    FigCaptureSourceFormat *sourceFormat;
    NSArray *videoSupportedFrameRateRanges;
    ? defaultActiveMinFrameDuration;
    ? defaultActiveMaxFrameDuration;
    NSArray *supportedDepthDataFormats;
    BOOL backgroundBlurSupported;
}






@end


#endif