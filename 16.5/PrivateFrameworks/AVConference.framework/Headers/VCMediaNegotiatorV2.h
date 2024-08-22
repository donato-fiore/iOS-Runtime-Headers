// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATORV2_H
#define VCMEDIANEGOTIATORV2_H



#import "VCMediaNegotiatorBase.h"

@interface VCMediaNegotiatorV2 : VCMediaNegotiatorBase



+(BOOL)initializeLocalConfiguration:(id)arg0 negotiationData:(id)arg1 deviceRole:(int)arg2 preferredAudioPayload:(int)arg3 ;
+(BOOL)updateCameraU1Config:(id)arg0 forNegotiationBlob:(id)arg1 localSupportedVideoPayloads:(id)arg2 ;
+(BOOL)updateScreenU1ConfigWithStreamGroupConfig:(id)arg0 forNegotiationBlob:(id)arg1 localSupportedVideoPayloads:(id)arg2 ;
+(BOOL)updateStreamGroupU1Config:(id)arg0 forGroupId:(unsigned int)arg1 withNegotiationBlob:(id)arg2 localSupportedVideoPayloads:(id)arg3 ;
+(id)newCompressedBlob:(id)arg0 ;
+(id)newDecompressedBlob:(id)arg0 ;
+(id)newUnserializedMediaBlob:(id)arg0 ;
+(id)remoteFeatureStringWithRemoteMediaBlob:(id)arg0 ;
+(id)streamGroupIDsWithMediaBlob:(id)arg0 ;
+(unsigned int)capabilitiesWithMomentSettings:(id)arg0 ;
+(void)dumpRemoteNegotiationData:(id)arg0 forceFileDump:(BOOL)arg1 ;
-(BOOL)appendBandwidthSettingsToMediaBlob:(id)arg0 ;
-(BOOL)appendCameraOneToOneSettingsToMediaBlob:(id)arg0 ;
-(BOOL)appendCodecFeaturesToMediaBlob:(id)arg0 ;
-(BOOL)appendGeneralInfoToMediaBlob:(id)arg0 ;
-(BOOL)appendMicrophoneOneToOneSettingsToMediaBlob:(id)arg0 ;
-(BOOL)appendMomentsSettingsToMediaBlob:(id)arg0 ;
-(BOOL)appendStreamGroupsToMediaBlob:(id)arg0 ;
-(BOOL)negotiateStreamGroupConfig:(id)arg0 remoteInviteBlob:(id)arg1 ;
-(BOOL)negotiateU1SettingsForStreamGroup:(id)arg0 ;
-(BOOL)processRemoteNegotiationData:(id)arg0 ;
-(BOOL)selectBestDecodeVideoRuleForTransport:(unsigned char)arg0 payload:(int)arg1 localVideoRuleCollection:(id)arg2 remoteVideoRuleCollection:(id)arg3 ;
-(BOOL)setupNegotiatedMomentsResultsWithRemoteMediaBlob:(id)arg0 ;
-(BOOL)setupNegotiatedResultsWithRemoteMediaBlob:(id)arg0 ;
-(BOOL)setupNegotiatedVideoSettingsWithRemoteMediaBlob:(id)arg0 ;
-(BOOL)setupStreamGroupsWithRemoteMediaBlob:(id)arg0 ;
-(id)negotiationData;
-(id)newNegotiatedSystemAudioResultsWithRemoteMediaBlob:(id)arg0 ;
-(unsigned int)remoteMaxBandwidthForOperatingMode:(int)arg0 connectionType:(int)arg1 ;
-(void)setupNegotiatedAudioResultsWithRemoteMediaBlob:(id)arg0 ;
-(void)setupNegotiatedFaceTimeSettingsWithRemoteMediaBlob:(id)arg0 ;


@end


#endif