// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSCHEMAFLOWCROSSINTENTRANKERRESPONSE_H
#define FLOWSCHEMAFLOWCROSSINTENTRANKERRESPONSE_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWCrossIntentRankerResponse : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *crossDomainRankerScoreKeepers; // ivar: _crossDomainRankerScoreKeepers
@property (copy, nonatomic) NSArray *crossIntentRankerScoreKeepers; // ivar: _crossIntentRankerScoreKeepers
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)crossDomainRankerScoreKeeperCount;
-(NSUInteger)crossIntentRankerScoreKeeperCount;
-(NSUInteger)hash;
-(id)crossDomainRankerScoreKeeperAtIndex:(NSUInteger)arg0 ;
-(id)crossIntentRankerScoreKeeperAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addCrossDomainRankerScoreKeeper:(id)arg0 ;
-(void)addCrossIntentRankerScoreKeeper:(id)arg0 ;
-(void)clearCrossDomainRankerScoreKeeper;
-(void)clearCrossIntentRankerScoreKeeper;
-(void)deleteCrossDomainRankerScoreKeeper;
-(void)deleteCrossIntentRankerScoreKeeper;
-(void)writeTo:(id)arg0 ;


@end


#endif