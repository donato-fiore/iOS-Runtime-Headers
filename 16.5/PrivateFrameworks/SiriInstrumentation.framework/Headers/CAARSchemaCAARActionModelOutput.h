// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAARSCHEMACAARACTIONMODELOUTPUT_H
#define CAARSCHEMACAARACTIONMODELOUTPUT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface CAARSchemaCAARActionModelOutput : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *actionCandidateId; // ivar: _actionCandidateId
@property (nonatomic) BOOL hasActionCandidateId; // ivar: _hasActionCandidateId
@property (nonatomic) BOOL hasModelScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float modelScore; // ivar: _modelScore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteActionCandidateId;
-(void)deleteModelScore;
-(void)writeTo:(id)arg0 ;


@end


#endif