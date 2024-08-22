// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAUUID_H
#define SISCHEMAUUID_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaUUID : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasValue; // ivar: _hasValue
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithBytesAsData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithNSUUID:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)toNSUUID;
-(void)deleteValue;
-(void)willProduceDictionaryRepresentation:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif