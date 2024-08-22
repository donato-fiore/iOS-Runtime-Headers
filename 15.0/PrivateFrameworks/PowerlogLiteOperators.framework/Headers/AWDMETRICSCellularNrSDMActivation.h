// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDMETRICSCELLULARNRSDMACTIVATION_H
#define AWDMETRICSCELLULARNRSDMACTIVATION_H

@class PBCodable;
@protocol NSCopying;



@interface AWDMETRICSCellularNrSDMActivation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL apNrRecomm; // ivar: _apNrRecomm
@property (nonatomic) BOOL apNrRecommConfFactor; // ivar: _apNrRecommConfFactor
@property (nonatomic) int currentRat; // ivar: _currentRat
@property (nonatomic) int deployment; // ivar: _deployment
@property (nonatomic) unsigned int durationInPrevState; // ivar: _durationInPrevState
@property (nonatomic) int fr; // ivar: _fr
@property (nonatomic) BOOL fr1MeasDisabled; // ivar: _fr1MeasDisabled
@property (nonatomic) BOOL fr2MeasDisabled; // ivar: _fr2MeasDisabled
@property (nonatomic) BOOL hasApNrRecomm;
@property (nonatomic) BOOL hasApNrRecommConfFactor;
@property (nonatomic) BOOL hasCurrentRat;
@property (nonatomic) BOOL hasDeployment;
@property (nonatomic) BOOL hasDurationInPrevState;
@property (nonatomic) BOOL hasFr;
@property (nonatomic) BOOL hasFr1MeasDisabled;
@property (nonatomic) BOOL hasFr2MeasDisabled;
@property (nonatomic) BOOL hasIsEndcCallActive;
@property (nonatomic) BOOL hasIsRrcConnected;
@property (nonatomic) BOOL hasPrevFr1MeasDisabled;
@property (nonatomic) BOOL hasPrevFr2MeasDisabled;
@property (nonatomic) BOOL hasPrevRat;
@property (nonatomic) BOOL hasPrevTriggerCause;
@property (nonatomic) BOOL hasSib24Configured;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTriggerCause;
@property (nonatomic) BOOL isEndcCallActive; // ivar: _isEndcCallActive
@property (nonatomic) BOOL isRrcConnected; // ivar: _isRrcConnected
@property (nonatomic) BOOL prevFr1MeasDisabled; // ivar: _prevFr1MeasDisabled
@property (nonatomic) BOOL prevFr2MeasDisabled; // ivar: _prevFr2MeasDisabled
@property (nonatomic) int prevRat; // ivar: _prevRat
@property (nonatomic) int prevTriggerCause; // ivar: _prevTriggerCause
@property (nonatomic) BOOL sib24Configured; // ivar: _sib24Configured
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int triggerCause; // ivar: _triggerCause


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentRatAsString:(int)arg0 ;
-(id)deploymentAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)frAsString:(int)arg0 ;
-(id)prevRatAsString:(int)arg0 ;
-(id)prevTriggerCauseAsString:(int)arg0 ;
-(id)triggerCauseAsString:(int)arg0 ;
-(int)StringAsCurrentRat:(id)arg0 ;
-(int)StringAsDeployment:(id)arg0 ;
-(int)StringAsFr:(id)arg0 ;
-(int)StringAsPrevRat:(id)arg0 ;
-(int)StringAsPrevTriggerCause:(id)arg0 ;
-(int)StringAsTriggerCause:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif