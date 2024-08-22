// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIGHTHOUSE_BITACORA_PROTOBITACORASTATE_H
#define LIGHTHOUSE_BITACORA_PROTOBITACORASTATE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers.h"

@interface LIGHTHOUSE_BITACORA_PROTOBitacoraState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *contextID; // ivar: _contextID
@property (nonatomic) unsigned int countCustomTargetting; // ivar: _countCustomTargetting
@property (nonatomic) unsigned int countCustomTargettingMet; // ivar: _countCustomTargettingMet
@property (nonatomic) unsigned int countGeneralTargetting; // ivar: _countGeneralTargetting
@property (nonatomic) unsigned int countGeneralTargettingMet; // ivar: _countGeneralTargettingMet
@property (nonatomic) unsigned int countPerformTaskFailed; // ivar: _countPerformTaskFailed
@property (nonatomic) unsigned int countPerformTaskSucceeded; // ivar: _countPerformTaskSucceeded
@property (nonatomic) unsigned int countStopFailed; // ivar: _countStopFailed
@property (nonatomic) unsigned int countStopSucceeded; // ivar: _countStopSucceeded
@property (nonatomic) unsigned int countTaskCompletedFailed; // ivar: _countTaskCompletedFailed
@property (nonatomic) unsigned int countTaskCompletedSucceeded; // ivar: _countTaskCompletedSucceeded
@property (nonatomic) unsigned int countTaskFetchedFailed; // ivar: _countTaskFetchedFailed
@property (nonatomic) unsigned int countTaskFetchedSucceeded; // ivar: _countTaskFetchedSucceeded
@property (nonatomic) unsigned int countTaskScheduledFailed; // ivar: _countTaskScheduledFailed
@property (nonatomic) unsigned int countTaskScheduledSucceeded; // ivar: _countTaskScheduledSucceeded
@property (nonatomic) BOOL hasCountCustomTargetting;
@property (nonatomic) BOOL hasCountCustomTargettingMet;
@property (nonatomic) BOOL hasCountGeneralTargetting;
@property (nonatomic) BOOL hasCountGeneralTargettingMet;
@property (nonatomic) BOOL hasCountPerformTaskFailed;
@property (nonatomic) BOOL hasCountPerformTaskSucceeded;
@property (nonatomic) BOOL hasCountStopFailed;
@property (nonatomic) BOOL hasCountStopSucceeded;
@property (nonatomic) BOOL hasCountTaskCompletedFailed;
@property (nonatomic) BOOL hasCountTaskCompletedSucceeded;
@property (nonatomic) BOOL hasCountTaskFetchedFailed;
@property (nonatomic) BOOL hasCountTaskFetchedSucceeded;
@property (nonatomic) BOOL hasCountTaskScheduledFailed;
@property (nonatomic) BOOL hasCountTaskScheduledSucceeded;
@property (nonatomic) BOOL hasIsActivated;
@property (nonatomic) BOOL hasIsAllocated;
@property (readonly, nonatomic) BOOL hasTrialDeploymentID;
@property (readonly, nonatomic) BOOL hasTrialExperimentID;
@property (nonatomic) BOOL hasTrialIdentifierType;
@property (readonly, nonatomic) BOOL hasTrialTaskID;
@property (readonly, nonatomic) BOOL hasTrialTreatmentID;
@property (nonatomic) BOOL isActivated; // ivar: _isActivated
@property (nonatomic) BOOL isAllocated; // ivar: _isAllocated
@property (retain, nonatomic) NSString *telemetryID; // ivar: _telemetryID
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *trialDeploymentID; // ivar: _trialDeploymentID
@property (retain, nonatomic) NSString *trialExperimentID; // ivar: _trialExperimentID
@property (nonatomic) int trialIdentifierType; // ivar: _trialIdentifierType
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers *trialIdentifiers; // ivar: _trialIdentifiers
@property (retain, nonatomic) NSString *trialTaskID; // ivar: _trialTaskID
@property (retain, nonatomic) NSString *trialTreatmentID; // ivar: _trialTreatmentID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)trialIdentifierTypeAsString:(int)arg0 ;
-(int)StringAsTrialIdentifierType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif