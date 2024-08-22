// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COREBEHAVIORANALYSISPETCOREBEHAVIORANALYSISEVENT_H
#define COREBEHAVIORANALYSISPETCOREBEHAVIORANALYSISEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CoreBehaviorAnalysisPETCoreBehaviorAnalysisEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *confidence; // ivar: _confidence
@property (nonatomic) BOOL contentUrlInContext; // ivar: _contentUrlInContext
@property (nonatomic) BOOL contentUrlInRule; // ivar: _contentUrlInRule
@property (nonatomic) BOOL contentUrlOverlap; // ivar: _contentUrlOverlap
@property (nonatomic) BOOL hasPersonAndAppMatched;
@property (nonatomic) BOOL hasPersonMatched;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL hasTopicContainingRuleCount;
@property (nonatomic) BOOL hasTopicInContext;
@property (nonatomic) BOOL hasTopicInRule;
@property (nonatomic) BOOL hasTopicOverlap;
@property (nonatomic) BOOL hasTopicRulesCardinality;
@property (nonatomic) unsigned int highConfidenceRuleCount; // ivar: _highConfidenceRuleCount
@property (nonatomic) BOOL isWeekendInRule; // ivar: _isWeekendInRule
@property (nonatomic) BOOL isWeekendOverlap; // ivar: _isWeekendOverlap
@property (nonatomic) BOOL lOIInContext; // ivar: _lOIInContext
@property (nonatomic) BOOL lOIInRule; // ivar: _lOIInRule
@property (nonatomic) BOOL lOIOverlap; // ivar: _lOIOverlap
@property (nonatomic) unsigned int locationOfInterestContainingRuleCount; // ivar: _locationOfInterestContainingRuleCount
@property (nonatomic) unsigned int locationOfInterestRulesCardinality; // ivar: _locationOfInterestRulesCardinality
@property (nonatomic) unsigned int lowConfidenceRuleCount; // ivar: _lowConfidenceRuleCount
@property (nonatomic) unsigned int mediumConfidenceRuleCount; // ivar: _mediumConfidenceRuleCount
@property (nonatomic) BOOL personAndAppMatched; // ivar: _personAndAppMatched
@property (nonatomic) BOOL personMatched; // ivar: _personMatched
@property (nonatomic) unsigned int photoContactContainingRuleCount; // ivar: _photoContactContainingRuleCount
@property (nonatomic) unsigned int photoContactInContext; // ivar: _photoContactInContext
@property (nonatomic) unsigned int photoContactInRule; // ivar: _photoContactInRule
@property (nonatomic) unsigned int photoContactOverlap; // ivar: _photoContactOverlap
@property (nonatomic) unsigned int photoContactRulesCardinality; // ivar: _photoContactRulesCardinality
@property (nonatomic) unsigned int photoSceneContainingRuleCount; // ivar: _photoSceneContainingRuleCount
@property (nonatomic) unsigned int photoSceneInContext; // ivar: _photoSceneInContext
@property (nonatomic) unsigned int photoSceneInRule; // ivar: _photoSceneInRule
@property (nonatomic) unsigned int photoSceneOverlap; // ivar: _photoSceneOverlap
@property (nonatomic) unsigned int photoSceneRulesCardinality; // ivar: _photoSceneRulesCardinality
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (nonatomic) unsigned int sourceBundleIdContainingRuleCount; // ivar: _sourceBundleIdContainingRuleCount
@property (nonatomic) BOOL sourceBundleIdInContext; // ivar: _sourceBundleIdInContext
@property (nonatomic) BOOL sourceBundleIdInRule; // ivar: _sourceBundleIdInRule
@property (nonatomic) BOOL sourceBundleIdOverlap; // ivar: _sourceBundleIdOverlap
@property (nonatomic) unsigned int sourceBundleIdRulesCardinality; // ivar: _sourceBundleIdRulesCardinality
@property (retain, nonatomic) NSString *support; // ivar: _support
@property (nonatomic) BOOL targetBundleIDInConsequent; // ivar: _targetBundleIDInConsequent
@property (nonatomic) unsigned int targetBundleIdContainingRuleCount; // ivar: _targetBundleIdContainingRuleCount
@property (nonatomic) BOOL targetBundleIdInContext; // ivar: _targetBundleIdInContext
@property (nonatomic) BOOL targetBundleIdInRule; // ivar: _targetBundleIdInRule
@property (nonatomic) BOOL targetBundleIdOverlap; // ivar: _targetBundleIdOverlap
@property (nonatomic) unsigned int targetBundleIdRulesCardinality; // ivar: _targetBundleIdRulesCardinality
@property (nonatomic) BOOL timeOfDaySlotInRule; // ivar: _timeOfDaySlotInRule
@property (nonatomic) BOOL timeOfDaySlotOverlap; // ivar: _timeOfDaySlotOverlap
@property (nonatomic) unsigned int topicContainingRuleCount; // ivar: _topicContainingRuleCount
@property (nonatomic) BOOL topicInContext; // ivar: _topicInContext
@property (nonatomic) BOOL topicInRule; // ivar: _topicInRule
@property (nonatomic) BOOL topicOverlap; // ivar: _topicOverlap
@property (nonatomic) unsigned int topicRulesCardinality; // ivar: _topicRulesCardinality
@property (nonatomic) unsigned int totalMessagesRecieved; // ivar: _totalMessagesRecieved
@property (nonatomic) unsigned int totalMessagesSent; // ivar: _totalMessagesSent
@property (nonatomic) unsigned int totalShares; // ivar: _totalShares
@property (retain, nonatomic) NSString *uniqueShareEventIdentifier; // ivar: _uniqueShareEventIdentifier
@property (nonatomic) BOOL utiTypeInContext; // ivar: _utiTypeInContext
@property (nonatomic) BOOL utiTypeInRule; // ivar: _utiTypeInRule
@property (nonatomic) BOOL utiTypeOverlap; // ivar: _utiTypeOverlap


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif