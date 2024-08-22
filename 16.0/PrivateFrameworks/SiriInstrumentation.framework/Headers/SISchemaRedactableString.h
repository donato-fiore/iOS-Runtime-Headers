// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAREDACTABLESTRING_H
#define SISCHEMAREDACTABLESTRING_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaRedactableString : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasRedactionState; // ivar: _hasRedactionState
@property (nonatomic) BOOL hasValue; // ivar: _hasValue
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int redactionState; // ivar: _redactionState
@property (copy, nonatomic) NSString *value; // ivar: _value
@property (readonly, nonatomic) NSUInteger which_String; // ivar: _which_String


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteRedactionState;
-(void)deleteValue;
-(void)writeTo:(id)arg0 ;


@end


#endif