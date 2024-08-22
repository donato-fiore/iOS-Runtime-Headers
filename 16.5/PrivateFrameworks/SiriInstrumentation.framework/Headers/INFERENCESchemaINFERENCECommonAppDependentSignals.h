// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMONAPPDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCECOMMONAPPDEPENDENTSIGNALS_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals.h"
#import "INFERENCESchemaINFERENCECommonAppDependentFrequencyAndRecencySignals.h"

@interface INFERENCESchemaINFERENCECommonAppDependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals *appDependentEntityFrequencyAndRecencySignals; // ivar: _appDependentEntityFrequencyAndRecencySignals
@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppDependentFrequencyAndRecencySignals *appDependentFrequencyAndRecencySignals; // ivar: _appDependentFrequencyAndRecencySignals
@property (nonatomic) float appScoreFromModel; // ivar: _appScoreFromModel
@property (nonatomic) CGFloat compoundActiveBundleScore; // ivar: _compoundActiveBundleScore
@property (nonatomic) BOOL hasAppBundleId; // ivar: _hasAppBundleId
@property (nonatomic) BOOL hasAppDependentEntityFrequencyAndRecencySignals; // ivar: _hasAppDependentEntityFrequencyAndRecencySignals
@property (nonatomic) BOOL hasAppDependentFrequencyAndRecencySignals; // ivar: _hasAppDependentFrequencyAndRecencySignals
@property (nonatomic) BOOL hasAppScoreFromModel;
@property (nonatomic) BOOL hasCompoundActiveBundleScore;
@property (nonatomic) BOOL hasIsFirstPartyBundle;
@property (nonatomic) BOOL hasIsForegroundApp;
@property (nonatomic) BOOL hasIsResolvedApp;
@property (nonatomic) BOOL hasTimeSinceAppLastLaunchedInSec;
@property (nonatomic) BOOL hasTimeSpentByUserInAppToday;
@property (nonatomic) BOOL hasTotalTimeSpentByUserInAppPerDay;
@property (nonatomic) BOOL isFirstPartyBundle; // ivar: _isFirstPartyBundle
@property (nonatomic) BOOL isForegroundApp; // ivar: _isForegroundApp
@property (nonatomic) BOOL isResolvedApp; // ivar: _isResolvedApp
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int timeSinceAppLastLaunchedInSec; // ivar: _timeSinceAppLastLaunchedInSec
@property (nonatomic) unsigned int timeSpentByUserInAppToday; // ivar: _timeSpentByUserInAppToday
@property (nonatomic) unsigned int totalTimeSpentByUserInAppPerDay; // ivar: _totalTimeSpentByUserInAppPerDay


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppBundleId;
-(void)deleteAppDependentEntityFrequencyAndRecencySignals;
-(void)deleteAppDependentFrequencyAndRecencySignals;
-(void)deleteAppScoreFromModel;
-(void)deleteCompoundActiveBundleScore;
-(void)deleteIsFirstPartyBundle;
-(void)deleteIsForegroundApp;
-(void)deleteIsResolvedApp;
-(void)deleteTimeSinceAppLastLaunchedInSec;
-(void)deleteTimeSpentByUserInAppToday;
-(void)deleteTotalTimeSpentByUserInAppPerDay;
-(void)writeTo:(id)arg0 ;


@end


#endif