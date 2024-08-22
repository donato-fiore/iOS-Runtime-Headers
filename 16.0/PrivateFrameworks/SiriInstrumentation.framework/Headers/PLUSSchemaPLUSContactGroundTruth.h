// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLUSSCHEMAPLUSCONTACTGROUNDTRUTH_H
#define PLUSSCHEMAPLUSCONTACTGROUNDTRUTH_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSContactGroundTruth : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int contactSuggestionUsedBySiri; // ivar: _contactSuggestionUsedBySiri
@property (retain, nonatomic) SISchemaUUID *groundTruthId; // ivar: _groundTruthId
@property (nonatomic) int groundTruthSource; // ivar: _groundTruthSource
@property (nonatomic) BOOL hasContactSuggestionUsedBySiri;
@property (nonatomic) BOOL hasGroundTruthId; // ivar: _hasGroundTruthId
@property (nonatomic) BOOL hasGroundTruthSource;
@property (nonatomic) BOOL hasHasSiriResolvedContactForEntity;
@property (nonatomic) BOOL hasSiriResolvedAndPlusInferredContactComparison;
@property (nonatomic) BOOL hasSiriResolvedContactForEntity; // ivar: _hasSiriResolvedContactForEntity
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int siriResolvedAndPlusInferredContactComparison; // ivar: _siriResolvedAndPlusInferredContactComparison


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteContactSuggestionUsedBySiri;
-(void)deleteGroundTruthId;
-(void)deleteGroundTruthSource;
-(void)deleteHasSiriResolvedContactForEntity;
-(void)deleteSiriResolvedAndPlusInferredContactComparison;
-(void)writeTo:(id)arg0 ;


@end


#endif