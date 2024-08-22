// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (nonatomic) int experimentStatusCode; // ivar: _experimentStatusCode
@property (nonatomic) BOOL hasDatapackVersion; // ivar: _hasDatapackVersion
@property (nonatomic) BOOL hasExperimentStatusCode;
@property (nonatomic) BOOL hasNumAudioFilesAvailable;
@property (nonatomic) BOOL hasNumAudioFilesSelected;
@property (nonatomic) BOOL hasPersonalizedLanguageModelMetrics; // ivar: _hasPersonalizedLanguageModelMetrics
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numAudioFilesAvailable; // ivar: _numAudioFilesAvailable
@property (nonatomic) unsigned int numAudioFilesSelected; // ivar: _numAudioFilesSelected
@property (retain, nonatomic) DODMLASRSchemaDODMLASRPersonalizedLanguageModelMetrics *personalizedLanguageModelMetrics; // ivar: _personalizedLanguageModelMetrics


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)audioFileResultsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addAudioFileResults:(id)arg0 ;
-(void)clearAudioFileResults;
-(void)writeTo:(id)arg0 ;


@end


#endif