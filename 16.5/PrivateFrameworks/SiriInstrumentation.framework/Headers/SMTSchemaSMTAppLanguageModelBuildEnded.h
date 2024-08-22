// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SMTSCHEMASMTAPPLANGUAGEMODELBUILDENDED_H
#define SMTSCHEMASMTAPPLANGUAGEMODELBUILDENDED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SMTSchemaSMTAppLanguageModelBuildEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *artifactFilepath; // ivar: _artifactFilepath
@property (copy, nonatomic) NSString *assetName; // ivar: _assetName
@property (nonatomic) BOOL hasArtifactFilepath; // ivar: _hasArtifactFilepath
@property (nonatomic) BOOL hasAssetName; // ivar: _hasAssetName
@property (nonatomic) BOOL hasLanguageModelFileSizeInBytes;
@property (nonatomic) BOOL hasNumCustomPronunciations;
@property (nonatomic) BOOL hasNumOutOfVocabulary;
@property (nonatomic) BOOL hasTrainingDataSizeInTokens;
@property (nonatomic) BOOL hasTrainingTimeInNs;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger languageModelFileSizeInBytes; // ivar: _languageModelFileSizeInBytes
@property (nonatomic) NSUInteger numCustomPronunciations; // ivar: _numCustomPronunciations
@property (nonatomic) NSUInteger numOutOfVocabulary; // ivar: _numOutOfVocabulary
@property (nonatomic) NSUInteger trainingDataSizeInTokens; // ivar: _trainingDataSizeInTokens
@property (nonatomic) NSUInteger trainingTimeInNs; // ivar: _trainingTimeInNs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteArtifactFilepath;
-(void)deleteAssetName;
-(void)deleteLanguageModelFileSizeInBytes;
-(void)deleteNumCustomPronunciations;
-(void)deleteNumOutOfVocabulary;
-(void)deleteTrainingDataSizeInTokens;
-(void)deleteTrainingTimeInNs;
-(void)writeTo:(id)arg0 ;


@end


#endif