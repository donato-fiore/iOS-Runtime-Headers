// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAARSCHEMACAARACTIONFEATURESET_H
#define CAARSCHEMACAARACTIONFEATURESET_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface CAARSchemaCAARActionFeatureSet : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *actionCandidateId; // ivar: _actionCandidateId
@property (nonatomic) BOOL appNameMentioned; // ivar: _appNameMentioned
@property (nonatomic) unsigned int entitySaliencyMaxScore; // ivar: _entitySaliencyMaxScore
@property (nonatomic) BOOL entityTypeMentioned; // ivar: _entityTypeMentioned
@property (nonatomic) BOOL hasActionCandidateId; // ivar: _hasActionCandidateId
@property (nonatomic) BOOL hasAppNameMentioned;
@property (nonatomic) BOOL hasEntitySaliencyMaxScore;
@property (nonatomic) BOOL hasEntityTypeMentioned;
@property (nonatomic) BOOL hasIsAppInForeground;
@property (nonatomic) BOOL hasIsAutoshortcut;
@property (nonatomic) BOOL hasIsAutoshortcutAppOnScreen;
@property (nonatomic) BOOL hasIsColdOpenAllowlist;
@property (nonatomic) BOOL hasIsDefaultLinkAction;
@property (nonatomic) BOOL hasIsHighConfidence;
@property (nonatomic) BOOL hasIsLinkAction;
@property (nonatomic) BOOL hasIsLinkActionOnScreen;
@property (nonatomic) BOOL hasIsTopRankedParse;
@property (nonatomic) BOOL hasIsTopRankedPlugin;
@property (nonatomic) BOOL hasIsVocabNameMatch;
@property (nonatomic) BOOL hasNlParseProbability;
@property (nonatomic) BOOL hasNumSalientEntities;
@property (nonatomic) BOOL isAppInForeground; // ivar: _isAppInForeground
@property (nonatomic) BOOL isAutoshortcut; // ivar: _isAutoshortcut
@property (nonatomic) BOOL isAutoshortcutAppOnScreen; // ivar: _isAutoshortcutAppOnScreen
@property (nonatomic) BOOL isColdOpenAllowlist; // ivar: _isColdOpenAllowlist
@property (nonatomic) BOOL isDefaultLinkAction; // ivar: _isDefaultLinkAction
@property (nonatomic) BOOL isHighConfidence; // ivar: _isHighConfidence
@property (nonatomic) BOOL isLinkAction; // ivar: _isLinkAction
@property (nonatomic) BOOL isLinkActionOnScreen; // ivar: _isLinkActionOnScreen
@property (nonatomic) BOOL isTopRankedParse; // ivar: _isTopRankedParse
@property (nonatomic) BOOL isTopRankedPlugin; // ivar: _isTopRankedPlugin
@property (nonatomic) BOOL isVocabNameMatch; // ivar: _isVocabNameMatch
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float nlParseProbability; // ivar: _nlParseProbability
@property (nonatomic) unsigned int numSalientEntities; // ivar: _numSalientEntities


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteActionCandidateId;
-(void)deleteAppNameMentioned;
-(void)deleteEntitySaliencyMaxScore;
-(void)deleteEntityTypeMentioned;
-(void)deleteIsAppInForeground;
-(void)deleteIsAutoshortcut;
-(void)deleteIsAutoshortcutAppOnScreen;
-(void)deleteIsColdOpenAllowlist;
-(void)deleteIsDefaultLinkAction;
-(void)deleteIsHighConfidence;
-(void)deleteIsLinkAction;
-(void)deleteIsLinkActionOnScreen;
-(void)deleteIsTopRankedParse;
-(void)deleteIsTopRankedPlugin;
-(void)deleteIsVocabNameMatch;
-(void)deleteNlParseProbability;
-(void)deleteNumSalientEntities;
-(void)writeTo:(id)arg0 ;


@end


#endif