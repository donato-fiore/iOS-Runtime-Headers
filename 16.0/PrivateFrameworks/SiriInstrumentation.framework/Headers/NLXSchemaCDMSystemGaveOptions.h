// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLXSCHEMACDMSYSTEMGAVEOPTIONS_H
#define NLXSCHEMACDMSYSTEMGAVEOPTIONS_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMSystemGaveOptions : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *choices; // ivar: _choices
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)choicesAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addChoices:(id)arg0 ;
-(void)clearChoices;
-(void)deleteChoices;
-(void)writeTo:(id)arg0 ;


@end


#endif