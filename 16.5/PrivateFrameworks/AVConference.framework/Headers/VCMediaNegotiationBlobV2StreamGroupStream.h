// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIANEGOTIATIONBLOBV2STREAMGROUPSTREAM_H
#define VCMEDIANEGOTIATIONBLOBV2STREAMGROUPSTREAM_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface VCMediaNegotiationBlobV2StreamGroupStream : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int audioChannelCount; // ivar: _audioChannelCount
@property (nonatomic) unsigned int coordinateSystem; // ivar: _coordinateSystem
@property (nonatomic) BOOL hasAudioChannelCount;
@property (nonatomic) BOOL hasCoordinateSystem;
@property (nonatomic) BOOL hasMaxNetworkBitrate;
@property (nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasOptionalPackedPayload;
@property (nonatomic) BOOL hasPayloadSpecOrPayloads;
@property (nonatomic) BOOL hasQualityIndex;
@property (nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property (readonly, nonatomic) BOOL hasRequiredPackedPayload;
@property (nonatomic) BOOL hasRtpSSRC;
@property (nonatomic) BOOL hasStreamID;
@property (nonatomic) BOOL hasStreamIndex;
@property (nonatomic) unsigned int maxNetworkBitrate; // ivar: _maxNetworkBitrate
@property (nonatomic) unsigned int metadata; // ivar: _metadata
@property (retain, nonatomic) NSData *optionalPackedPayload; // ivar: _optionalPackedPayload
@property (nonatomic) unsigned int payloadSpecOrPayloads; // ivar: _payloadSpecOrPayloads
@property (nonatomic) unsigned int qualityIndex; // ivar: _qualityIndex
@property (nonatomic) unsigned int repairedMaxNetworkBitrate; // ivar: _repairedMaxNetworkBitrate
@property (retain, nonatomic) NSData *requiredPackedPayload; // ivar: _requiredPackedPayload
@property (nonatomic) unsigned int rtpSSRC; // ivar: _rtpSSRC
@property (nonatomic) unsigned int streamID; // ivar: _streamID
@property (nonatomic) unsigned int streamIndex; // ivar: _streamIndex


+(BOOL)isDefaultPayloadConfigsWithStreamConfig:(id)arg0 payloadConfigs:(id)arg1 streamGroupID:(unsigned int)arg2 ;
+(BOOL)isFallbackStreamWithStreamGroupID:(unsigned int)arg0 streamConfig:(id)arg1 ;
+(BOOL)payloadSpecWithStreamConfig:(id)arg0 payloadConfigs:(id)arg1 payloadSpecs:(*unsigned int)arg2 ;
+(BOOL)payloadsWithStreamConfig:(id)arg0 payloadBitmap:(*unsigned int)arg1 ;
+(BOOL)qualityIndex:(*unsigned int)arg0 isFallbackStream:(*BOOL)arg1 forStreamGroupID:(unsigned int)arg2 streamIndex:(unsigned char)arg3 ;
+(BOOL)streamIndex:(char *)arg0 forStreamGroupID:(unsigned int)arg1 qualityIndex:(unsigned int)arg2 isFallbackStream:(BOOL)arg3 ;
+(id)defaultsForStreamGroupID:(unsigned int)arg0 streamIndex:(unsigned char)arg1 ;
+(int)payloadsWithPayloadBit:(int)arg0 ;
+(unsigned int)metadataWithStreamConfig:(id)arg0 ;
+(unsigned int)payloadFlagWithPayload:(int)arg0 ;
+(void)appendMetadata:(unsigned int)arg0 toString:(id)arg1 ;
+(void)appendPayloadsSpecsToString:(id)arg0 streamConfig:(id)arg1 ;
+(void)appendPayloadsToString:(id)arg0 streamConfig:(id)arg1 ;
+(void)printWithLogFile:(*void)arg0 prefix:(id)arg1 streamConfig:(id)arg2 ;
+(void)updateStreamConfig:(id)arg0 withMetadata:(unsigned int)arg1 ;
-(BOOL)initSSRC:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)readOptionalPacketPayload:(struct tagStreamGroupStreamOptionalPackedPayload *)arg0 ;
-(BOOL)readRequiredPacketPayloadWithStreamConfig:(id)arg0 ;
-(BOOL)setNegotiatedCoordinateSystemFromCoordinateSystem:(unsigned int)arg0 ;
-(BOOL)updatePayloadSpecsForConfig:(id)arg0 defaultConfig:(id)arg1 ;
-(BOOL)updatePayloadSpecsForConfig:(id)arg0 defaultConfig:(id)arg1 payloadConfigs:(id)arg2 ;
-(BOOL)usesPayloadConfigsWithGroupID:(unsigned int)arg0 ;
-(NSUInteger)hash;
-(id)compressWithConfig:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRequiredPacketPayload;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithStreamConfig:(id)arg0 payloadConfigs:(id)arg1 streamGroupID:(unsigned int)arg2 ;
-(id)initWithStreamConfig:(id)arg0 payloadConfigs:(id)arg1 streamGroupID:(unsigned int)arg2 defaultConfig:(id)arg3 ;
-(id)optionalPackedPayloaWithDefaultConfig:(id)arg0 ;
-(id)optionalPayloadCompressWithConfig:(id)arg0 ;
-(id)requiredPayloadCompressWithConfig:(id)arg0 ;
-(id)streamConfigWithPayloadConfigs:(id)arg0 payloadConfigSampleRates:(id)arg1 streamGroupID:(unsigned int)arg2 ;
-(unsigned int)actualAudioChannelCountWithDefaultConfig:(id)arg0 ;
-(unsigned int)actualMaxNetworkBitrateWithDefaultConfig:(id)arg0 ;
-(unsigned int)actualMaxRepairedNetworkBitrateWithDefaultConfig:(id)arg0 ;
-(unsigned int)actualMetadataWithDefaultConfig:(id)arg0 ;
-(unsigned int)actualQualityIndexWithDefaultConfig:(id)arg0 ;
-(unsigned int)actualStreamIndex;
-(unsigned int)mediaStreamGroupCoordinateSystem;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)usePayloadSpecWithGroupID:(unsigned int)arg0 qualityIndexForPayloadSpecIndex:(id)arg1 defaultPayloadSpecsForQualityIndex:(id)arg2 ;
-(void)writeTo:(id)arg0 ;


@end


#endif