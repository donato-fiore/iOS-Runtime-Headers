// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DODMLASRSCHEMADODMLASRUSEREDITEXPERIMENTREDECODINGRESULTS_H
#define DODMLASRSCHEMADODMLASRUSEREDITEXPERIMENTREDECODINGRESULTS_H

@class NSArray, NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface DODMLASRSchemaDODMLASRUserEditExperimentRedecodingResults : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *asrId; // ivar: _asrId
@property (copy, nonatomic) NSArray *confusionPairs; // ivar: _confusionPairs
@property (copy, nonatomic) NSString *datapackVersion; // ivar: _datapackVersion
@property (nonatomic) int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasAsrId; // ivar: _hasAsrId
@property (nonatomic) BOOL hasDatapackVersion; // ivar: _hasDatapackVersion
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId


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
-(void)deleteAsrId;
-(void)deleteConfusionPairs;
-(void)deleteDatapackVersion;
-(void)deleteErrorCode;
-(void)deleteLinkId;
-(void)writeTo:(id)arg0 ;


@end


#endif