// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUTSCHEMATESTASSOCIATEDSCHEMAIDENTIFIER_H
#define SUTSCHEMATESTASSOCIATEDSCHEMAIDENTIFIER_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SUTSchemaTestGeneratedRequestId.h"
#import "SUTSchemaTestGeneratedTurnID.h"

@interface SUTSchemaTestAssociatedSchemaIdentifier : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasRequestId; // ivar: _hasRequestId
@property (nonatomic) BOOL hasTurnID; // ivar: _hasTurnID
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SUTSchemaTestGeneratedRequestId *requestId; // ivar: _requestId
@property (retain, nonatomic) SUTSchemaTestGeneratedTurnID *turnID; // ivar: _turnID
@property (readonly, nonatomic) NSUInteger whichIdentifier_Type; // ivar: _whichIdentifier_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteRequestId;
-(void)deleteTurnID;
-(void)writeTo:(id)arg0 ;


@end


#endif