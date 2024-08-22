// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATIONBLOBV2STREAMGROUP_H
#define VCMEDIANEGOTIATIONBLOBV2STREAMGROUP_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface VCMediaNegotiationBlobV2StreamGroup : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasStreamGroup;
@property (retain, nonatomic) NSMutableArray *payloads; // ivar: _payloads
@property (nonatomic) unsigned int streamGroup; // ivar: _streamGroup
@property (retain, nonatomic) NSMutableArray *streams; // ivar: _streams


+(BOOL)isValidStreamGroupIDFromConfig:(id)arg0 defaultConfig:(id)arg1 ;
+(id)defaultsForStreamGroup:(unsigned int)arg0 ;
+(id)defaultsForStreamGroupCustom:(unsigned int)arg0 ;
+(id)negotiationCipherSuiteAsString:(unsigned int)arg0 ;
+(unsigned int)streamGroupFromStreamGroupID:(unsigned int)arg0 ;
+(unsigned int)streamGroupIDFromStreamGroup:(unsigned int)arg0 ;
+(void)updateParentStreamIDForGroupConfig:(id)arg0 ;
-(BOOL)appendStreamsToStreamGroupConfig:(id)arg0 streamGroupID:(unsigned int)arg1 rtpSampleRates:(id)arg2 ;
-(BOOL)isDefaultPayloadConfigsWithStreamGroupConfig:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUsedPayloadConfigAtIndex:(id)arg0 streamGroupConfig:(id)arg1 rtpTimestampRate:(*unsigned int)arg2 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)setupPayloadsWithGroupConfig:(id)arg0 ;
-(BOOL)setupStreamsWithGroupConfig:(id)arg0 ;
-(BOOL)updatePayloadConfigsWithStreamGroupConfig:(id)arg0 rtpSampleRates:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customPayloadConfigStateWithStreamGroupConfig:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithStreamGroupConfig:(id)arg0 ;
-(id)initWithStreamGroupConfig:(id)arg0 defaultConfig:(id)arg1 ;
-(id)payloadsAtIndex:(NSUInteger)arg0 ;
-(id)streamsAtIndex:(NSUInteger)arg0 ;
-(int)getStreamGroupConfig:(*id)arg0 ;
-(void)addPayloads:(id)arg0 ;
-(void)addStreams:(id)arg0 ;
-(void)clearPayloads;
-(void)clearStreams;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithLogFile:(*void)arg0 prefix:(id)arg1 ;
-(void)updateDefaultPayloadConfigsWithConfig:(id)arg0 rtpSampleRates:(id)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif