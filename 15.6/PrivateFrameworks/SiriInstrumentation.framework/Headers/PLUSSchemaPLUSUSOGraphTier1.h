// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLUSSCHEMAPLUSUSOGRAPHTIER1_H
#define PLUSSCHEMAPLUSUSOGRAPHTIER1_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "USOSchemaUSOGraphTier1.h"

@interface PLUSSchemaPLUSUSOGraphTier1 : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasUsoGraphTier1; // ivar: _hasUsoGraphTier1
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) USOSchemaUSOGraphTier1 *usoGraphTier1; // ivar: _usoGraphTier1


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteUsoGraphTier1;
-(void)writeTo:(id)arg0 ;


@end


#endif