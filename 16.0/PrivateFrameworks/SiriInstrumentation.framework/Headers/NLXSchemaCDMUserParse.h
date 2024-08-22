// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMACDMUSERPARSE_H
#define NLXSCHEMACDMUSERPARSE_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "NLXSchemaCDMParser.h"
#import "NLXSchemaCDMRepetitionResult.h"

@interface NLXSchemaCDMUserParse : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) CGFloat comparableProbability; // ivar: _comparableProbability
@property (nonatomic) BOOL hasComparableProbability;
@property (nonatomic) BOOL hasId; // ivar: _hasId
@property (nonatomic) BOOL hasParser; // ivar: _hasParser
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) BOOL hasRepetitionResult; // ivar: _hasRepetitionResult
@property (retain, nonatomic) SISchemaUUID *id; // ivar: _id
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NLXSchemaCDMParser *parser; // ivar: _parser
@property (nonatomic) CGFloat probability; // ivar: _probability
@property (retain, nonatomic) NLXSchemaCDMRepetitionResult *repetitionResult; // ivar: _repetitionResult
@property (copy, nonatomic) NSArray *userDialogActs; // ivar: _userDialogActs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)userDialogActsAtIndex:(NSUInteger)arg0 ;
-(void)addUserDialogActs:(id)arg0 ;
-(void)clearUserDialogActs;
-(void)deleteComparableProbability;
-(void)deleteId;
-(void)deleteParser;
-(void)deleteProbability;
-(void)deleteRepetitionResult;
-(void)deleteUserDialogActs;
-(void)writeTo:(id)arg0 ;


@end


#endif