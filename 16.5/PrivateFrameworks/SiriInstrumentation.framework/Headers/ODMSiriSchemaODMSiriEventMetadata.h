// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODMSIRISCHEMAODMSIRIEVENTMETADATA_H
#define ODMSIRISCHEMAODMSIRIEVENTMETADATA_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "ODMSiriSchemaODMTrialExperimentIdentifiers.h"

@interface ODMSiriSchemaODMSiriEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasOdmId; // ivar: _hasOdmId
@property (nonatomic) BOOL hasPluginVersion; // ivar: _hasPluginVersion
@property (nonatomic) BOOL hasTrialExperimentIdentifiers; // ivar: _hasTrialExperimentIdentifiers
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *odmId; // ivar: _odmId
@property (copy, nonatomic) NSString *pluginVersion; // ivar: _pluginVersion
@property (retain, nonatomic) ODMSiriSchemaODMTrialExperimentIdentifiers *trialExperimentIdentifiers; // ivar: _trialExperimentIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteOdmId;
-(void)deletePluginVersion;
-(void)deleteTrialExperimentIdentifiers;
-(void)writeTo:(id)arg0 ;


@end


#endif