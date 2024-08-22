// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAPCONTACTFILLERCONTACTEVENT_H
#define CAPCONTACTFILLERCONTACTEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface CAPContactFillerContactEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat averageBehavioralRuleConfidence; // ivar: _averageBehavioralRuleConfidence
@property (nonatomic) CGFloat averageBehavioralRuleConviction; // ivar: _averageBehavioralRuleConviction
@property (nonatomic) CGFloat averageBehavioralRuleLift; // ivar: _averageBehavioralRuleLift
@property (nonatomic) CGFloat averageBehavioralRuleMLScore; // ivar: _averageBehavioralRuleMLScore
@property (nonatomic) CGFloat averageBehavioralRulePowerFactor; // ivar: _averageBehavioralRulePowerFactor
@property (nonatomic) CGFloat averageBehavioralRuleSupport; // ivar: _averageBehavioralRuleSupport
@property (nonatomic) BOOL hasAverageBehavioralRuleConfidence;
@property (nonatomic) BOOL hasAverageBehavioralRuleConviction;
@property (nonatomic) BOOL hasAverageBehavioralRuleLift;
@property (nonatomic) BOOL hasAverageBehavioralRuleMLScore;
@property (nonatomic) BOOL hasAverageBehavioralRulePowerFactor;
@property (nonatomic) BOOL hasAverageBehavioralRuleSupport;
@property (nonatomic) BOOL hasInteractionModelScore;
@property (nonatomic) BOOL hasMaximumBehavioralRuleConfidence;
@property (nonatomic) BOOL hasMaximumBehavioralRuleConviction;
@property (nonatomic) BOOL hasMaximumBehavioralRuleLift;
@property (nonatomic) BOOL hasMaximumBehavioralRuleMLScore;
@property (nonatomic) BOOL hasMaximumBehavioralRulePowerFactor;
@property (nonatomic) BOOL hasMaximumBehavioralRuleSupport;
@property (nonatomic) BOOL hasMinimumBehavioralRuleConfidence;
@property (nonatomic) BOOL hasMinimumBehavioralRuleConviction;
@property (nonatomic) BOOL hasMinimumBehavioralRuleLift;
@property (nonatomic) BOOL hasMinimumBehavioralRuleMLScore;
@property (nonatomic) BOOL hasMinimumBehavioralRulePowerFactor;
@property (nonatomic) BOOL hasMinimumBehavioralRuleSupport;
@property (nonatomic) BOOL hasNormalizedIncomingCallFrequency;
@property (nonatomic) BOOL hasNormalizedOutgoingCallFrequency;
@property (nonatomic) BOOL hasNumberOfBehavioralRulesAdvocating;
@property (nonatomic) BOOL hasStdevBehavioralRuleConfidence;
@property (nonatomic) BOOL hasStdevBehavioralRuleConviction;
@property (nonatomic) BOOL hasStdevBehavioralRuleLift;
@property (nonatomic) BOOL hasStdevBehavioralRuleMLScore;
@property (nonatomic) BOOL hasStdevBehavioralRulePowerFactor;
@property (nonatomic) BOOL hasStdevBehavioralRuleSupport;
@property (nonatomic) BOOL hasTimeSinceLastContactViaIncomingCall;
@property (nonatomic) BOOL hasTimeSinceLastContactViaOutgoingCall;
@property (nonatomic) CGFloat interactionModelScore; // ivar: _interactionModelScore
@property (nonatomic) CGFloat maximumBehavioralRuleConfidence; // ivar: _maximumBehavioralRuleConfidence
@property (nonatomic) CGFloat maximumBehavioralRuleConviction; // ivar: _maximumBehavioralRuleConviction
@property (nonatomic) CGFloat maximumBehavioralRuleLift; // ivar: _maximumBehavioralRuleLift
@property (nonatomic) CGFloat maximumBehavioralRuleMLScore; // ivar: _maximumBehavioralRuleMLScore
@property (nonatomic) CGFloat maximumBehavioralRulePowerFactor; // ivar: _maximumBehavioralRulePowerFactor
@property (nonatomic) CGFloat maximumBehavioralRuleSupport; // ivar: _maximumBehavioralRuleSupport
@property (nonatomic) CGFloat minimumBehavioralRuleConfidence; // ivar: _minimumBehavioralRuleConfidence
@property (nonatomic) CGFloat minimumBehavioralRuleConviction; // ivar: _minimumBehavioralRuleConviction
@property (nonatomic) CGFloat minimumBehavioralRuleLift; // ivar: _minimumBehavioralRuleLift
@property (nonatomic) CGFloat minimumBehavioralRuleMLScore; // ivar: _minimumBehavioralRuleMLScore
@property (nonatomic) CGFloat minimumBehavioralRulePowerFactor; // ivar: _minimumBehavioralRulePowerFactor
@property (nonatomic) CGFloat minimumBehavioralRuleSupport; // ivar: _minimumBehavioralRuleSupport
@property (nonatomic) unsigned int normalizedIncomingCallFrequency; // ivar: _normalizedIncomingCallFrequency
@property (nonatomic) unsigned int normalizedIncomingTextFrequency; // ivar: _normalizedIncomingTextFrequency
@property (nonatomic) unsigned int normalizedOutgoingCallFrequency; // ivar: _normalizedOutgoingCallFrequency
@property (nonatomic) unsigned int normalizedOutgoingTextFrequency; // ivar: _normalizedOutgoingTextFrequency
@property (nonatomic) unsigned int normalizedShareFrequency; // ivar: _normalizedShareFrequency
@property (nonatomic) unsigned int numberOfBehavioralRulesAdvocating; // ivar: _numberOfBehavioralRulesAdvocating
@property (nonatomic) CGFloat stdevBehavioralRuleConfidence; // ivar: _stdevBehavioralRuleConfidence
@property (nonatomic) CGFloat stdevBehavioralRuleConviction; // ivar: _stdevBehavioralRuleConviction
@property (nonatomic) CGFloat stdevBehavioralRuleLift; // ivar: _stdevBehavioralRuleLift
@property (nonatomic) CGFloat stdevBehavioralRuleMLScore; // ivar: _stdevBehavioralRuleMLScore
@property (nonatomic) CGFloat stdevBehavioralRulePowerFactor; // ivar: _stdevBehavioralRulePowerFactor
@property (nonatomic) CGFloat stdevBehavioralRuleSupport; // ivar: _stdevBehavioralRuleSupport
@property (nonatomic) int timeSinceLastContactViaIncomingCall; // ivar: _timeSinceLastContactViaIncomingCall
@property (nonatomic) int timeSinceLastContactViaIncomingText; // ivar: _timeSinceLastContactViaIncomingText
@property (nonatomic) int timeSinceLastContactViaOutgoingCall; // ivar: _timeSinceLastContactViaOutgoingCall
@property (nonatomic) int timeSinceLastContactViaOutgoingText; // ivar: _timeSinceLastContactViaOutgoingText
@property (nonatomic) int timeSinceLastContactViaShare; // ivar: _timeSinceLastContactViaShare
@property (nonatomic) BOOL wasShareRecipient; // ivar: _wasShareRecipient


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)timeSinceLastContactViaIncomingCallAsString:(int)arg0 ;
-(id)timeSinceLastContactViaIncomingTextAsString:(int)arg0 ;
-(id)timeSinceLastContactViaOutgoingCallAsString:(int)arg0 ;
-(id)timeSinceLastContactViaOutgoingTextAsString:(int)arg0 ;
-(id)timeSinceLastContactViaShareAsString:(int)arg0 ;
-(int)StringAsTimeSinceLastContactViaIncomingCall:(id)arg0 ;
-(int)StringAsTimeSinceLastContactViaIncomingText:(id)arg0 ;
-(int)StringAsTimeSinceLastContactViaOutgoingCall:(id)arg0 ;
-(int)StringAsTimeSinceLastContactViaOutgoingText:(id)arg0 ;
-(int)StringAsTimeSinceLastContactViaShare:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif