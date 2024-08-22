// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DODMLASRSCHEMADODMLASRTRANSCRIPTIONMETRICS_H
#define DODMLASRSCHEMADODMLASRTRANSCRIPTIONMETRICS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "DODMLASRSchemaDODMLASRTranscriptMetadata.h"

@interface DODMLASRSchemaDODMLASRTranscriptionMetrics : SISchemaInstrumentationMessage

@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *dev; // ivar: _dev
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *external; // ivar: _external
@property (nonatomic) BOOL hasDev; // ivar: _hasDev
@property (nonatomic) BOOL hasExternal; // ivar: _hasExternal
@property (nonatomic) BOOL hasTest; // ivar: _hasTest
@property (nonatomic) BOOL hasTrain; // ivar: _hasTrain
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *test; // ivar: _test
@property (retain, nonatomic) DODMLASRSchemaDODMLASRTranscriptMetadata *train; // ivar: _train


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif