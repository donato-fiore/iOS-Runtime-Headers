// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCETRIALENROLLMENT_H
#define INFERENCESCHEMAINFERENCETRIALENROLLMENT_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCETrialEnrollment : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSInteger deploymentId; // ivar: _deploymentId
@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasExperimentId; // ivar: _hasExperimentId
@property (nonatomic) BOOL hasRolloutId; // ivar: _hasRolloutId
@property (nonatomic) BOOL hasTreatmentId; // ivar: _hasTreatmentId
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *rolloutId; // ivar: _rolloutId
@property (copy, nonatomic) NSString *treatmentId; // ivar: _treatmentId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDeploymentId;
-(void)deleteExperimentId;
-(void)deleteRolloutId;
-(void)deleteTreatmentId;
-(void)writeTo:(id)arg0 ;


@end


#endif