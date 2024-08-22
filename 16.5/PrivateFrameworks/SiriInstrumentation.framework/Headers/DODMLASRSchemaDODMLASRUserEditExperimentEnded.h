// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DODMLASRSCHEMADODMLASRUSEREDITEXPERIMENTENDED_H
#define DODMLASRSCHEMADODMLASRUSEREDITEXPERIMENTENDED_H

@class NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface DODMLASRSchemaDODMLASRUserEditExperimentEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasNumAudioFilesAvailable;
@property (nonatomic) BOOL hasNumAudioFilesSelected;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (nonatomic) unsigned int numAudioFilesAvailable; // ivar: _numAudioFilesAvailable
@property (nonatomic) unsigned int numAudioFilesSelected; // ivar: _numAudioFilesSelected
@property (copy, nonatomic) NSArray *redecodingResults; // ivar: _redecodingResults


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)redecodingResultsAtIndex:(NSUInteger)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addRedecodingResults:(id)arg0 ;
-(void)clearRedecodingResults;
-(void)deleteErrorCode;
-(void)deleteLinkId;
-(void)deleteNumAudioFilesAvailable;
-(void)deleteNumAudioFilesSelected;
-(void)deleteRedecodingResults;
-(void)writeTo:(id)arg0 ;


@end


#endif