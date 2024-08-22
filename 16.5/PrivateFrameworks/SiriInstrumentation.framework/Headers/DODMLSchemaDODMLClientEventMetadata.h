// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DODMLSCHEMADODMLCLIENTEVENTMETADATA_H
#define DODMLSCHEMADODMLCLIENTEVENTMETADATA_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface DODMLSchemaDODMLClientEventMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *dodMlId; // ivar: _dodMlId
@property (copy, nonatomic) NSString *experimentName; // ivar: _experimentName
@property (nonatomic) BOOL hasDodMlId; // ivar: _hasDodMlId
@property (nonatomic) BOOL hasExperimentName; // ivar: _hasExperimentName
@property (nonatomic) BOOL hasTrialDeploymentId;
@property (nonatomic) BOOL hasTrialExperimentId; // ivar: _hasTrialExperimentId
@property (nonatomic) BOOL hasTrialTreatmentId; // ivar: _hasTrialTreatmentId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSInteger trialDeploymentId; // ivar: _trialDeploymentId
@property (copy, nonatomic) NSString *trialExperimentId; // ivar: _trialExperimentId
@property (retain, nonatomic) SISchemaUUID *trialTreatmentId; // ivar: _trialTreatmentId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDodMlId;
-(void)deleteExperimentName;
-(void)deleteTrialDeploymentId;
-(void)deleteTrialExperimentId;
-(void)deleteTrialTreatmentId;
-(void)writeTo:(id)arg0 ;


@end


#endif