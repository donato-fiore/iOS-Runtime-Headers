// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVDEPTHDATAINTERNAL_H
#define AVDEPTHDATAINTERNAL_H

@class NSData;

#import <Foundation/Foundation.h>

#import "AVCameraCalibrationData.h"

@interface AVDepthDataInternal : NSObject {
    *__CVBuffer pixelBuffer;
    int version;
    NSInteger quality;
    BOOL filtered;
    NSInteger accuracy;
    AVCameraCalibrationData *calibrationData;
    float depthBlurEffectSimulatedAperture;
    NSData *depthBlurEffectRenderingParameters;
    BOOL portraitScoreIsHigh;
    float portraitScore;
    float portraitLightingEffectStrength;
}






@end


#endif