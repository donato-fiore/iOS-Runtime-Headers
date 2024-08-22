// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCAPTUREAUTOEXPOSUREBRACKETEDSTILLIMAGESETTINGS_H
#define AVCAPTUREAUTOEXPOSUREBRACKETEDSTILLIMAGESETTINGS_H



#import "AVCaptureBracketedStillImageSettings.h"

@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings

@property (readonly) float exposureTargetBias; // ivar: _exposureTargetBias


+(id)autoExposureSettingsWithExposureTargetBias:(float)arg0 ;
+(void)initialize;
-(id)_initAutoExposureSettingsWithExposureTargetBias:(float)arg0 ;
-(id)debugDescription;
-(id)description;


@end


#endif