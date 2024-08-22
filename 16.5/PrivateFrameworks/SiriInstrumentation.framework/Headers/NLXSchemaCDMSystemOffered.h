// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMSYSTEMOFFERED_H
#define NLXSCHEMACDMSYSTEMOFFERED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NLXSchemaCDMUserDialogAct.h"

@interface NLXSchemaCDMSystemOffered : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasOfferedAct; // ivar: _hasOfferedAct
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NLXSchemaCDMUserDialogAct *offeredAct; // ivar: _offeredAct


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteOfferedAct;
-(void)writeTo:(id)arg0 ;


@end


#endif