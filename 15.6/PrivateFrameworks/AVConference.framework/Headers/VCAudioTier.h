// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCAUDIOTIER_H
#define VCAUDIOTIER_H


#import <Foundation/Foundation.h>

#import "VCAudioPayloadConfig.h"

@interface VCAudioTier : NSObject {
    BOOL _bundlingAppliedByCodec;
}


@property (readonly) unsigned int audioCodecBitrate; // ivar: audioCodecBitrate
@property (readonly) unsigned int networkBitrate; // ivar: networkBitrate
@property (readonly) unsigned int packetsPerBundle; // ivar: packetsPerBundle
@property (readonly) VCAudioPayloadConfig *payloadConfig; // ivar: payloadConfig
@property (readonly) unsigned int redMaxDelay20ms; // ivar: redMaxDelay20ms
@property (readonly) unsigned int redNumPayloads; // ivar: redNumPayloads


+(BOOL)bundlingAppliedByCodecForPayload:(int)arg0 mode:(int)arg1 ;
+(id)newAudioTierForPayloadConfig:(id)arg0 bundlingAppliedByCodec:(BOOL)arg1 audioCodecBitrate:(unsigned int)arg2 packetsPerBundle:(unsigned int)arg3 redNumPayloads:(unsigned int)arg4 headerSize:(unsigned int)arg5 ;
-(BOOL)isEqualTo:(id)arg0 ;
-(id)description;
-(id)dictionary;
-(id)initWithNetworkBitrate:(unsigned int)arg0 bundlingAppliedByCodec:(BOOL)arg1 audioCodecBitrate:(unsigned int)arg2 packetsPerBundle:(unsigned int)arg3 redNumPayloads:(unsigned int)arg4 payloadConfig:(id)arg5 ;


@end


#endif