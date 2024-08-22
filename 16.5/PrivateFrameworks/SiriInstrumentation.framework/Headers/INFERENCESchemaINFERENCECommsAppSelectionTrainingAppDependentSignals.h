// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGAPPDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGAPPDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals.h"
#import "INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals.h"
#import "INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals.h"

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) float appTimeSpentAffinityScore; // ivar: _appTimeSpentAffinityScore
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals *contactDependentSignals; // ivar: _contactDependentSignals
@property (nonatomic) BOOL hasAppTimeSpentAffinityScore;
@property (nonatomic) BOOL hasContactDependentSignals; // ivar: _hasContactDependentSignals
@property (nonatomic) BOOL hasIsFirstPartyApp;
@property (nonatomic) BOOL hasIsForegroundApp;
@property (nonatomic) BOOL hasIsResolvedApp;
@property (nonatomic) BOOL hasIsResolvedContactInApp;
@property (nonatomic) BOOL hasMessageSignals; // ivar: _hasMessageSignals
@property (nonatomic) BOOL hasPhoneCallSignals; // ivar: _hasPhoneCallSignals
@property (nonatomic) BOOL hasTimeSinceAppLastLaunchedInSec;
@property (nonatomic) BOOL isFirstPartyApp; // ivar: _isFirstPartyApp
@property (nonatomic) BOOL isForegroundApp; // ivar: _isForegroundApp
@property (nonatomic) BOOL isResolvedApp; // ivar: _isResolvedApp
@property (nonatomic) BOOL isResolvedContactInApp; // ivar: _isResolvedContactInApp
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals *messageSignals; // ivar: _messageSignals
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals *phoneCallSignals; // ivar: _phoneCallSignals
@property (nonatomic) int timeSinceAppLastLaunchedInSec; // ivar: _timeSinceAppLastLaunchedInSec


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppTimeSpentAffinityScore;
-(void)deleteContactDependentSignals;
-(void)deleteIsFirstPartyApp;
-(void)deleteIsForegroundApp;
-(void)deleteIsResolvedApp;
-(void)deleteIsResolvedContactInApp;
-(void)deleteMessageSignals;
-(void)deletePhoneCallSignals;
-(void)deleteTimeSinceAppLastLaunchedInSec;
-(void)writeTo:(id)arg0 ;


@end


#endif