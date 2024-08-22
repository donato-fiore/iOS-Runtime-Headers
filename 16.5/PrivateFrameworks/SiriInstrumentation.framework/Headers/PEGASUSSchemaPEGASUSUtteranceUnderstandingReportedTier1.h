// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEGASUSSCHEMAPEGASUSUTTERANCEUNDERSTANDINGREPORTEDTIER1_H
#define PEGASUSSCHEMAPEGASUSUTTERANCEUNDERSTANDINGREPORTEDTIER1_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PEGASUSSchemaPEGASUSUtteranceUnderstandingReportedTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (copy, nonatomic) NSArray *topKGSAIntents; // ivar: _topKGSAIntents
@property (copy, nonatomic) NSArray *topU2Intents; // ivar: _topU2Intents


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)topKGSAIntentsAtIndex:(NSUInteger)arg0 ;
-(id)topU2IntentsAtIndex:(NSUInteger)arg0 ;
-(void)addTopKGSAIntents:(id)arg0 ;
-(void)addTopU2Intents:(id)arg0 ;
-(void)clearTopKGSAIntents;
-(void)clearTopU2Intents;
-(void)deleteLinkId;
-(void)deleteTopKGSAIntents;
-(void)deleteTopU2Intents;
-(void)writeTo:(id)arg0 ;


@end


#endif