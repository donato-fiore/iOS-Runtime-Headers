// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDSYMPTOMSADVISORYALTERNATENETWORKTYPE_H
#define AWDSYMPTOMSADVISORYALTERNATENETWORKTYPE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface AWDSymptomsAdvisoryAlternateNetworkType : PBCodable <NSCopying>

 {
    ? _cellEgressTriggers;
    ? _cellIngressTriggers;
    ? _wifiEgressTriggers;
    ? _wifiIngressTriggers;
    ? _has;
}


@property (nonatomic) unsigned int activationIdentifier; // ivar: _activationIdentifier
@property (nonatomic) int advice; // ivar: _advice
@property (nonatomic) NSUInteger adviceHeldForSecs; // ivar: _adviceHeldForSecs
@property (nonatomic) int advisor; // ivar: _advisor
@property (nonatomic) int bailOutOf; // ivar: _bailOutOf
@property (readonly, nonatomic) *int cellEgressTriggers;
@property (readonly, nonatomic) NSUInteger cellEgressTriggersCount;
@property (readonly, nonatomic) *int cellIngressTriggers;
@property (readonly, nonatomic) NSUInteger cellIngressTriggersCount;
@property (nonatomic) unsigned int cellularDataUsage; // ivar: _cellularDataUsage
@property (nonatomic) unsigned int comingFromState; // ivar: _comingFromState
@property (nonatomic) int egressMobilityCode; // ivar: _egressMobilityCode
@property (nonatomic) int egressTrigger; // ivar: _egressTrigger
@property (nonatomic) unsigned int egressTriggerMultiplier; // ivar: _egressTriggerMultiplier
@property (nonatomic) int egressTriggerOn; // ivar: _egressTriggerOn
@property (nonatomic) unsigned int egressTriggerPercentagex100; // ivar: _egressTriggerPercentagex100
@property (retain, nonatomic) NSMutableArray *egressTriggerSignatures; // ivar: _egressTriggerSignatures
@property (nonatomic) BOOL hasActivationIdentifier;
@property (nonatomic) BOOL hasAdvice;
@property (nonatomic) BOOL hasAdviceHeldForSecs;
@property (nonatomic) BOOL hasAdvisor;
@property (nonatomic) BOOL hasBailOutOf;
@property (nonatomic) BOOL hasCellularDataUsage;
@property (nonatomic) BOOL hasComingFromState;
@property (nonatomic) BOOL hasEgressMobilityCode;
@property (nonatomic) BOOL hasEgressTrigger;
@property (nonatomic) BOOL hasEgressTriggerMultiplier;
@property (nonatomic) BOOL hasEgressTriggerOn;
@property (nonatomic) BOOL hasEgressTriggerPercentagex100;
@property (nonatomic) BOOL hasIngressMobilityCode;
@property (nonatomic) BOOL hasIngressTrigger;
@property (nonatomic) BOOL hasIngressTriggerMultiplier;
@property (nonatomic) BOOL hasIngressTriggerOn;
@property (nonatomic) BOOL hasIngressTriggerPercentagex100;
@property (nonatomic) BOOL hasKernelProbingActivated;
@property (nonatomic) BOOL hasPolicy;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransitionsSuppressedByMobility;
@property (nonatomic) int ingressMobilityCode; // ivar: _ingressMobilityCode
@property (nonatomic) int ingressTrigger; // ivar: _ingressTrigger
@property (nonatomic) unsigned int ingressTriggerMultiplier; // ivar: _ingressTriggerMultiplier
@property (nonatomic) int ingressTriggerOn; // ivar: _ingressTriggerOn
@property (nonatomic) unsigned int ingressTriggerPercentagex100; // ivar: _ingressTriggerPercentagex100
@property (retain, nonatomic) NSMutableArray *ingressTriggerSignatures; // ivar: _ingressTriggerSignatures
@property (nonatomic) BOOL kernelProbingActivated; // ivar: _kernelProbingActivated
@property (nonatomic) int policy; // ivar: _policy
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int transitionsSuppressedByMobility; // ivar: _transitionsSuppressedByMobility
@property (readonly, nonatomic) *int wifiEgressTriggers;
@property (readonly, nonatomic) NSUInteger wifiEgressTriggersCount;
@property (readonly, nonatomic) *int wifiIngressTriggers;
@property (readonly, nonatomic) NSUInteger wifiIngressTriggersCount;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)adviceAsString:(int)arg0 ;
-(id)advisorAsString:(int)arg0 ;
-(id)bailOutOfAsString:(int)arg0 ;
-(id)cellEgressTriggersAsString:(int)arg0 ;
-(id)cellIngressTriggersAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)egressMobilityCodeAsString:(int)arg0 ;
-(id)egressTriggerAsString:(int)arg0 ;
-(id)egressTriggerOnAsString:(int)arg0 ;
-(id)egressTriggerSignatureAtIndex:(NSUInteger)arg0 ;
-(id)ingressMobilityCodeAsString:(int)arg0 ;
-(id)ingressTriggerAsString:(int)arg0 ;
-(id)ingressTriggerOnAsString:(int)arg0 ;
-(id)ingressTriggerSignatureAtIndex:(NSUInteger)arg0 ;
-(id)policyAsString:(int)arg0 ;
-(id)wifiEgressTriggersAsString:(int)arg0 ;
-(id)wifiIngressTriggersAsString:(int)arg0 ;
-(int)StringAsAdvice:(id)arg0 ;
-(int)StringAsAdvisor:(id)arg0 ;
-(int)StringAsBailOutOf:(id)arg0 ;
-(int)StringAsCellEgressTriggers:(id)arg0 ;
-(int)StringAsCellIngressTriggers:(id)arg0 ;
-(int)StringAsEgressMobilityCode:(id)arg0 ;
-(int)StringAsEgressTrigger:(id)arg0 ;
-(int)StringAsEgressTriggerOn:(id)arg0 ;
-(int)StringAsIngressMobilityCode:(id)arg0 ;
-(int)StringAsIngressTrigger:(id)arg0 ;
-(int)StringAsIngressTriggerOn:(id)arg0 ;
-(int)StringAsPolicy:(id)arg0 ;
-(int)StringAsWifiEgressTriggers:(id)arg0 ;
-(int)StringAsWifiIngressTriggers:(id)arg0 ;
-(int)cellEgressTriggersAtIndex:(NSUInteger)arg0 ;
-(int)cellIngressTriggersAtIndex:(NSUInteger)arg0 ;
-(int)wifiEgressTriggersAtIndex:(NSUInteger)arg0 ;
-(int)wifiIngressTriggersAtIndex:(NSUInteger)arg0 ;
-(void)addCellEgressTriggers:(int)arg0 ;
-(void)addCellIngressTriggers:(int)arg0 ;
-(void)addEgressTriggerSignature:(id)arg0 ;
-(void)addIngressTriggerSignature:(id)arg0 ;
-(void)addWifiEgressTriggers:(int)arg0 ;
-(void)addWifiIngressTriggers:(int)arg0 ;
-(void)clearCellEgressTriggers;
-(void)clearCellIngressTriggers;
-(void)clearEgressTriggerSignatures;
-(void)clearIngressTriggerSignatures;
-(void)clearWifiEgressTriggers;
-(void)clearWifiIngressTriggers;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif