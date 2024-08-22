// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DODMLASRSCHEMADODMLASRUSEREDITEXPERIMENTREDECODINGRESULTS_H
#define DODMLASRSCHEMADODMLASRUSEREDITEXPERIMENTREDECODINGRESULTS_H

@class NSArray, NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRUserEditExperimentRedecodingResults : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *confusionPairs; // ivar: _confusionPairs
@property (copy, nonatomic) NSString *datapackVersion; // ivar: _datapackVersion
@property (nonatomic) BOOL hasDatapackVersion; // ivar: _hasDatapackVersion
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)confusionPairsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addConfusionPairs:(id)arg0 ;
-(void)clearConfusionPairs;
-(void)deleteConfusionPairs;
-(void)deleteDatapackVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif