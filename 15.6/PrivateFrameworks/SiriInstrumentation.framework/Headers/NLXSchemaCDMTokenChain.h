// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMTOKENCHAIN_H
#define NLXSCHEMACDMTOKENCHAIN_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMTokenChain : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *asrHypothesisId; // ivar: _asrHypothesisId
@property (nonatomic) BOOL hasAsrHypothesisId; // ivar: _hasAsrHypothesisId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *tokens; // ivar: _tokens


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)tokensAtIndex:(NSUInteger)arg0 ;
-(void)addTokens:(id)arg0 ;
-(void)clearTokens;
-(void)deleteAsrHypothesisId;
-(void)deleteTokens;
-(void)writeTo:(id)arg0 ;


@end


#endif