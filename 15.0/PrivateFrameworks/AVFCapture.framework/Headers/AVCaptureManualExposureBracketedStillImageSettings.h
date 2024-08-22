// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREMANUALEXPOSUREBRACKETEDSTILLIMAGESETTINGS_H
#define AVCAPTUREMANUALEXPOSUREBRACKETEDSTILLIMAGESETTINGS_H



#import "AVCaptureBracketedStillImageSettings.h"

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings

@property (readonly) float ISO; // ivar: _ISO
@property (readonly) ? exposureDuration; // ivar: _exposureDuration


+(id)manualExposureSettingsWithExposureDuration:(struct ? )arg0 ISO:(float)arg1 ;
+(void)initialize;
-(id)_initManualExposureSettingsWithExposureDuration:(struct ? )arg0 ISO:(float)arg1 ;
-(id)debugDescription;
-(id)description;


@end


#endif