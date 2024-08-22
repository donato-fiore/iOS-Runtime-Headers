// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DRSTASKINGDECISIONMAKER_H
#define DRSTASKINGDECISIONMAKER_H

@class NSDate, NSString, NSTimeZone;

#import <Foundation/Foundation.h>

#import "DRSTaskingCloudKitHelper.h"
#import "DRSConfigPersistedStore.h"
#import "DRSTaskingLimitingParameters.h"

@interface DRSTaskingDecisionMaker : NSObject

@property (readonly, nonatomic) DRSTaskingCloudKitHelper *cloudKitHelper; // ivar: _cloudKitHelper
@property (readonly, nonatomic) DRSConfigPersistedStore *configStore; // ivar: _configStore
@property (retain, nonatomic) NSDate *currentReceivedDate; // ivar: _currentReceivedDate
@property (readonly, nonatomic) NSString *dbWorkingDirectoryPath; // ivar: _dbWorkingDirectoryPath
@property (readonly, nonatomic) NSTimeZone *deviceTimezone; // ivar: _deviceTimezone
@property (readonly, nonatomic) BOOL enforceBuild; // ivar: _enforceBuild
@property (readonly, nonatomic) BOOL enforceDate; // ivar: _enforceDate
@property (readonly, nonatomic) BOOL enforceGlobalHysteresisAndCap; // ivar: _enforceGlobalHysteresisAndCap
@property (readonly, nonatomic) BOOL enforceSampling; // ivar: _enforceSampling
@property (readonly, nonatomic) BOOL enforceTeamHysteresis; // ivar: _enforceTeamHysteresis
@property (readonly, nonatomic) DRSTaskingLimitingParameters *limitingParameters; // ivar: _limitingParameters


+(BOOL)passesPercentAccept:(CGFloat)arg0 ;
-(BOOL)_configDoesPassTeamHysteresis:(id)arg0 logTelemetry:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)reportToDecisionServer;
-(id)_configsPassingOverallHysteresis:(id)arg0 logTelemetry:(BOOL)arg1 ;
-(id)_configsPassingPerTeamHysteresis:(id)arg0 logTelemetry:(BOOL)arg1 ;
-(id)_configsPassingSampling:(id)arg0 logTelemetry:(BOOL)arg1 ;
-(id)_hysteresisPredicate:(id)arg0 ;
-(id)_hysteresisPredicate:(id)arg0 config:(id)arg1 ;
-(id)_teamTaskingsPassingBuild:(id)arg0 logTelemetry:(BOOL)arg1 allowWildcardBuild:(BOOL)arg2 ;
-(id)_teamTaskingsPassingDate:(id)arg0 logTelemetry:(BOOL)arg1 ;
-(id)acceptedCancels:(id)arg0 ;
-(id)acceptedConfigs:(id)arg0 logTelemetry:(BOOL)arg1 ;
-(id)acceptedConfigs:(id)arg0 logTelemetry:(BOOL)arg1 allowWildcardBuild:(BOOL)arg2 ;
-(id)initWithTimezone:(id)arg0 limitingParameters:(id)arg1 dbWorkingDirectoryPath:(id)arg2 cloudKitHelper:(id)arg3 enforceDate:(BOOL)arg4 enforceBuild:(BOOL)arg5 enforceSampling:(BOOL)arg6 enforceTeamHysteresis:(BOOL)arg7 enforceGlobalHysteresisAndCap:(BOOL)arg8 ;
-(void)_logConfigReceipt:(id)arg0 ;
-(void)_persistReceivedMetadata:(id)arg0 ;
-(void)_rejectTaskingMessageDueToDisabledState:(id)arg0 logTelemetry:(BOOL)arg1 ;
-(void)clientCompletedConfigUUID:(id)arg0 ;
-(void)clientRejectsConfigUUID:(id)arg0 ;


@end


#endif