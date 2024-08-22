// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GRRSCHEMAGRRSTRINGLIST_H
#define GRRSCHEMAGRRSTRINGLIST_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface GRRSchemaGRRStringList : SISchemaInstrumentationMessage

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *stringNames; // ivar: _stringNames


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)stringNameCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)stringNameAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addStringName:(id)arg0 ;
-(void)clearStringName;
-(void)deleteStringName;
-(void)writeTo:(id)arg0 ;


@end


#endif