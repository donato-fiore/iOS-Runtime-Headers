// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPINSTSCHEMACLPNLV4SAMPLEEVALUATIONSTARTED_H
#define CLPINSTSCHEMACLPNLV4SAMPLEEVALUATIONSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface CLPInstSchemaCLPNLv4SampleEvaluationStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int batchChunkId; // ivar: _batchChunkId
@property (nonatomic) unsigned int batchNumChunks; // ivar: _batchNumChunks
@property (nonatomic) BOOL hasBatchChunkId;
@property (nonatomic) BOOL hasBatchNumChunks;
@property (nonatomic) BOOL hasSyntheticRequestId; // ivar: _hasSyntheticRequestId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *syntheticRequestId; // ivar: _syntheticRequestId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteBatchChunkId;
-(void)deleteBatchNumChunks;
-(void)deleteSyntheticRequestId;
-(void)writeTo:(id)arg0 ;


@end


#endif