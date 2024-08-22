// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLOWSCHEMAFLOWPLATFORMCONTEXT_H
#define FLOWSCHEMAFLOWPLATFORMCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "FLOWSchemaFLOWEntityContext.h"

@interface FLOWSchemaFLOWPlatformContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) FLOWSchemaFLOWEntityContext *entityContext; // ivar: _entityContext
@property (retain, nonatomic) FLOWSchemaFLOWEntityContext *entityContextValue; // ivar: _entityContextValue
@property (nonatomic) BOOL hasEntityContext; // ivar: _hasEntityContext
@property (nonatomic) BOOL hasEntityContextValue; // ivar: _hasEntityContextValue
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSUInteger whichPlatformcontext; // ivar: _whichPlatformcontext


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEntityContext;
-(void)deleteEntityContextValue;
-(void)writeTo:(id)arg0 ;


@end


#endif