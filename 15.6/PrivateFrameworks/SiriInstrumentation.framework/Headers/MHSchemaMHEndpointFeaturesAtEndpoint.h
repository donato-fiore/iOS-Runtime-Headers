// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHENDPOINTFEATURESATENDPOINT_H
#define MHSCHEMAMHENDPOINTFEATURESATENDPOINT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHEndpointFeaturesAtEndpoint : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger clientSilenceFramesCountInNs; // ivar: _clientSilenceFramesCountInNs
@property (nonatomic) float clientSilenceProbability; // ivar: _clientSilenceProbability
@property (nonatomic) float endOfSentenceLikelihood; // ivar: _endOfSentenceLikelihood
@property (nonatomic) BOOL hasClientSilenceFramesCountInNs;
@property (nonatomic) BOOL hasClientSilenceProbability;
@property (nonatomic) BOOL hasEndOfSentenceLikelihood;
@property (nonatomic) BOOL hasServerFeaturesLatencyInNs;
@property (nonatomic) BOOL hasTrailingSilenceDurationInNs;
@property (nonatomic) BOOL hasWordCount;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger serverFeaturesLatencyInNs; // ivar: _serverFeaturesLatencyInNs
@property (nonatomic) NSUInteger trailingSilenceDurationInNs; // ivar: _trailingSilenceDurationInNs
@property (nonatomic) unsigned int wordCount; // ivar: _wordCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteClientSilenceFramesCountInNs;
-(void)deleteClientSilenceProbability;
-(void)deleteEndOfSentenceLikelihood;
-(void)deleteServerFeaturesLatencyInNs;
-(void)deleteTrailingSilenceDurationInNs;
-(void)deleteWordCount;
-(void)writeTo:(id)arg0 ;


@end


#endif