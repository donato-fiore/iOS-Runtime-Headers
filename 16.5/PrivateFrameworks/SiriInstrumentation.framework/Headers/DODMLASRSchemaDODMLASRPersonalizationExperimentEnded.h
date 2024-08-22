// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DODMLASRSCHEMADODMLASRPERSONALIZATIONEXPERIMENTENDED_H
#define DODMLASRSCHEMADODMLASRPERSONALIZATIONEXPERIMENTENDED_H

@class NSArray, NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics.h"

@interface DODMLASRSchemaDODMLASRPersonalizationExperimentEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *audioFileResults; // ivar: _audioFileResults
@property (copy, nonatomic) NSString *datapackVersion; // ivar: _datapackVersion
@property (nonatomic) int deviceThermalState; // ivar: _deviceThermalState
@property (nonatomic) int experimentStatusCode; // ivar: _experimentStatusCode
@property (nonatomic) BOOL hasDatapackVersion; // ivar: _hasDatapackVersion
@property (nonatomic) BOOL hasDeviceThermalState;
@property (nonatomic) BOOL hasExperimentStatusCode;
@property (nonatomic) BOOL hasNumAudioFilesAvailable;
@property (nonatomic) BOOL hasNumAudioFilesSelected;
@property (nonatomic) BOOL hasPersonalizedLanguageModelMetrics; // ivar: _hasPersonalizedLanguageModelMetrics
@property (nonatomic) BOOL hasTextFetchDurationInNs;
@property (nonatomic) BOOL hasTextProcessingDurationInNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numAudioFilesAvailable; // ivar: _numAudioFilesAvailable
@property (nonatomic) unsigned int numAudioFilesSelected; // ivar: _numAudioFilesSelected
@property (retain, nonatomic) DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics *personalizedLanguageModelMetrics; // ivar: _personalizedLanguageModelMetrics
@property (nonatomic) NSUInteger textFetchDurationInNs; // ivar: _textFetchDurationInNs
@property (nonatomic) NSUInteger textProcessingDurationInNs; // ivar: _textProcessingDurationInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)audioFileResultsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAudioFileResults:(id)arg0 ;
-(void)clearAudioFileResults;
-(void)deleteAudioFileResults;
-(void)deleteDatapackVersion;
-(void)deleteDeviceThermalState;
-(void)deleteExperimentStatusCode;
-(void)deleteNumAudioFilesAvailable;
-(void)deleteNumAudioFilesSelected;
-(void)deletePersonalizedLanguageModelMetrics;
-(void)deleteTextFetchDurationInNs;
-(void)deleteTextProcessingDurationInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif