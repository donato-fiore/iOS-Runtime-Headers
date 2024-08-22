// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASRSCHEMAASRSTARTED_H
#define ASRSCHEMAASRSTARTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface ASRSchemaASRStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *datapackVersion; // ivar: _datapackVersion
@property (retain, nonatomic) SISchemaUUID *dictationUiInteractionId; // ivar: _dictationUiInteractionId
@property (nonatomic) BOOL geoLanguageModelLoaded; // ivar: _geoLanguageModelLoaded
@property (copy, nonatomic) NSString *geoLanguageModelRegion; // ivar: _geoLanguageModelRegion
@property (copy, nonatomic) NSString *hammerVersion; // ivar: _hammerVersion
@property (nonatomic) BOOL hasDatapackVersion; // ivar: _hasDatapackVersion
@property (nonatomic) BOOL hasDictationUiInteractionId; // ivar: _hasDictationUiInteractionId
@property (nonatomic) BOOL hasGeoLanguageModelLoaded;
@property (nonatomic) BOOL hasGeoLanguageModelRegion; // ivar: _hasGeoLanguageModelRegion
@property (nonatomic) BOOL hasHammerVersion; // ivar: _hasHammerVersion
@property (nonatomic) BOOL hasIsHighQualityAsset;
@property (nonatomic) BOOL hasModelLocale;
@property (nonatomic) BOOL hasPortraitExperimentVariantName; // ivar: _hasPortraitExperimentVariantName
@property (nonatomic) BOOL hasSpeechProfileAgeInNs;
@property (nonatomic) BOOL hasTask;
@property (nonatomic) BOOL isHighQualityAsset; // ivar: _isHighQualityAsset
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int modelLocale; // ivar: _modelLocale
@property (copy, nonatomic) NSString *portraitExperimentVariantName; // ivar: _portraitExperimentVariantName
@property (nonatomic) NSUInteger speechProfileAgeInNs; // ivar: _speechProfileAgeInNs
@property (nonatomic) int task; // ivar: _task


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDatapackVersion;
-(void)deleteDictationUiInteractionId;
-(void)deleteGeoLanguageModelLoaded;
-(void)deleteGeoLanguageModelRegion;
-(void)deleteHammerVersion;
-(void)deleteIsHighQualityAsset;
-(void)deleteModelLocale;
-(void)deletePortraitExperimentVariantName;
-(void)deleteSpeechProfileAgeInNs;
-(void)deleteTask;
-(void)writeTo:(id)arg0 ;


@end


#endif