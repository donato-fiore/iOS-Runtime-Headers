// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCECONTACTFEATURESET_H
#define INFERENCESCHEMAINFERENCECONTACTFEATURESET_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEContactFeatureSet : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float allHandlesMatched; // ivar: _allHandlesMatched
@property (nonatomic) float allPrimaryNameTokensAreInQuery; // ivar: _allPrimaryNameTokensAreInQuery
@property (nonatomic) float allQueryMatched; // ivar: _allQueryMatched
@property (nonatomic) float freqAnyGroup0MinTo2Min; // ivar: _freqAnyGroup0MinTo2Min
@property (nonatomic) float freqAnyGroup10MinTo1Hr; // ivar: _freqAnyGroup10MinTo1Hr
@property (nonatomic) float freqAnyGroup1DayTo7Day; // ivar: _freqAnyGroup1DayTo7Day
@property (nonatomic) float freqAnyGroup1HrTo6Hr; // ivar: _freqAnyGroup1HrTo6Hr
@property (nonatomic) float freqAnyGroup28DayToInf; // ivar: _freqAnyGroup28DayToInf
@property (nonatomic) float freqAnyGroup2MinTo10Min; // ivar: _freqAnyGroup2MinTo10Min
@property (nonatomic) float freqAnyGroup6HrTo1Day; // ivar: _freqAnyGroup6HrTo1Day
@property (nonatomic) float freqAnyGroup7DayTo28Day; // ivar: _freqAnyGroup7DayTo28Day
@property (nonatomic) float freqSameGroup0MinTo2Min; // ivar: _freqSameGroup0MinTo2Min
@property (nonatomic) float freqSameGroup10MinTo1Hr; // ivar: _freqSameGroup10MinTo1Hr
@property (nonatomic) float freqSameGroup1DayTo7Day; // ivar: _freqSameGroup1DayTo7Day
@property (nonatomic) float freqSameGroup1HrTo6Hr; // ivar: _freqSameGroup1HrTo6Hr
@property (nonatomic) float freqSameGroup28DayToInf; // ivar: _freqSameGroup28DayToInf
@property (nonatomic) float freqSameGroup2MinTo10Min; // ivar: _freqSameGroup2MinTo10Min
@property (nonatomic) float freqSameGroup6HrTo1Day; // ivar: _freqSameGroup6HrTo1Day
@property (nonatomic) float freqSameGroup7DayTo28Day; // ivar: _freqSameGroup7DayTo28Day
@property (nonatomic) BOOL hasAllHandlesMatched;
@property (nonatomic) BOOL hasAllPrimaryNameTokensAreInQuery;
@property (nonatomic) BOOL hasAllQueryMatched;
@property (nonatomic) BOOL hasFreqAnyGroup0MinTo2Min;
@property (nonatomic) BOOL hasFreqAnyGroup10MinTo1Hr;
@property (nonatomic) BOOL hasFreqAnyGroup1DayTo7Day;
@property (nonatomic) BOOL hasFreqAnyGroup1HrTo6Hr;
@property (nonatomic) BOOL hasFreqAnyGroup28DayToInf;
@property (nonatomic) BOOL hasFreqAnyGroup2MinTo10Min;
@property (nonatomic) BOOL hasFreqAnyGroup6HrTo1Day;
@property (nonatomic) BOOL hasFreqAnyGroup7DayTo28Day;
@property (nonatomic) BOOL hasFreqSameGroup0MinTo2Min;
@property (nonatomic) BOOL hasFreqSameGroup10MinTo1Hr;
@property (nonatomic) BOOL hasFreqSameGroup1DayTo7Day;
@property (nonatomic) BOOL hasFreqSameGroup1HrTo6Hr;
@property (nonatomic) BOOL hasFreqSameGroup28DayToInf;
@property (nonatomic) BOOL hasFreqSameGroup2MinTo10Min;
@property (nonatomic) BOOL hasFreqSameGroup6HrTo1Day;
@property (nonatomic) BOOL hasFreqSameGroup7DayTo28Day;
@property (nonatomic) BOOL hasHasSuggestedProperties;
@property (nonatomic) BOOL hasIsFamilyNameMatch;
@property (nonatomic) BOOL hasIsFavorite;
@property (nonatomic) BOOL hasIsGivenNameMatch;
@property (nonatomic) BOOL hasIsHighQualityRequestMatch;
@property (nonatomic) BOOL hasIsHypocorism;
@property (nonatomic) BOOL hasIsMeCardRelation;
@property (nonatomic) BOOL hasIsMiddleNameMatch;
@property (nonatomic) BOOL hasIsNamePrefixMatch;
@property (nonatomic) BOOL hasIsNameSuffixMatch;
@property (nonatomic) BOOL hasIsNicknameMatch;
@property (nonatomic) BOOL hasIsOrganizationNameMatch;
@property (nonatomic) BOOL hasIsPartialNameMatch;
@property (nonatomic) BOOL hasIsRecent;
@property (nonatomic) BOOL hasIsRecentInSameDomain;
@property (nonatomic) BOOL hasIsRecentInSiriRequest;
@property (nonatomic) BOOL hasIsRecentlyCorrected;
@property (nonatomic) BOOL hasIsRelationAlias;
@property (nonatomic) BOOL hasIsSuggested;
@property (nonatomic) BOOL hasIsWeakOrganizationMatch;
@property (nonatomic) BOOL hasNumPrimaryTokens;
@property (nonatomic) BOOL hasRecencyRank;
@property (nonatomic) BOOL hasRecencyRankInSameDomain;
@property (nonatomic) BOOL hasRecencyRankInSiriRequest;
@property (nonatomic) BOOL hasSpeechAlternativeRanksFamilyNameRank;
@property (nonatomic) BOOL hasSpeechAlternativeRanksGivenNameRank;
@property (nonatomic) BOOL hasSpeechAlternativeRanksMiddleNameRank;
@property (nonatomic) float hasSuggestedProperties; // ivar: _hasSuggestedProperties
@property (nonatomic) float isFamilyNameMatch; // ivar: _isFamilyNameMatch
@property (nonatomic) float isFavorite; // ivar: _isFavorite
@property (nonatomic) float isGivenNameMatch; // ivar: _isGivenNameMatch
@property (nonatomic) float isHighQualityRequestMatch; // ivar: _isHighQualityRequestMatch
@property (nonatomic) float isHypocorism; // ivar: _isHypocorism
@property (nonatomic) float isMeCardRelation; // ivar: _isMeCardRelation
@property (nonatomic) float isMiddleNameMatch; // ivar: _isMiddleNameMatch
@property (nonatomic) float isNamePrefixMatch; // ivar: _isNamePrefixMatch
@property (nonatomic) float isNameSuffixMatch; // ivar: _isNameSuffixMatch
@property (nonatomic) float isNicknameMatch; // ivar: _isNicknameMatch
@property (nonatomic) float isOrganizationNameMatch; // ivar: _isOrganizationNameMatch
@property (nonatomic) float isPartialNameMatch; // ivar: _isPartialNameMatch
@property (nonatomic) float isRecent; // ivar: _isRecent
@property (nonatomic) float isRecentInSameDomain; // ivar: _isRecentInSameDomain
@property (nonatomic) float isRecentInSiriRequest; // ivar: _isRecentInSiriRequest
@property (nonatomic) float isRecentlyCorrected; // ivar: _isRecentlyCorrected
@property (nonatomic) float isRelationAlias; // ivar: _isRelationAlias
@property (nonatomic) float isSuggested; // ivar: _isSuggested
@property (nonatomic) float isWeakOrganizationMatch; // ivar: _isWeakOrganizationMatch
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float numPrimaryTokens; // ivar: _numPrimaryTokens
@property (nonatomic) float recencyRank; // ivar: _recencyRank
@property (nonatomic) float recencyRankInSameDomain; // ivar: _recencyRankInSameDomain
@property (nonatomic) float recencyRankInSiriRequest; // ivar: _recencyRankInSiriRequest
@property (nonatomic) float speechAlternativeRanksFamilyNameRank; // ivar: _speechAlternativeRanksFamilyNameRank
@property (nonatomic) float speechAlternativeRanksGivenNameRank; // ivar: _speechAlternativeRanksGivenNameRank
@property (nonatomic) float speechAlternativeRanksMiddleNameRank; // ivar: _speechAlternativeRanksMiddleNameRank


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAllHandlesMatched;
-(void)deleteAllPrimaryNameTokensAreInQuery;
-(void)deleteAllQueryMatched;
-(void)deleteFreqAnyGroup0MinTo2Min;
-(void)deleteFreqAnyGroup10MinTo1Hr;
-(void)deleteFreqAnyGroup1DayTo7Day;
-(void)deleteFreqAnyGroup1HrTo6Hr;
-(void)deleteFreqAnyGroup28DayToInf;
-(void)deleteFreqAnyGroup2MinTo10Min;
-(void)deleteFreqAnyGroup6HrTo1Day;
-(void)deleteFreqAnyGroup7DayTo28Day;
-(void)deleteFreqSameGroup0MinTo2Min;
-(void)deleteFreqSameGroup10MinTo1Hr;
-(void)deleteFreqSameGroup1DayTo7Day;
-(void)deleteFreqSameGroup1HrTo6Hr;
-(void)deleteFreqSameGroup28DayToInf;
-(void)deleteFreqSameGroup2MinTo10Min;
-(void)deleteFreqSameGroup6HrTo1Day;
-(void)deleteFreqSameGroup7DayTo28Day;
-(void)deleteHasSuggestedProperties;
-(void)deleteIsFamilyNameMatch;
-(void)deleteIsFavorite;
-(void)deleteIsGivenNameMatch;
-(void)deleteIsHighQualityRequestMatch;
-(void)deleteIsHypocorism;
-(void)deleteIsMeCardRelation;
-(void)deleteIsMiddleNameMatch;
-(void)deleteIsNamePrefixMatch;
-(void)deleteIsNameSuffixMatch;
-(void)deleteIsNicknameMatch;
-(void)deleteIsOrganizationNameMatch;
-(void)deleteIsPartialNameMatch;
-(void)deleteIsRecent;
-(void)deleteIsRecentInSameDomain;
-(void)deleteIsRecentInSiriRequest;
-(void)deleteIsRecentlyCorrected;
-(void)deleteIsRelationAlias;
-(void)deleteIsSuggested;
-(void)deleteIsWeakOrganizationMatch;
-(void)deleteNumPrimaryTokens;
-(void)deleteRecencyRank;
-(void)deleteRecencyRankInSameDomain;
-(void)deleteRecencyRankInSiriRequest;
-(void)deleteSpeechAlternativeRanksFamilyNameRank;
-(void)deleteSpeechAlternativeRanksGivenNameRank;
-(void)deleteSpeechAlternativeRanksMiddleNameRank;
-(void)writeTo:(id)arg0 ;


@end


#endif