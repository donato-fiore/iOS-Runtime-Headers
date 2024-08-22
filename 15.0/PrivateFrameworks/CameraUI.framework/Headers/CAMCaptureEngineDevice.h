// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMCAPTUREENGINEDEVICE_H
#define CAMCAPTUREENGINEDEVICE_H

@class AVCaptureDeviceFormat, AVCaptureDevice, AVCaptureDeviceInput;

#import <Foundation/Foundation.h>

#import "CAMCaptureEngine.h"
#import "CAMMemoizationCache.h"

@interface CAMCaptureEngineDevice : NSObject

@property (readonly, nonatomic) AVCaptureDeviceFormat *_cachedPanoramaDeviceFormat; // ivar: __cachedPanoramaDeviceFormat
@property (readonly, nonatomic) AVCaptureDeviceFormat *_cachedPortraitDeviceFormat; // ivar: __cachedPortraitDeviceFormat
@property (readonly, weak, nonatomic) CAMCaptureEngine *_captureEngine; // ivar: __captureEngine
@property (readonly, nonatomic) CAMMemoizationCache *_videoDeviceFormatForVideoConfiguration; // ivar: __videoDeviceFormatForVideoConfiguration
@property (readonly, nonatomic) CAMMemoizationCache *_videoSessionPresetForVideoConfiguration; // ivar: __videoSessionPresetForVideoConfiguration
@property (readonly, nonatomic) AVCaptureDevice *captureDevice; // ivar: _captureDevice
@property (readonly, nonatomic) AVCaptureDeviceInput *captureDeviceInput; // ivar: _captureDeviceInput


-(id)_highestQualityDeviceFormatForVideoConfiguration:(NSInteger)arg0 videoEncodingBehavior:(NSInteger)arg1 enableHDR10BitVideo:(BOOL)arg2 ;
-(id)_highestQualitySessionPresetForVideoConfiguration:(NSInteger)arg0 videoEncodingBehavior:(NSInteger)arg1 enableHDR10BitVideo:(BOOL)arg2 ;
-(id)_keyForVideoConfiguration:(NSInteger)arg0 videoEncodingBehavior:(NSInteger)arg1 enableHDR10BitVideo:(BOOL)arg2 ;
-(id)_panoramaDeviceFormatForConfiguration:(id)arg0 ;
-(id)_portraitModeDeviceFormat;
-(id)_portraitModeSessionPreset;
-(id)_timelapseSessionPreset;
-(id)initWithEngine:(id)arg0 captureDevice:(id)arg1 ;
-(id)videoDeviceFormatForGraphConfiguration:(id)arg0 ;
-(id)videoDevicePresetForGraphConfiguration:(id)arg0 ;


@end


#endif