// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DODMLASRSCHEMADODMLASRDECODINGMETRICS_H
#define DODMLASRSCHEMADODMLASRDECODINGMETRICS_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRDecodingMetrics : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float averageActiveTokensPerFrame; // ivar: _averageActiveTokensPerFrame
@property (nonatomic) BOOL hasAverageActiveTokensPerFrame;
@property (nonatomic) BOOL hasJitLanguageModelEnrollmentDurationInMs;
@property (nonatomic) BOOL hasJitQueryDurationInMs;
@property (nonatomic) BOOL hasWallRealTimeFactor;
@property (nonatomic) NSUInteger jitLanguageModelEnrollmentDurationInMs; // ivar: _jitLanguageModelEnrollmentDurationInMs
@property (nonatomic) NSUInteger jitQueryDurationInMs; // ivar: _jitQueryDurationInMs
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSArray *languageModelInterpolationWeights; // ivar: _languageModelInterpolationWeights
@property (nonatomic) float wallRealTimeFactor; // ivar: _wallRealTimeFactor


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)languageModelInterpolationWeightsAtIndex:(NSUInteger)arg0 ;
-(void)addLanguageModelInterpolationWeights:(id)arg0 ;
-(void)clearLanguageModelInterpolationWeights;
-(void)writeTo:(id)arg0 ;


@end


#endif