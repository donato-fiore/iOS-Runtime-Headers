// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREDEVICEFORMATINTERNAL_H
#define AVCAPTUREDEVICEFORMATINTERNAL_H

@class FigCaptureSourceFormat, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVCaptureDeviceFormatInternal : NSObject {
    FigCaptureSourceFormat *sourceFormat;
    NSArray *videoSupportedFrameRateRanges;
    ? defaultActiveMinFrameDuration;
    ? defaultActiveMaxFrameDuration;
    NSDictionary *fcSourceAttributes;
    *opaqueCMFormatDescription formatDescription;
    NSArray *supportedDepthDataFormats;
    BOOL backgroundBlurSupported;
    NSArray *supportedMaxPhotoDimensions;
    BOOL studioLightingSupported;
    BOOL isDepthDataFormat;
}






@end


#endif