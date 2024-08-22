// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIOSTREAMCONFIG_H
#define VCAUDIOSTREAMCONFIG_H

@class NSMutableOrderedSet, NSDictionary, NSArray;


#import "VCMediaStreamConfig.h"

@interface VCAudioStreamConfig : VCMediaStreamConfig {
    NSMutableOrderedSet *_supportedNumRedundantPayload;
    tagVCAudioFrameFormat _externalIOFormat;
}


@property (nonatomic) BOOL anbrEnabled; // ivar: _anbrEnabled
@property (nonatomic) NSInteger audioStreamMode; // ivar: _audioStreamMode
@property (nonatomic) int bundlingScheme; // ivar: _bundlingScheme
@property (nonatomic) unsigned int channelCount; // ivar: _channelCount
@property (readonly, nonatomic) NSDictionary *codecConfigurations; // ivar: _codecConfigurations
@property (nonatomic) unsigned int dtmfSampleRate; // ivar: _dtmfSampleRate
@property (nonatomic) BOOL dtmfTonePlaybackEnabled; // ivar: _dtmfTonePlaybackEnabled
@property (nonatomic) BOOL enableMaxBitrateOnNoChangeCMR; // ivar: _enableMaxBitrateOnNoChangeCMR
@property (nonatomic) *tagVCAudioFrameFormat externalIOFormat;
@property (nonatomic) BOOL forceEVSWideBand; // ivar: _forceEVSWideBand
@property (nonatomic) BOOL isLowLatency; // ivar: _isLowLatency
@property (nonatomic) unsigned char numRedundantPayloads; // ivar: _numRedundantPayloads
@property (nonatomic) int oneToOneOperatingMode; // ivar: _oneToOneOperatingMode
@property (nonatomic) unsigned int preferredMediaBitRate; // ivar: _preferredMediaBitRate
@property (readonly, nonatomic, getter=isRedEnabled) BOOL redEnabled; // ivar: _redEnabled
@property (nonatomic) BOOL shouldApplyRedAsBoolean; // ivar: _shouldApplyRedAsBoolean
@property (nonatomic) NSInteger subscriptionSlot; // ivar: _subscriptionSlot
@property (readonly, nonatomic) NSArray *supportedNumRedundantPayload;
@property (nonatomic) BOOL supportsAdaptation; // ivar: _supportsAdaptation
@property (readonly, nonatomic) BOOL useExternalIO; // ivar: _useExternalIO
@property (nonatomic) BOOL useWifiTiers; // ivar: _useWifiTiers
@property (nonatomic) float volume; // ivar: _volume


+(int)bundlingSchemeForAudioStreamMode:(NSInteger)arg0 payloadType:(int)arg1 ;
-(BOOL)setupCNCodecWithClientDictionary:(id)arg0 ;
-(BOOL)setupCodecWithClientDictionary:(id)arg0 ;
-(BOOL)setupDTMFCodecWithClientDictionary:(id)arg0 ;
-(id)init;
-(id)initWithClientDictionary:(id)arg0 ;
-(void)addCodecConfiguration:(id)arg0 ;
-(void)addSupportedNumRedundantPayload:(unsigned int)arg0 ;
-(void)dealloc;
-(void)setupRedWithRxPayload:(unsigned int)arg0 txPayload:(unsigned int)arg1 ;


@end


#endif