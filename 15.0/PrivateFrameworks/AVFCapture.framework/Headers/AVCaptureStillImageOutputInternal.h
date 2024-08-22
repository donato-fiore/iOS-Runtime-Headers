// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTURESTILLIMAGEOUTPUTINTERNAL_H
#define AVCAPTURESTILLIMAGEOUTPUTINTERNAL_H

@class AVWeakReference, NSMutableArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVCaptureStillImageOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSMutableArray *stillImageRequests;
    BOOL squareCropEnabled;
    CGSize previewImageSize;
    unsigned int imageDataFormatType;
    float jpegQuality;
    BOOL jpegQualitySpecified;
    BOOL noiseReductionEnabled;
    NSDictionary *outputSettings;
    BOOL isCapturingPhoto;
    BOOL SISSupported;
    BOOL SISEnabled;
    BOOL SISActive;
    BOOL highResStillEnabled;
    unsigned int shutterSoundID;
    ? preparedBracket;
    NSMutableArray *prepareRequests;
    NSUInteger maxBracketedCaptureCount;
    BOOL lensStabilizationDuringBracketedCaptureSupported;
    BOOL lensStabilizationDuringBracketedCaptureEnabled;
    BOOL bravoImageFusionSupported;
    *ct_green_tea_logger_s greenTeaLogger;
}




-(id)init;
-(void)dealloc;


@end


#endif