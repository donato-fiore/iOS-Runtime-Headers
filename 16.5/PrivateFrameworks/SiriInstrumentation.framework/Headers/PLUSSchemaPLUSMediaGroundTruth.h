// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUSSCHEMAPLUSMEDIAGROUNDTRUTH_H
#define PLUSSCHEMAPLUSMEDIAGROUNDTRUTH_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSMediaGroundTruth : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *groundTruthId; // ivar: _groundTruthId
@property (nonatomic) int groundTruthSource; // ivar: _groundTruthSource
@property (nonatomic) BOOL hasGroundTruthId; // ivar: _hasGroundTruthId
@property (nonatomic) BOOL hasGroundTruthSource;
@property (nonatomic) BOOL hasInferredMediaEntityAdamId; // ivar: _hasInferredMediaEntityAdamId
@property (nonatomic) BOOL hasSelectedMediaEntityAdamId; // ivar: _hasSelectedMediaEntityAdamId
@property (copy, nonatomic) NSString *inferredMediaEntityAdamId; // ivar: _inferredMediaEntityAdamId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *selectedMediaEntityAdamId; // ivar: _selectedMediaEntityAdamId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteGroundTruthId;
-(void)deleteGroundTruthSource;
-(void)deleteInferredMediaEntityAdamId;
-(void)deleteSelectedMediaEntityAdamId;
-(void)writeTo:(id)arg0 ;


@end


#endif