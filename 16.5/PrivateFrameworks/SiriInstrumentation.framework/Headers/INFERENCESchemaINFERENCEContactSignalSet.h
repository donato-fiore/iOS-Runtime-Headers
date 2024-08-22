// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECONTACTSIGNALSET_H
#define INFERENCESCHEMAINFERENCECONTACTSIGNALSET_H

@class NSArray, NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCEPrivatizedHistoryStats.h"
#import "INFERENCESchemaINFERENCERequestMatchSignalSet.h"
#import "INFERENCESchemaINFERENCESpeechAlternativeRanks.h"

@interface INFERENCESchemaINFERENCEContactSignalSet : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL areAllPrimaryContactTokensInQuery; // ivar: _areAllPrimaryContactTokensInQuery
@property (nonatomic) BOOL areAllQueryTokensInContact; // ivar: _areAllQueryTokensInContact
@property (nonatomic) BOOL areQueryDiacriticsRemoved; // ivar: _areQueryDiacriticsRemoved
@property (nonatomic) float fractionOfCommunalDevicesMatchingCandidate; // ivar: _fractionOfCommunalDevicesMatchingCandidate
@property (copy, nonatomic) NSArray *handlesWithPrivacySignalSets; // ivar: _handlesWithPrivacySignalSets
@property (nonatomic) BOOL hasAreAllPrimaryContactTokensInQuery;
@property (nonatomic) BOOL hasAreAllQueryTokensInContact;
@property (nonatomic) BOOL hasAreQueryDiacriticsRemoved;
@property (nonatomic) BOOL hasFractionOfCommunalDevicesMatchingCandidate;
@property (nonatomic) BOOL hasHandleWithAllowedType; // ivar: _hasHandleWithAllowedType
@property (nonatomic) BOOL hasHandleWithPreferredType; // ivar: _hasHandleWithPreferredType
@property (nonatomic) BOOL hasHasHandleWithAllowedType;
@property (nonatomic) BOOL hasHasHandleWithPreferredType;
@property (nonatomic) BOOL hasHasSuggestedProperties;
@property (nonatomic) BOOL hasHistoryStats; // ivar: _hasHistoryStats
@property (nonatomic) BOOL hasHistoryStatsInSameDomain; // ivar: _hasHistoryStatsInSameDomain
@property (nonatomic) BOOL hasHistoryStatsInSiriRequests; // ivar: _hasHistoryStatsInSiriRequests
@property (nonatomic) BOOL hasIsCommunalRequest;
@property (nonatomic) BOOL hasIsFavorite;
@property (nonatomic) BOOL hasIsFromNLXSearch;
@property (nonatomic) BOOL hasIsFromSRRSearch;
@property (nonatomic) BOOL hasIsFromStandardSearch;
@property (nonatomic) BOOL hasIsHypocorism;
@property (nonatomic) BOOL hasIsMeCard;
@property (nonatomic) BOOL hasIsMeCardRelation;
@property (nonatomic) BOOL hasIsMeCardRelationExactMatch;
@property (nonatomic) BOOL hasIsOnlyCandidate;
@property (nonatomic) BOOL hasIsPartialNameMatch;
@property (nonatomic) BOOL hasIsPlusSignal;
@property (nonatomic) BOOL hasIsQueryNameDerivedFromRelationshipLabel;
@property (nonatomic) BOOL hasIsQueryNormalized;
@property (nonatomic) BOOL hasIsQueryRelationshipLabelDerivedFromName;
@property (nonatomic) BOOL hasIsQueryStrippedOfPunctuation;
@property (nonatomic) BOOL hasIsQueryStrippedOfSymbols;
@property (nonatomic) BOOL hasIsQueryStrippedOfTitles;
@property (nonatomic) BOOL hasIsQueryStrippedOfWhitespace;
@property (nonatomic) BOOL hasIsRecent;
@property (nonatomic) BOOL hasIsRecentInSameDomain;
@property (nonatomic) BOOL hasIsRecentInSiriRequest;
@property (nonatomic) BOOL hasIsRecentlyCorrected;
@property (nonatomic) BOOL hasIsRelationAlias;
@property (nonatomic) BOOL hasIsSuggestedContact;
@property (nonatomic) BOOL hasIsThirdPartyMatch;
@property (nonatomic) BOOL hasIsTransliterated;
@property (nonatomic) BOOL hasNlxScore;
@property (nonatomic) BOOL hasRecencyRank;
@property (nonatomic) BOOL hasRecencyRankInSameDomain;
@property (nonatomic) BOOL hasRecencyRankInSiriRequest;
@property (nonatomic) BOOL hasRequestMatchSignalSet; // ivar: _hasRequestMatchSignalSet
@property (nonatomic) BOOL hasSpeechAlternativeRanks; // ivar: _hasSpeechAlternativeRanks
@property (nonatomic) BOOL hasSrrScore;
@property (nonatomic) BOOL hasSuggestedProperties; // ivar: _hasSuggestedProperties
@property (nonatomic) BOOL hasThirdPartyAppBundleId; // ivar: _hasThirdPartyAppBundleId
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStats; // ivar: _historyStats
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStatsInSameDomain; // ivar: _historyStatsInSameDomain
@property (retain, nonatomic) INFERENCESchemaINFERENCEPrivatizedHistoryStats *historyStatsInSiriRequests; // ivar: _historyStatsInSiriRequests
@property (nonatomic) BOOL isCommunalRequest; // ivar: _isCommunalRequest
@property (nonatomic) BOOL isFavorite; // ivar: _isFavorite
@property (nonatomic) BOOL isFromNLXSearch; // ivar: _isFromNLXSearch
@property (nonatomic) BOOL isFromSRRSearch; // ivar: _isFromSRRSearch
@property (nonatomic) BOOL isFromStandardSearch; // ivar: _isFromStandardSearch
@property (nonatomic) BOOL isHypocorism; // ivar: _isHypocorism
@property (nonatomic) BOOL isMeCard; // ivar: _isMeCard
@property (nonatomic) BOOL isMeCardRelation; // ivar: _isMeCardRelation
@property (nonatomic) BOOL isMeCardRelationExactMatch; // ivar: _isMeCardRelationExactMatch
@property (nonatomic) BOOL isOnlyCandidate; // ivar: _isOnlyCandidate
@property (nonatomic) BOOL isPartialNameMatch; // ivar: _isPartialNameMatch
@property (nonatomic) BOOL isPlusSignal; // ivar: _isPlusSignal
@property (nonatomic) BOOL isQueryNameDerivedFromRelationshipLabel; // ivar: _isQueryNameDerivedFromRelationshipLabel
@property (nonatomic) BOOL isQueryNormalized; // ivar: _isQueryNormalized
@property (nonatomic) BOOL isQueryRelationshipLabelDerivedFromName; // ivar: _isQueryRelationshipLabelDerivedFromName
@property (nonatomic) BOOL isQueryStrippedOfPunctuation; // ivar: _isQueryStrippedOfPunctuation
@property (nonatomic) BOOL isQueryStrippedOfSymbols; // ivar: _isQueryStrippedOfSymbols
@property (nonatomic) BOOL isQueryStrippedOfTitles; // ivar: _isQueryStrippedOfTitles
@property (nonatomic) BOOL isQueryStrippedOfWhitespace; // ivar: _isQueryStrippedOfWhitespace
@property (nonatomic) BOOL isRecent; // ivar: _isRecent
@property (nonatomic) BOOL isRecentInSameDomain; // ivar: _isRecentInSameDomain
@property (nonatomic) BOOL isRecentInSiriRequest; // ivar: _isRecentInSiriRequest
@property (nonatomic) BOOL isRecentlyCorrected; // ivar: _isRecentlyCorrected
@property (nonatomic) BOOL isRelationAlias; // ivar: _isRelationAlias
@property (nonatomic) BOOL isSuggestedContact; // ivar: _isSuggestedContact
@property (nonatomic) BOOL isThirdPartyMatch; // ivar: _isThirdPartyMatch
@property (nonatomic) BOOL isTransliterated; // ivar: _isTransliterated
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float nlxScore; // ivar: _nlxScore
@property (nonatomic) int recencyRank; // ivar: _recencyRank
@property (nonatomic) int recencyRankInSameDomain; // ivar: _recencyRankInSameDomain
@property (nonatomic) int recencyRankInSiriRequest; // ivar: _recencyRankInSiriRequest
@property (retain, nonatomic) INFERENCESchemaINFERENCERequestMatchSignalSet *requestMatchSignalSet; // ivar: _requestMatchSignalSet
@property (retain, nonatomic) INFERENCESchemaINFERENCESpeechAlternativeRanks *speechAlternativeRanks; // ivar: _speechAlternativeRanks
@property (nonatomic) float srrScore; // ivar: _srrScore
@property (copy, nonatomic) NSString *thirdPartyAppBundleId; // ivar: _thirdPartyAppBundleId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)handlesWithPrivacySignalSetsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addHandlesWithPrivacySignalSets:(id)arg0 ;
-(void)clearHandlesWithPrivacySignalSets;
-(void)deleteAreAllPrimaryContactTokensInQuery;
-(void)deleteAreAllQueryTokensInContact;
-(void)deleteAreQueryDiacriticsRemoved;
-(void)deleteFractionOfCommunalDevicesMatchingCandidate;
-(void)deleteHandlesWithPrivacySignalSets;
-(void)deleteHasHandleWithAllowedType;
-(void)deleteHasHandleWithPreferredType;
-(void)deleteHasSuggestedProperties;
-(void)deleteHistoryStats;
-(void)deleteHistoryStatsInSameDomain;
-(void)deleteHistoryStatsInSiriRequests;
-(void)deleteIsCommunalRequest;
-(void)deleteIsFavorite;
-(void)deleteIsFromNLXSearch;
-(void)deleteIsFromSRRSearch;
-(void)deleteIsFromStandardSearch;
-(void)deleteIsHypocorism;
-(void)deleteIsMeCard;
-(void)deleteIsMeCardRelation;
-(void)deleteIsMeCardRelationExactMatch;
-(void)deleteIsOnlyCandidate;
-(void)deleteIsPartialNameMatch;
-(void)deleteIsPlusSignal;
-(void)deleteIsQueryNameDerivedFromRelationshipLabel;
-(void)deleteIsQueryNormalized;
-(void)deleteIsQueryRelationshipLabelDerivedFromName;
-(void)deleteIsQueryStrippedOfPunctuation;
-(void)deleteIsQueryStrippedOfSymbols;
-(void)deleteIsQueryStrippedOfTitles;
-(void)deleteIsQueryStrippedOfWhitespace;
-(void)deleteIsRecent;
-(void)deleteIsRecentInSameDomain;
-(void)deleteIsRecentInSiriRequest;
-(void)deleteIsRecentlyCorrected;
-(void)deleteIsRelationAlias;
-(void)deleteIsSuggestedContact;
-(void)deleteIsThirdPartyMatch;
-(void)deleteIsTransliterated;
-(void)deleteNlxScore;
-(void)deleteRecencyRank;
-(void)deleteRecencyRankInSameDomain;
-(void)deleteRecencyRankInSiriRequest;
-(void)deleteRequestMatchSignalSet;
-(void)deleteSpeechAlternativeRanks;
-(void)deleteSrrScore;
-(void)deleteThirdPartyAppBundleId;
-(void)writeTo:(id)arg0 ;


@end


#endif