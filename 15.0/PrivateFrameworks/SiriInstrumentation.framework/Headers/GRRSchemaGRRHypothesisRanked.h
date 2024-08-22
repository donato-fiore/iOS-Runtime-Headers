// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GRRSCHEMAGRRHYPOTHESISRANKED_H
#define GRRSCHEMAGRRHYPOTHESISRANKED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface GRRSchemaGRRHypothesisRanked : SISchemaInstrumentationMessage

@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *rankings; // ivar: _rankings


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)rankingsAtIndex:(NSUInteger)arg0 ;
-(void)addRankings:(id)arg0 ;
-(void)clearRankings;
-(void)writeTo:(id)arg0 ;


@end


#endif