// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSCHEMAMTLOCALEPAIRRESOLVED_H
#define MTSCHEMAMTLOCALEPAIRRESOLVED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MTSchemaMTLocalePair.h"

@interface MTSchemaMTLocalePairResolved : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasLocalePair; // ivar: _hasLocalePair
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) MTSchemaMTLocalePair *localePair; // ivar: _localePair


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteLocalePair;
-(void)writeTo:(id)arg0 ;


@end


#endif