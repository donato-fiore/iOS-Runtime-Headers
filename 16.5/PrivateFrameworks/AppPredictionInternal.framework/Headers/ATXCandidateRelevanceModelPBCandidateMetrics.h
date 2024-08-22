// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCANDIDATERELEVANCEMODELPBCANDIDATEMETRICS_H
#define ATXCANDIDATERELEVANCEMODELPBCANDIDATEMETRICS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXCandidateRelevanceModelPBCandidateMetrics : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *candidateIdentifier; // ivar: _candidateIdentifier
@property (nonatomic) unsigned int candidateNumberOfDaysWithPositiveSamples; // ivar: _candidateNumberOfDaysWithPositiveSamples
@property (nonatomic) unsigned int candidateNumberOfModelWeights; // ivar: _candidateNumberOfModelWeights
@property (nonatomic) unsigned int candidateNumberOfNonZeroModelWeights; // ivar: _candidateNumberOfNonZeroModelWeights
@property (nonatomic) unsigned int candidateNumberOfPositiveSamples; // ivar: _candidateNumberOfPositiveSamples
@property (nonatomic) unsigned int candidateNumberOfSamples; // ivar: _candidateNumberOfSamples
@property (nonatomic) float candidateShadowF1; // ivar: _candidateShadowF1
@property (nonatomic) float candidateShadowLaunchPercentage; // ivar: _candidateShadowLaunchPercentage
@property (nonatomic) float candidateShadowPrecision; // ivar: _candidateShadowPrecision
@property (nonatomic) float candidateShadowRecall; // ivar: _candidateShadowRecall
@property (nonatomic) float candidateShadowShownPercentage; // ivar: _candidateShadowShownPercentage
@property (nonatomic) float candidateUIF1; // ivar: _candidateUIF1
@property (nonatomic) float candidateUILaunchPercentage; // ivar: _candidateUILaunchPercentage
@property (nonatomic) float candidateUIPrecision; // ivar: _candidateUIPrecision
@property (nonatomic) float candidateUIRecall; // ivar: _candidateUIRecall
@property (nonatomic) float candidateUIShownPercentage; // ivar: _candidateUIShownPercentage
@property (readonly, nonatomic) BOOL hasCandidateIdentifier;
@property (nonatomic) BOOL hasCandidateNumberOfDaysWithPositiveSamples;
@property (nonatomic) BOOL hasCandidateNumberOfModelWeights;
@property (nonatomic) BOOL hasCandidateNumberOfNonZeroModelWeights;
@property (nonatomic) BOOL hasCandidateNumberOfPositiveSamples;
@property (nonatomic) BOOL hasCandidateNumberOfSamples;
@property (nonatomic) BOOL hasCandidateShadowF1;
@property (nonatomic) BOOL hasCandidateShadowLaunchPercentage;
@property (nonatomic) BOOL hasCandidateShadowPrecision;
@property (nonatomic) BOOL hasCandidateShadowRecall;
@property (nonatomic) BOOL hasCandidateShadowShownPercentage;
@property (nonatomic) BOOL hasCandidateUIF1;
@property (nonatomic) BOOL hasCandidateUILaunchPercentage;
@property (nonatomic) BOOL hasCandidateUIPrecision;
@property (nonatomic) BOOL hasCandidateUIRecall;
@property (nonatomic) BOOL hasCandidateUIShownPercentage;


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