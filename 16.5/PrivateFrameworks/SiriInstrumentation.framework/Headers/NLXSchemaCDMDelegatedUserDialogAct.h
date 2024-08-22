// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLXSCHEMACDMDELEGATEDUSERDIALOGACT_H
#define NLXSCHEMACDMDELEGATEDUSERDIALOGACT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface NLXSchemaCDMDelegatedUserDialogAct : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int asrHypothesisIndex; // ivar: _asrHypothesisIndex
@property (nonatomic) unsigned int contextMatcherSpanCount; // ivar: _contextMatcherSpanCount
@property (copy, nonatomic) NSString *externalParserId; // ivar: _externalParserId
@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (nonatomic) BOOL hasContextMatcherSpanCount;
@property (nonatomic) BOOL hasExternalParserId; // ivar: _hasExternalParserId
@property (nonatomic) BOOL hasLinkId; // ivar: _hasLinkId
@property (nonatomic) BOOL hasMentionResolverSpanCount;
@property (nonatomic) BOOL hasRewriteType;
@property (nonatomic) BOOL hasSiriVocabularySpanCount;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *linkId; // ivar: _linkId
@property (nonatomic) unsigned int mentionResolverSpanCount; // ivar: _mentionResolverSpanCount
@property (nonatomic) int rewriteType; // ivar: _rewriteType
@property (nonatomic) unsigned int siriVocabularySpanCount; // ivar: _siriVocabularySpanCount


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAsrHypothesisIndex;
-(void)deleteContextMatcherSpanCount;
-(void)deleteExternalParserId;
-(void)deleteLinkId;
-(void)deleteMentionResolverSpanCount;
-(void)deleteRewriteType;
-(void)deleteSiriVocabularySpanCount;
-(void)writeTo:(id)arg0 ;


@end


#endif