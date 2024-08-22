// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODMSIRISCHEMAODMSIRICOUNTSREPORTED_H
#define ODMSIRISCHEMAODMSIRICOUNTSREPORTED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "ODMSiriSchemaODMSiriAggregationInterval.h"

@interface ODMSiriSchemaODMSiriCountsReported : SISchemaInstrumentationMessage

@property (retain, nonatomic) ODMSiriSchemaODMSiriAggregationInterval *aggregationInterval; // ivar: _aggregationInterval
@property (nonatomic) BOOL hasAggregationInterval; // ivar: _hasAggregationInterval
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *siriCounts; // ivar: _siriCounts


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)siriCountsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addSiriCounts:(id)arg0 ;
-(void)clearSiriCounts;
-(void)deleteAggregationInterval;
-(void)deleteSiriCounts;
-(void)writeTo:(id)arg0 ;


@end


#endif