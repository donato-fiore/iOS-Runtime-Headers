// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DODMLASRSCHEMADODMLASRTRANSCRIPTMETADATA_H
#define DODMLASRSCHEMADODMLASRTRANSCRIPTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface DODMLASRSchemaDODMLASRTranscriptMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasNumDocumentsAccepted;
@property (nonatomic) BOOL hasNumDocumentsDictated;
@property (nonatomic) BOOL hasNumDocumentsRejected;
@property (nonatomic) BOOL hasNumDocumentsTyped;
@property (nonatomic) BOOL hasNumSentencesAccepted;
@property (nonatomic) BOOL hasNumSentencesMungeChanged;
@property (nonatomic) BOOL hasNumSentencesMungeRejected;
@property (nonatomic) BOOL hasNumSentencesRejected;
@property (nonatomic) BOOL hasNumTokensAccepted;
@property (nonatomic) BOOL hasNumTokensDictated;
@property (nonatomic) BOOL hasNumTokensOutOfVocabularyAccepted;
@property (nonatomic) BOOL hasNumTokensTyped;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int numDocumentsAccepted; // ivar: _numDocumentsAccepted
@property (nonatomic) unsigned int numDocumentsDictated; // ivar: _numDocumentsDictated
@property (nonatomic) unsigned int numDocumentsRejected; // ivar: _numDocumentsRejected
@property (nonatomic) unsigned int numDocumentsTyped; // ivar: _numDocumentsTyped
@property (nonatomic) unsigned int numSentencesAccepted; // ivar: _numSentencesAccepted
@property (nonatomic) unsigned int numSentencesMungeChanged; // ivar: _numSentencesMungeChanged
@property (nonatomic) unsigned int numSentencesMungeRejected; // ivar: _numSentencesMungeRejected
@property (nonatomic) unsigned int numSentencesRejected; // ivar: _numSentencesRejected
@property (nonatomic) unsigned int numTokensAccepted; // ivar: _numTokensAccepted
@property (nonatomic) unsigned int numTokensDictated; // ivar: _numTokensDictated
@property (nonatomic) unsigned int numTokensOutOfVocabularyAccepted; // ivar: _numTokensOutOfVocabularyAccepted
@property (nonatomic) unsigned int numTokensTyped; // ivar: _numTokensTyped


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif