// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIANEGOTIATOR_H
#define VCMEDIANEGOTIATOR_H



#import "VCMediaNegotiatorBase.h"
#import "VCMediaNegotiatorResultsCaptions.h"

@interface VCMediaNegotiator : VCMediaNegotiatorBase {
    BOOL _negotiationDone;
}


@property (readonly, nonatomic) BOOL isCaller;
@property (readonly, nonatomic) BOOL isCellular16x9Capable; // ivar: _isCellular16x9Capable
@property (readonly, nonatomic) VCMediaNegotiatorResultsCaptions *negotiatedCaptionsSettings; // ivar: _negotiatedCaptionsSettings
@property (readonly, nonatomic) NSInteger negotiationMode; // ivar: _negotiationMode
@property (readonly, nonatomic) BOOL usePreNegotiation; // ivar: _usePreNegotiation


+(BOOL)initializeLocalConfiguration:(id)arg0 negotiationData:(id)arg1 deviceRole:(int)arg2 preferredAudioPayload:(int)arg3 ;
+(BOOL)validateLocalConfiguration:(id)arg0 ;
+(BOOL)validateMultiwayAudioStreamConfigurations:(id)arg0 ;
+(BOOL)validateMultiwayVideoStreamConfigurations:(id)arg0 ;
+(id)localConfigurationWithData:(id)arg0 deviceRole:(int)arg1 preferredAudioPayload:(int)arg2 ;
+(id)negotiatedFeaturesStringWithLocalFeaturesString:(id)arg0 remoteFeaturesString:(id)arg1 ;
+(id)negotiationBlobFromData:(id)arg0 ;
+(id)newCompressedBlob:(id)arg0 ;
+(id)newDecompressedBlob:(id)arg0 ;
+(unsigned int)mappedRemoteQualityIndexForQualityIndex:(unsigned int)arg0 ;
+(void)dumpBlob:(id)arg0 prefix:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)addBandwidthSettingsForMediaBlob:(id)arg0 operatingMode:(int)arg1 connectionType:(int)arg2 maxBitrate:(unsigned int)arg3 ;
-(BOOL)isCellular16x9EncodeCapable;
-(BOOL)isVideoStreamSupported:(int)arg0 ;
-(BOOL)negotiateAudioDTXPayload:(id)arg0 ;
-(BOOL)negotiateAudioPrimaryPayload:(id)arg0 ;
-(BOOL)negotiateAudioREDPayload:(id)arg0 ;
-(BOOL)negotiateAudioSettings:(id)arg0 ;
-(BOOL)negotiateCaptionsWithCaptionsSettings:(id)arg0 ;
-(BOOL)negotiateFaceTimeSettings:(id)arg0 ;
-(BOOL)negotiateMomentsWithMomentsSettings:(id)arg0 ;
-(BOOL)negotiateMultiwayAudioStreams:(id)arg0 ;
-(BOOL)negotiateMultiwayVideoStreams:(id)arg0 ;
-(BOOL)negotiateScreenSettings:(id)arg0 ;
-(BOOL)negotiateVideoSettings:(id)arg0 ;
-(BOOL)processParameterSets:(id)arg0 videoResults:(id)arg1 ;
-(BOOL)processPixelFormats:(id)arg0 videoResults:(id)arg1 ;
-(BOOL)processRemoteNegotiationData:(id)arg0 ;
-(BOOL)processResponseBlob:(id)arg0 ;
-(BOOL)selectBestScreenRule:(id)arg0 preferredPayloadOrder:(id)arg1 ;
-(BOOL)selectBestVideoRuleForTransport:(unsigned char)arg0 payload:(int)arg1 encodingType:(unsigned char)arg2 localVideoRuleCollection:(id)arg3 remoteVideoSettings:(id)arg4 negotiatedVideoSettings:(id)arg5 isScreen:(BOOL)arg6 ;
-(BOOL)setupAudioWithNegotiatedSettings:(id)arg0 ;
-(BOOL)setupBandwidthSettingsForMediaBlob:(id)arg0 ;
-(BOOL)setupScreenWithNegotiatedSettings:(id)arg0 ;
-(BOOL)setupVideoWithNegotiatedSettings:(id)arg0 ;
-(id)getPreferredScreenPayloadList;
-(id)initWithLocalSettings:(id)arg0 ;
-(id)initWithMode:(NSInteger)arg0 localSettings:(id)arg1 ;
-(id)localeWithMediaBlobLanguage:(int)arg0 ;
-(id)negotiateVideoMaxResolutionWithEncodeRules:(id)arg0 decodeRules:(id)arg1 isEncoder:(BOOL)arg2 ;
-(id)negotiationData;
-(id)newResponseBlob;
-(id)newStreamConfigFromMultiwayAudioStream:(id)arg0 ;
-(id)newStreamConfigFromMultiwayVideoStream:(id)arg0 ;
-(id)newStreamGroupCodecConfigForPayload:(int)arg0 ;
-(id)selectVideoFeatureString:(id)arg0 selectedPayload:(int)arg1 ;
-(int)mediaBlobLanguageWithLocale:(id)arg0 ;
-(unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg0 connectionType:(int)arg1 ;
-(void)dealloc;
-(void)negotiateAudioAllowRecording:(id)arg0 ;
-(void)negotiateAudioSecondaryPayloads:(id)arg0 ;
-(void)negotiateAudioUseSBR:(id)arg0 ;
-(void)negotiateRTCPFB:(id)arg0 ;
-(void)negotiateTilesPerFrame:(id)arg0 ;
-(void)saveRemoteBandwidthSettingsWithMediaBlob:(id)arg0 ;
-(void)setupCaptionsForMediaBlob:(id)arg0 ;
-(void)setupFaceTimeSettingsForMediaBlob:(id)arg0 isResponse:(BOOL)arg1 ;
-(void)setupMomentsForMediaBlob:(id)arg0 ;
-(void)setupMultiwayAudioStreamsForMediaBlob:(id)arg0 ;
-(void)setupMultiwayVideoStreamsForMediaBlob:(id)arg0 ;


@end


#endif