// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXPSCHEMAEXPTRIALEXPERIMENT_H
#define EXPSCHEMAEXPTRIALEXPERIMENT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface EXPSchemaEXPTrialExperiment : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int allocationStatus; // ivar: _allocationStatus
@property (nonatomic) unsigned int compatibilityVersion; // ivar: _compatibilityVersion
@property (nonatomic) NSInteger deploymentId; // ivar: _deploymentId
@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (copy, nonatomic) NSString *experimentNamespace; // ivar: _experimentNamespace
@property (nonatomic) BOOL hasAllocationStatus;
@property (nonatomic) BOOL hasCompatibilityVersion;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasExperimentId; // ivar: _hasExperimentId
@property (nonatomic) BOOL hasExperimentNamespace; // ivar: _hasExperimentNamespace
@property (nonatomic) BOOL hasLastUpdatedAtInMs;
@property (nonatomic) BOOL hasTreatmentId; // ivar: _hasTreatmentId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger lastUpdatedAtInMs; // ivar: _lastUpdatedAtInMs
@property (retain, nonatomic) SISchemaUUID *treatmentId; // ivar: _treatmentId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAllocationStatus;
-(void)deleteCompatibilityVersion;
-(void)deleteDeploymentId;
-(void)deleteExperimentId;
-(void)deleteExperimentNamespace;
-(void)deleteLastUpdatedAtInMs;
-(void)deleteTreatmentId;
-(void)writeTo:(id)arg0 ;


@end


#endif