// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DODMLASRSCHEMADODMLASRUSEREDITEXPERIMENTENDEDTIER1_H
#define DODMLASRSCHEMADODMLASRUSEREDITEXPERIMENTENDEDTIER1_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface DODMLASRSchemaDODMLASRUserEditExperimentEndedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *confusionPairs; // ivar: _confusionPairs
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
-(void)deleteConfusionPairs;
-(void)deleteLinkId;
-(void)writeTo:(id)arg0 ;


@end


#endif