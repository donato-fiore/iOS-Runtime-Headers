// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMTOKENIZATIONENDED_H
#define NLXSCHEMACDMTOKENIZATIONENDED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMTokenizationEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *contextId; // ivar: _contextId
@property (nonatomic) BOOL hasContextId; // ivar: _hasContextId
@property (nonatomic) BOOL hasInputType;
@property (nonatomic) int inputType; // ivar: _inputType
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *tokenChains; // ivar: _tokenChains


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)tokenChainsAtIndex:(NSUInteger)arg0 ;
-(void)addTokenChains:(id)arg0 ;
-(void)clearTokenChains;
-(void)deleteContextId;
-(void)deleteInputType;
-(void)deleteTokenChains;
-(void)writeTo:(id)arg0 ;


@end


#endif