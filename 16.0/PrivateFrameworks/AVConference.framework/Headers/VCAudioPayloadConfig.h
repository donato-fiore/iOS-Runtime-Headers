// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAUDIOPAYLOADCONFIG_H
#define VCAUDIOPAYLOADCONFIG_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VCAudioPayloadConfig : NSObject {
    unsigned int _codecSamplesPerFrame;
    BOOL _useSBR;
}


@property (readonly, nonatomic) unsigned int bitrate; // ivar: _bitrate
@property (readonly, nonatomic) unsigned int blockSize; // ivar: _blockSize
@property (readonly, nonatomic) unsigned int bundleHeaderBytes; // ivar: _bundleHeaderBytes
@property (readonly, nonatomic) unsigned int codecSampleRate; // ivar: _codecSampleRate
@property (readonly, nonatomic) unsigned short evsChannelAwareOffset; // ivar: _evsChannelAwareOffset
@property (readonly, nonatomic) BOOL evsHeaderFullOnly; // ivar: _evsHeaderFullOnly
@property (readonly, nonatomic) unsigned int evsSIDPeriod; // ivar: _evsSIDPeriod
@property (readonly, nonatomic) unsigned int flags;
@property (readonly, nonatomic) BOOL forcingBitrate; // ivar: _forcingBitrate
@property (readonly, nonatomic) int format; // ivar: _format
@property (readonly, nonatomic) unsigned int inputSampleRate; // ivar: _inputSampleRate
@property (readonly, nonatomic) unsigned int internalBundleFactor; // ivar: _internalBundleFactor
@property (readonly, nonatomic) BOOL isDTXEnabled; // ivar: _isDTXEnabled
@property (readonly, nonatomic) BOOL isOpusInBandFecEnabled; // ivar: _isOpusInBandFecEnabled
@property (readonly, nonatomic) int payload; // ivar: _payload
@property (readonly, nonatomic) BOOL payloadOctetAligned; // ivar: _payloadOctetAligned
@property (readonly, nonatomic) unsigned int samplesPerFrame; // ivar: _inputSamplesPerFrame
@property (readonly, nonatomic) NSArray *supportedBandwidths; // ivar: _supportedBandwidths
@property (readonly, nonatomic) NSArray *supportedBitrates; // ivar: _supportedBitrates


-(BOOL)configure:(id)arg0 ;
-(float)qualityForBitRate:(unsigned int)arg0 ;
-(id)className;
-(id)description;
-(id)initWithConfigDict:(id)arg0 ;
-(unsigned int)aacBitrate;
-(void)createSupportedBitrates;
-(void)createSupportedBitratesForAACELD;
-(void)createSupportedBitratesForAACELD48;
-(void)createSupportedBitratesForAMR16k;
-(void)createSupportedBitratesForAMR8k;
-(void)createSupportedBitratesForEVS;
-(void)createSupportedBitratesForOpus;
-(void)dealloc;
-(void)setUseSBR:(BOOL)arg0 ;
-(void)setupEncodeProperties:(id)arg0 ;


@end


#endif