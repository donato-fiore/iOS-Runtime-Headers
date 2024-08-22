// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATSCONFIG_H
#define ATSCONFIG_H

@class NSArray, NSDictionary, NSString, TRIClient, TRITrackingId;

#import <Foundation/Foundation.h>


@interface ATSConfig : NSObject

@property (retain, nonatomic) NSArray *activityBlacklist; // ivar: _activityBlacklist
@property (retain, nonatomic) NSDictionary *activityForTriggerBlacklist; // ivar: _activityForTriggerBlacklist
@property (retain, nonatomic) NSDictionary *atsConfig; // ivar: _atsConfig
@property (nonatomic) int deploymentID; // ivar: _deploymentID
@property (retain, nonatomic) NSString *experimentID; // ivar: _experimentID
@property (retain, nonatomic) NSDictionary *heuristicEnablement; // ivar: _heuristicEnablement
@property (retain, nonatomic) NSArray *intentBlacklist; // ivar: _intentBlacklist
@property (retain, nonatomic) NSDictionary *intentForTriggerBlacklist; // ivar: _intentForTriggerBlacklist
@property (retain, nonatomic) NSDictionary *parametersForIntentBlacklist; // ivar: _parametersForIntentBlacklist
@property (retain, nonatomic) NSArray *preferredTriggers; // ivar: _preferredTriggers
@property (retain, nonatomic) NSDictionary *scoreCutOffs; // ivar: _scoreCutOffs
@property (retain, nonatomic) NSString *sortProperty; // ivar: _sortProperty
@property (retain, nonatomic) NSString *treatmentID; // ivar: _treatmentID
@property (retain, nonatomic) TRIClient *trialClient; // ivar: _trialClient
@property (retain, nonatomic) NSString *trialID; // ivar: _trialID
@property (retain, nonatomic) TRITrackingId *trialTrackingID; // ivar: _trialTrackingID


-(BOOL)loadATSConfig:(id)arg0 ;
-(id)init;
-(id)initWithConfigFilePath:(id)arg0 ;
-(id)initWithDefaultConfig;
-(void)loadDefaultConfig;
-(void)updateFactorLevels;
-(void)updateFactorLevelsFromFilePath:(id)arg0 ;


@end


#endif