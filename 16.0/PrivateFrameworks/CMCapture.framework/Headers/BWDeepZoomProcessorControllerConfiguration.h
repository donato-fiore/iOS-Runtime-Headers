// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDEEPZOOMPROCESSORCONTROLLERCONFIGURATION_H
#define BWDEEPZOOMPROCESSORCONTROLLERCONFIGURATION_H



#import "BWStillImageProcessorControllerConfiguration.h"
#import "BWVideoFormat.h"

@interface BWDeepZoomProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (retain, nonatomic) BWVideoFormat *inputFormat; // ivar: _inputFormat
@property (retain, nonatomic) BWVideoFormat *outputFormat; // ivar: _outputFormat
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) int version; // ivar: _version


+(BOOL)doDeepZoomForPixelBuffer:(struct __CVBuffer *)arg0 type:(int)arg1 sensorConfiguration:(id)arg2 metadata:(id)arg3 stillImageSettings:(id)arg4 intermediateZoomSrcRectOut:(struct CGRect *)arg5 intermediateZoomDstRectOut:(struct CGRect *)arg6 ;
+(BOOL)doDeepZoomForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 type:(int)arg1 sensorConfiguration:(id)arg2 intermediateZoomSrcRectOut:(struct CGRect *)arg3 intermediateZoomDstRectOut:(struct CGRect *)arg4 ;
+(int)deepZoomProcessingModeForPixelBuffer:(struct __CVBuffer *)arg0 type:(int)arg1 sensorConfiguration:(id)arg2 stillImageSettings:(id)arg3 ;
+(int)deepZoomProcessingModeForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 type:(int)arg1 sensorConfiguration:(id)arg2 ;
-(void)dealloc;


@end


#endif