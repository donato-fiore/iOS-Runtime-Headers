// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSANALYSISPETATSANALYSISEVENT_H
#define ATSANALYSISPETATSANALYSISEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATSAnalysisPETATSAnalysisEvent : PBCodable <NSCopying>

 {
    unsigned int _absoluteAntecedentSupport;
    unsigned int _absoluteConsequentSupport;
    unsigned int _absoluteSupport;
    NSString *_activityType;
    NSString *_bundleID;
    float _confidence;
    float _conviction;
    NSString *_feedbackAction;
    NSString *_intentClass;
    float _lift;
    float _rulePowerFactor;
    NSString *_sessionId;
    float _support;
    NSString *_trialID;
    NSString *_trigger;
    unsigned int _uniqueDaysLastWeek;
    unsigned int _uniqueDaysTotal;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif