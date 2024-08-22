// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCEVIDEOSMARTAPPSELECTIONDISAMBIGUATIONINDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCEVIDEOSMARTAPPSELECTIONDISAMBIGUATIONINDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int disambiguationAppsOrder; // ivar: _disambiguationAppsOrder
@property (nonatomic) int disambiguationReasons; // ivar: _disambiguationReasons
@property (nonatomic) BOOL hasDisambiguationAppsOrder;
@property (nonatomic) BOOL hasDisambiguationReasons;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) BOOL hasNumDisambiguationApps;
@property (nonatomic) BOOL hasTrialDeploymentId;
@property (nonatomic) BOOL hasTrialTreatmentId; // ivar: _hasTrialTreatmentId
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSInteger modelVersion; // ivar: _modelVersion
@property (nonatomic) int numDisambiguationApps; // ivar: _numDisambiguationApps
@property (nonatomic) NSInteger trialDeploymentId; // ivar: _trialDeploymentId
@property (retain, nonatomic) SISchemaUUID *trialTreatmentId; // ivar: _trialTreatmentId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDisambiguationAppsOrder;
-(void)deleteDisambiguationReasons;
-(void)deleteModelVersion;
-(void)deleteNumDisambiguationApps;
-(void)deleteTrialDeploymentId;
-(void)deleteTrialTreatmentId;
-(void)writeTo:(id)arg0 ;


@end


#endif