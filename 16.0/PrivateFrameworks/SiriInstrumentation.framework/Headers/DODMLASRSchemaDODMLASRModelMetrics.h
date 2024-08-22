// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DODMLASRSCHEMADODMLASRMODELMETRICS_H
#define DODMLASRSCHEMADODMLASRMODELMETRICS_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRModelMetrics : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *configName; // ivar: _configName
@property (nonatomic) NSUInteger conversionDurationInMs; // ivar: _conversionDurationInMs
@property (nonatomic) BOOL hasConfigName; // ivar: _hasConfigName
@property (nonatomic) BOOL hasConversionDurationInMs;
@property (nonatomic) BOOL hasModelTrainingStatusCode;
@property (nonatomic) BOOL hasNgramOrder;
@property (nonatomic) BOOL hasNumFiniteStateTransducerArcs;
@property (nonatomic) BOOL hasNumFiniteStateTransducerStates;
@property (nonatomic) BOOL hasOptimizationDurationInMs;
@property (nonatomic) BOOL hasResidualAdaptationWeight;
@property (nonatomic) BOOL hasTotalDurationInMs;
@property (nonatomic) BOOL hasTrainingDurationInMs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int modelTrainingStatusCode; // ivar: _modelTrainingStatusCode
@property (nonatomic) unsigned int ngramOrder; // ivar: _ngramOrder
@property (nonatomic) unsigned int numFiniteStateTransducerArcs; // ivar: _numFiniteStateTransducerArcs
@property (nonatomic) unsigned int numFiniteStateTransducerStates; // ivar: _numFiniteStateTransducerStates
@property (nonatomic) NSUInteger optimizationDurationInMs; // ivar: _optimizationDurationInMs
@property (nonatomic) float residualAdaptationWeight; // ivar: _residualAdaptationWeight
@property (nonatomic) NSUInteger totalDurationInMs; // ivar: _totalDurationInMs
@property (nonatomic) NSUInteger trainingDurationInMs; // ivar: _trainingDurationInMs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConfigName;
-(void)deleteConversionDurationInMs;
-(void)deleteModelTrainingStatusCode;
-(void)deleteNgramOrder;
-(void)deleteNumFiniteStateTransducerArcs;
-(void)deleteNumFiniteStateTransducerStates;
-(void)deleteOptimizationDurationInMs;
-(void)deleteResidualAdaptationWeight;
-(void)deleteTotalDurationInMs;
-(void)deleteTrainingDurationInMs;
-(void)writeTo:(id)arg0 ;


@end


#endif