// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEGASUSSCHEMAPEGASUSREWRITTENUTTERANCESREPORTED_H
#define PEGASUSSCHEMAPEGASUSREWRITTENUTTERANCESREPORTED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PEGASUSSchemaPEGASUSRewrittenUtterancesReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasWasRewrittenUtteranceUsed;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *rewrittenUtterancesMetadatas; // ivar: _rewrittenUtterancesMetadatas
@property (nonatomic) BOOL wasRewrittenUtteranceUsed; // ivar: _wasRewrittenUtteranceUsed


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)rewrittenUtterancesMetadataCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)rewrittenUtterancesMetadataAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addRewrittenUtterancesMetadata:(id)arg0 ;
-(void)clearRewrittenUtterancesMetadata;
-(void)deleteLinkId;
-(void)deleteRewrittenUtterancesMetadata;
-(void)deleteWasRewrittenUtteranceUsed;
-(void)writeTo:(id)arg0 ;


@end


#endif