// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USOSCHEMAUSOLABEL_H
#define USOSCHEMAUSOLABEL_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface USOSchemaUSOLabel : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasValue; // ivar: _hasValue
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteValue;
-(void)writeTo:(id)arg0 ;


@end


#endif