// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMTURNCONTEXT_H
#define NLXSCHEMACDMTURNCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaNLXLegacyNLContext.h"
#import "NLXSchemaCDMNLContext.h"

@interface NLXSchemaCDMTurnContext : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLegacyNlContext; // ivar: _hasLegacyNlContext
@property (nonatomic) BOOL hasNlContext; // ivar: _hasNlContext
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NLXSchemaNLXLegacyNLContext *legacyNlContext; // ivar: _legacyNlContext
@property (retain, nonatomic) NLXSchemaCDMNLContext *nlContext; // ivar: _nlContext
@property (readonly, nonatomic) NSUInteger whichTurncontexttype; // ivar: _whichTurncontexttype


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteLegacyNlContext;
-(void)deleteNlContext;
-(void)writeTo:(id)arg0 ;


@end


#endif