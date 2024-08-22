// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATIONBLOBV2STREAMGROUPPAYLOAD_H
#define VCMEDIANEGOTIATIONBLOBV2STREAMGROUPPAYLOAD_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface VCMediaNegotiationBlobV2StreamGroupPayload : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int cipherSuite; // ivar: _cipherSuite
@property (nonatomic) unsigned int codecType; // ivar: _codecType
@property (nonatomic) unsigned int encoderUsage; // ivar: _encoderUsage
@property (nonatomic) BOOL hasCipherSuite;
@property (nonatomic) BOOL hasCodecType;
@property (nonatomic) BOOL hasEncoderUsage;
@property (nonatomic) BOOL hasMediaFlags;
@property (nonatomic) BOOL hasPTime;
@property (readonly, nonatomic) BOOL hasPackedPayload;
@property (nonatomic) BOOL hasProfileLevelId;
@property (nonatomic) BOOL hasRtcpFlags;
@property (nonatomic) BOOL hasRtpPayload;
@property (nonatomic) BOOL hasRtpSampleRate;
@property (nonatomic) unsigned int mediaFlags; // ivar: _mediaFlags
@property (nonatomic) unsigned int pTime; // ivar: _pTime
@property (retain, nonatomic) NSData *packedPayload; // ivar: _packedPayload
@property (nonatomic) unsigned int profileLevelId; // ivar: _profileLevelId
@property (nonatomic) unsigned int rtcpFlags; // ivar: _rtcpFlags
@property (nonatomic) unsigned int rtpPayload; // ivar: _rtpPayload
@property (nonatomic) unsigned int rtpSampleRate; // ivar: _rtpSampleRate


+(BOOL)isDefaultPayloadConfig:(id)arg0 index:(unsigned int)arg1 rtpSampleRate:(unsigned int)arg2 streamGroupID:(unsigned int)arg3 ;
+(BOOL)isNegotiationCodecTypeAudio:(unsigned int)arg0 ;
+(BOOL)isPTimePackable:(unsigned int)arg0 ;
+(NSInteger)codecTypeWithNegotiationCodecType:(unsigned int)arg0 ;
+(id)defaultDataCodecConfig;
+(id)defaultFTXTCodecConfig;
+(id)defaultMMJIConfig;
+(id)defaultMoCapConfig;
+(id)defaultPayloadConfigurationsForStreamGroupID:(unsigned int)arg0 ;
+(id)rtcpFlagStringWithPayloadConfig:(id)arg0 ;
+(int)negotiationPackedRtpSampleRateWithRTPSampleRate:(unsigned int)arg0 ;
+(unsigned char)negotiationPackedPTimeWithPTime:(unsigned int)arg0 ;
+(unsigned int)cipherSuiteWithNegotiationCipherSuite:(unsigned int)arg0 ;
+(unsigned int)defaultRTPSampleRateForStreamGroupID:(unsigned int)arg0 ;
+(unsigned int)mediaFlagsWithPayloadConfig:(id)arg0 ;
+(unsigned int)negotiationCipherSuiteWithCipherSuite:(unsigned int)arg0 ;
+(unsigned int)negotiationCodecTypeWithCodecType:(NSInteger)arg0 ;
+(unsigned int)pTimeWithNegotiationPackedPTime:(unsigned char)arg0 ;
+(unsigned int)rtcpFlagsWithPayloadConfig:(id)arg0 ;
+(unsigned int)rtpSampleRateWithNegotiationPackedSampleRate:(int)arg0 ;
+(void)printWithLogFile:(*void)arg0 prefix:(id)arg1 payloadConfig:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithPayloadConfig:(id)arg0 index:(unsigned int)arg1 rtpSampleRate:(unsigned int)arg2 streamGroupID:(unsigned int)arg3 ;
-(id)initWithPayloadConfig:(id)arg0 rtpSampleRate:(unsigned int)arg1 ;
-(id)newCompactPayloadWithPayloadConfig:(id)arg0 rtpSampleRate:(unsigned int)arg1 ;
-(id)payloadConfigurationWithPayloadConfig:(id)arg0 ;
-(id)payloadConfigurationWithStreamGroupID:(unsigned int)arg0 index:(unsigned int)arg1 ;
-(unsigned int)rtpSampleRateWithStreamGroupID:(unsigned int)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)getStreamGroupPayload:(struct tagStreamGroupPayload *)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)setNegotiationPackedPayloadWithStreamGroupPayload:(struct tagStreamGroupPayload *)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif