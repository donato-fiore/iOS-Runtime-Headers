// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXPSIRISCHEMAEXPALLOCATIONCHANGELOGSNAPSHOT_H
#define EXPSIRISCHEMAEXPALLOCATIONCHANGELOGSNAPSHOT_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface EXPSiriSchemaEXPAllocationChangelogSnapshot : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations; // ivar: _allocations
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)allocationsAtIndex:(NSUInteger)arg0 ;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAllocations:(id)arg0 ;
-(void)clearAllocations;
-(void)deleteAllocations;
-(void)writeTo:(id)arg0 ;


@end


#endif