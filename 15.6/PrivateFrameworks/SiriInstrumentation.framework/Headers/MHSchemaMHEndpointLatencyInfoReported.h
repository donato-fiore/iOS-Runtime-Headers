// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHENDPOINTLATENCYINFOREPORTED_H
#define MHSCHEMAMHENDPOINTLATENCYINFOREPORTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MHSchemaMHStatisticDistributionInfo.h"
#import "MHSchemaMHTrailingPacketLatencyInfo.h"

@interface MHSchemaMHEndpointLatencyInfoReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *coreSpeechTrailingPacketLatency; // ivar: _coreSpeechTrailingPacketLatency
@property (retain, nonatomic) MHSchemaMHTrailingPacketLatencyInfo *coreSpeechTrailingPacketLatencyInfo; // ivar: _coreSpeechTrailingPacketLatencyInfo
@property (nonatomic) NSUInteger firstPacketLatencyInNs; // ivar: _firstPacketLatencyInNs
@property (nonatomic) BOOL hasCoreSpeechTrailingPacketLatency; // ivar: _hasCoreSpeechTrailingPacketLatency
@property (nonatomic) BOOL hasCoreSpeechTrailingPacketLatencyInfo; // ivar: _hasCoreSpeechTrailingPacketLatencyInfo
@property (nonatomic) BOOL hasFirstPacketLatencyInNs;
@property (nonatomic) BOOL hasTrailingPacketLatency; // ivar: _hasTrailingPacketLatency
@property (nonatomic) BOOL hasTrailingPacketLatencyInfo; // ivar: _hasTrailingPacketLatencyInfo
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *trailingPacketLatency; // ivar: _trailingPacketLatency
@property (retain, nonatomic) MHSchemaMHTrailingPacketLatencyInfo *trailingPacketLatencyInfo; // ivar: _trailingPacketLatencyInfo


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCoreSpeechTrailingPacketLatency;
-(void)deleteCoreSpeechTrailingPacketLatencyInfo;
-(void)deleteFirstPacketLatencyInNs;
-(void)deleteTrailingPacketLatency;
-(void)deleteTrailingPacketLatencyInfo;
-(void)writeTo:(id)arg0 ;


@end


#endif