// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVIDEOOUTPUTSETTINGS_H
#define AVVIDEOOUTPUTSETTINGS_H

@class NSDictionary, NSString;


#import "AVOutputSettings.h"

@interface AVVideoOutputSettings : AVOutputSettings

@property (readonly, nonatomic) BOOL allowWideColor;
@property (readonly, nonatomic) NSDictionary *cleanApertureDictionary;
@property (readonly, nonatomic) BOOL dimensionsAreBoundingBox;
@property (readonly, nonatomic) NSString *frameRateConversionAlgorithm;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) ? minimumFrameDuration;
@property (readonly, nonatomic) NSDictionary *pixelAspectRatioDictionary;
@property (readonly, nonatomic) NSDictionary *pixelTransferProperties;
@property (readonly, nonatomic) NSDictionary *videoScalingProperties;
@property (readonly, nonatomic) NSDictionary *videoSettingsDictionary;
@property (readonly, nonatomic) int width;


+(id)_outputSettingsWithOutputSettingsDictionary:(id)arg0 mediaType:(id)arg1 exceptionReason:(*id)arg2 ;
+(id)_validValuesForScalingMode;
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg0 exceptionReason:(*id)arg1 ;
+(id)defaultVideoOutputSettings;
+(id)registeredOutputSettingsClasses;
+(id)videoOutputSettingsWithTrustedVideoSettingsDictionary:(id)arg0 ;
+(id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg0 ;
-(BOOL)validateUsingOutputSettingsValidator:(id)arg0 reason:(*id)arg1 ;
-(id)compatibleMediaTypes;
-(id)initWithVideoSettingsDictionary:(id)arg0 exceptionReason:(*id)arg1 ;
-(void)colorPropertiesConsideringFormatDescriptions:(id)arg0 colorPrimaries:(*id)arg1 transferFunction:(*id)arg2 ycbcrMatrix:(*id)arg3 ;


@end


#endif