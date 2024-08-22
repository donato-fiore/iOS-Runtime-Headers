// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPAYLOADUTILS_H
#define VCPAYLOADUTILS_H


#import <Foundation/Foundation.h>


@interface VCPayloadUtils : NSObject



+(BOOL)canBundleExternallyForPayload:(int)arg0 forBundlingScheme:(int)arg1 operatingMode:(int)arg2 ;
+(BOOL)canSetBitrateForPayload:(int)arg0 ;
+(BOOL)isPayloadSupportedInFaceTime:(int)arg0 ;
+(BOOL)isUseCaseWatchContinuity:(int)arg0 primaryPayload:(int)arg1 ;
+(BOOL)shouldEnablePacketSizeLimitForPayload:(int)arg0 ;
+(BOOL)shouldUseCookieForPayload:(int)arg0 ;
+(BOOL)supportsCodecRateModesForCodecType:(NSInteger)arg0 ;
+(NSInteger)codecTypeForPayload:(int)arg0 ;
+(NSInteger)ctAudioCodecEVSBandwidthForMediaStreamCodec:(NSInteger)arg0 ;
+(NSInteger)ctAudioCodecEVSBitrateForBitrate:(unsigned int)arg0 ;
+(NSInteger)ctAudioCodecTypeForMediaStreamCodec:(NSInteger)arg0 ;
+(float)qualityForPayload:(int)arg0 forBitrate:(unsigned int)arg1 ;
+(int)payloadForCodecType:(NSInteger)arg0 ;
+(unsigned int)bitrateForAMRCodecMode:(int)arg0 ;
+(unsigned int)bitrateForAMRWBCodecMode:(int)arg0 ;
+(unsigned int)bitrateForCodecType:(NSInteger)arg0 mode:(int)arg1 ;
+(unsigned int)bitrateForEVSCodecMode:(int)arg0 ;
+(unsigned int)codecSamplesPerFrameForPayload:(int)arg0 blockSize:(CGFloat)arg1 ;
+(unsigned int)internalBundleFactorForPayload:(int)arg0 ;
+(unsigned int)sampleRateForPayload:(int)arg0 ;


@end


#endif