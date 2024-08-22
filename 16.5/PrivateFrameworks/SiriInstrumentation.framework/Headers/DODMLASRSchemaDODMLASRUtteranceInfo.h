// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DODMLASRSCHEMADODMLASRUTTERANCEINFO_H
#define DODMLASRSCHEMADODMLASRUTTERANCEINFO_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRUtteranceInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger endTimeInNs; // ivar: _endTimeInNs
@property (nonatomic) BOOL hasEndTimeInNs;
@property (nonatomic) BOOL hasStartTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *results; // ivar: _results
@property (nonatomic) NSUInteger startTimeInNs; // ivar: _startTimeInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)resultsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addResults:(id)arg0 ;
-(void)clearResults;
-(void)deleteEndTimeInNs;
-(void)deleteResults;
-(void)deleteStartTimeInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif