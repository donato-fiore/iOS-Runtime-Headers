// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCHEMADICTATIONTRANSCRIPTIONMETADATA_H
#define SISCHEMADICTATIONTRANSCRIPTIONMETADATA_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaDictationAlternativesPresent.h"

@interface SISchemaDictationTranscriptionMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaDictationAlternativesPresent *dictationAlternativesPresent; // ivar: _dictationAlternativesPresent
@property (nonatomic) int dictationModel; // ivar: _dictationModel
@property (copy, nonatomic) NSString *dictationModelVersion; // ivar: _dictationModelVersion
@property (nonatomic) BOOL hasDictationAlternativesPresent; // ivar: _hasDictationAlternativesPresent
@property (nonatomic) BOOL hasDictationModel;
@property (nonatomic) BOOL hasDictationModelVersion; // ivar: _hasDictationModelVersion
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDictationAlternativesPresent;
-(void)deleteDictationModel;
-(void)deleteDictationModelVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif