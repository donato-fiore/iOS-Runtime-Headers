// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETSCHEMAPET1KEY_H
#define PETSCHEMAPET1KEY_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface PETSchemaPET1Key : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasKey; // ivar: _hasKey
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *key; // ivar: _key


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteKey;
-(void)writeTo:(id)arg0 ;


@end


#endif