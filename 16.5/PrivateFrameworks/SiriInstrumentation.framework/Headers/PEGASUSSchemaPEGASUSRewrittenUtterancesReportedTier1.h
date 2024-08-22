// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEGASUSSCHEMAPEGASUSREWRITTENUTTERANCESREPORTEDTIER1_H
#define PEGASUSSCHEMAPEGASUSREWRITTENUTTERANCESREPORTEDTIER1_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PEGASUSSchemaPEGASUSRewrittenUtterancesReportedTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *rewrittenUtterances; // ivar: _rewrittenUtterances


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)rewrittenUtterancesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addRewrittenUtterances:(id)arg0 ;
-(void)clearRewrittenUtterances;
-(void)deleteLinkId;
-(void)deleteRewrittenUtterances;
-(void)writeTo:(id)arg0 ;


@end


#endif