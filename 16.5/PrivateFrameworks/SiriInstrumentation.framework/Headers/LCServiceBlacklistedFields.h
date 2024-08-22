// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCSERVICEBLACKLISTEDFIELDS_H
#define LCSERVICEBLACKLISTEDFIELDS_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface LCServiceBlacklistedFields : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *blackListedFields; // ivar: _blackListedFields
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)blackListedFieldsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addBlackListedFields:(id)arg0 ;
-(void)clearBlackListedFields;
-(void)deleteBlackListedFields;
-(void)writeTo:(id)arg0 ;


@end


#endif