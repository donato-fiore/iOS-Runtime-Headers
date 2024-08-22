// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVSCHEMACNVACTIONCANDIDATE_H
#define CNVSCHEMACNVACTIONCANDIDATE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "CNVSchemaCNVLinkMetadata.h"

@interface CNVSchemaCNVActionCandidate : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *actionCandidateId; // ivar: _actionCandidateId
@property (nonatomic) unsigned int affinityScore; // ivar: _affinityScore
@property (nonatomic) BOOL hasActionCandidateId; // ivar: _hasActionCandidateId
@property (nonatomic) BOOL hasAffinityScore;
@property (nonatomic) BOOL hasLinkMetadata; // ivar: _hasLinkMetadata
@property (nonatomic) BOOL hasParseHypothesisId; // ivar: _hasParseHypothesisId
@property (nonatomic) BOOL hasPlugin;
@property (nonatomic) BOOL hasPommesId; // ivar: _hasPommesId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) CNVSchemaCNVLinkMetadata *linkMetadata; // ivar: _linkMetadata
@property (retain, nonatomic) SISchemaUUID *parseHypothesisId; // ivar: _parseHypothesisId
@property (nonatomic) int plugin; // ivar: _plugin
@property (retain, nonatomic) SISchemaUUID *pommesId; // ivar: _pommesId
@property (readonly, nonatomic) NSUInteger whichParseid; // ivar: _whichParseid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteActionCandidateId;
-(void)deleteAffinityScore;
-(void)deleteLinkMetadata;
-(void)deleteParseHypothesisId;
-(void)deletePlugin;
-(void)deletePommesId;
-(void)writeTo:(id)arg0 ;


@end


#endif