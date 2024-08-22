// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLXSCHEMACDMREQUESTENDED_H
#define NLXSCHEMACDMREQUESTENDED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface NLXSchemaCDMRequestEnded : SISchemaInstrumentationMessage

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *parses; // ivar: _parses


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)parsesAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addParses:(id)arg0 ;
-(void)clearParses;
-(void)deleteParses;
-(void)writeTo:(id)arg0 ;


@end


#endif