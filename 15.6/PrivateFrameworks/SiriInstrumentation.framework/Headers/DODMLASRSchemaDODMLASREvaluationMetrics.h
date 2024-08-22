// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DODMLASRSCHEMADODMLASREVALUATIONMETRICS_H
#define DODMLASRSCHEMADODMLASREVALUATIONMETRICS_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASREvaluationMetrics : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float bestWeight; // ivar: _bestWeight
@property (copy, nonatomic) NSArray *devs; // ivar: _devs
@property (copy, nonatomic) NSArray *externals; // ivar: _externals
@property (nonatomic) BOOL hasBestWeight;
@property (nonatomic) BOOL hasTotalDurationInMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *tests; // ivar: _tests
@property (nonatomic) NSUInteger totalDurationInMs; // ivar: _totalDurationInMs
@property (copy, nonatomic) NSArray *trains; // ivar: _trains


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)devCount;
-(NSUInteger)externalCount;
-(NSUInteger)hash;
-(NSUInteger)testCount;
-(NSUInteger)trainCount;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)devAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)externalAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(id)testAtIndex:(NSUInteger)arg0 ;
-(id)trainAtIndex:(NSUInteger)arg0 ;
-(void)addDev:(id)arg0 ;
-(void)addExternal:(id)arg0 ;
-(void)addTest:(id)arg0 ;
-(void)addTrain:(id)arg0 ;
-(void)clearDev;
-(void)clearExternal;
-(void)clearTest;
-(void)clearTrain;
-(void)deleteBestWeight;
-(void)deleteDev;
-(void)deleteExternal;
-(void)deleteTest;
-(void)deleteTotalDurationInMs;
-(void)deleteTrain;
-(void)writeTo:(id)arg0 ;


@end


#endif