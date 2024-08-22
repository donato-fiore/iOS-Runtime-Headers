// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMSTILLIMAGECAPTURERESOLVEDSETTINGS_H
#define CAMSTILLIMAGECAPTURERESOLVEDSETTINGS_H


#import <Foundation/Foundation.h>


@interface CAMStillImageCaptureResolvedSettings : NSObject

@property (readonly, nonatomic, getter=isHDREnabled) BOOL HDREnabled; // ivar: _HDREnabled
@property (readonly, nonatomic, getter=isCaptureBeforeResolvingSettingsEnabled) BOOL captureBeforeResolvingSettingsEnabled; // ivar: _captureBeforeResolvingSettingsEnabled
@property (readonly, nonatomic) BOOL lowLightCaptureHasConstantPreviewFeedbackSensitivity; // ivar: _lowLightCaptureHasConstantPreviewFeedbackSensitivity
@property (readonly, nonatomic) BOOL lowLightCaptureHasInitialPreviewFeedbackSensitivity; // ivar: _lowLightCaptureHasInitialPreviewFeedbackSensitivity
@property (readonly, nonatomic) CGFloat lowLightCaptureTime; // ivar: _lowLightCaptureTime
@property (readonly, nonatomic) *CGColor lowLightPreviewColorEstimate; // ivar: _lowLightPreviewColorEstimate
@property (readonly, nonatomic, getter=isPortraitEffectEnabled) BOOL portraitEffectEnabled; // ivar: _portraitEffectEnabled


-(id)initWithHDREnabled:(BOOL)arg0 portraitEffectEnabled:(BOOL)arg1 lowLightCaptureTime:(CGFloat)arg2 lowLightPreviewColorEstimate:(struct CGColor *)arg3 lowLightCaptureHasInitialPreviewFeedbackSensitivity:(BOOL)arg4 lowLightCaptureHasConstantPreviewFeedbackSensitivity:(BOOL)arg5 captureBeforeResolvingSettingsEnabled:(BOOL)arg6 ;
-(void)dealloc;


@end


#endif