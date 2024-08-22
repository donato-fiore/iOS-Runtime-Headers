// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODMSIRISCHEMAODMSIRIAGGREGATIONINTERVAL_H
#define ODMSIRISCHEMAODMSIRIAGGREGATIONINTERVAL_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ODMSiriSchemaODMSiriAggregationInterval : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int aggregationIntervalInDays; // ivar: _aggregationIntervalInDays
@property (nonatomic) CGFloat aggregationIntervalStartTimestampInSecondsSince2001; // ivar: _aggregationIntervalStartTimestampInSecondsSince2001
@property (nonatomic) BOOL hasAggregationIntervalInDays;
@property (nonatomic) BOOL hasAggregationIntervalStartTimestampInSecondsSince2001;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAggregationIntervalInDays;
-(void)deleteAggregationIntervalStartTimestampInSecondsSince2001;
-(void)writeTo:(id)arg0 ;


@end


#endif