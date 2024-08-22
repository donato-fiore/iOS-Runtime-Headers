// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAVVIDEOSETTINGSVIDEOOUTPUTSETTINGS_H
#define AVAVVIDEOSETTINGSVIDEOOUTPUTSETTINGS_H

@class NSDictionary;
@protocol AVReencodedVideoSettingsForFig;


#import "AVVideoOutputSettings.h"

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig>

 {
    NSDictionary *_adaptedVideoCompressionProperties;
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}


@property (readonly, nonatomic) unsigned int videoCodecType;
@property (readonly, nonatomic) NSDictionary *videoCompressionProperties;
@property (readonly, nonatomic) NSDictionary *videoEncoderSpecification;


+(BOOL)_validateVideoCompressionProperties:(id)arg0 againstSupportedPropertyDictionary:(id)arg1 forCodecType:(id)arg2 exceptionReason:(*id)arg3 ;
+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg0 exceptionReason:(*id)arg1 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(*id)arg0 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(*id)arg0 ;
-(BOOL)willYieldCompressedSamples;
-(id)cleanApertureDictionary;
-(id)initWithAVVideoSettingsDictionary:(id)arg0 exceptionReason:(*id)arg1 ;
-(id)initWithTrustedAVVideoSettingsDictionary:(id)arg0 ;
-(id)pixelAspectRatioDictionary;
-(int)height;
-(int)width;
-(void)dealloc;


@end


#endif