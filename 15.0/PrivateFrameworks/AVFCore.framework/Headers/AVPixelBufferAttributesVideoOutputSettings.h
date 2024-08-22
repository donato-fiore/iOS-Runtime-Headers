// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPIXELBUFFERATTRIBUTESVIDEOOUTPUTSETTINGS_H
#define AVPIXELBUFFERATTRIBUTESVIDEOOUTPUTSETTINGS_H

@class NSDictionary, NSString;
@protocol AVDecodedVideoSettingsForFig;


#import "AVVideoOutputSettings.h"

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig>

 {
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}


@property (readonly, nonatomic) NSString *fieldMode;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;


+(id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg0 exceptionReason:(*id)arg1 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(BOOL)canFullySpecifyOutputFormatReturningReason:(*id)arg0 ;
-(BOOL)encoderIsAvailableOnCurrentSystemReturningError:(*id)arg0 ;
-(BOOL)willYieldCompressedSamples;
-(id)cleanApertureDictionary;
-(id)initWithPixelBufferAttributes:(id)arg0 exceptionReason:(*id)arg1 ;
-(id)initWithTrustedPixelBufferAttributes:(id)arg0 ;
-(id)pixelAspectRatioDictionary;
-(int)height;
-(int)width;
-(void)dealloc;


@end


#endif