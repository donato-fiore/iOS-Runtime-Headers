// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ROAMPOLICYSTORE_H
#define ROAMPOLICYSTORE_H


#import <Foundation/Foundation.h>

#import "AnalyticsStoreMOHandler.h"

@interface RoamPolicyStore : NSObject

@property BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) AnalyticsStoreMOHandler *roamPolicyMOHandler; // ivar: _roamPolicyMOHandler


+(id)rangeStringWithRssiLevel:(NSUInteger)arg0 ;
-(BOOL)buildRoamCacheInfoForNetwork:(id)arg0 bssid:(id)arg1 numRoamSamples:(NSUInteger)arg2 ;
-(BOOL)buildRoamPoliciesForNetwork:(id)arg0 bssid:(id)arg1 numRoamSamples:(NSUInteger)arg2 deploymentStatus:(BOOL)arg3 ;
-(BOOL)checkForNewBSSAddition:(id)arg0 bssid:(id)arg1 ;
-(BOOL)doWeHaveEnoughSamplesToBuildChanList:(NSUInteger)arg0 numRoamSamples:(NSUInteger)arg1 ;
-(BOOL)doWeHaveEnoughSamplesToBuildRoamCache:(NSUInteger)arg0 numRoamSamples:(NSUInteger)arg1 ;
-(BOOL)doWeHaveEnoughSamplesToDeriveRSSITrigger:(NSUInteger)arg0 numRoamSamples:(NSUInteger)arg1 ;
-(BOOL)inRange:(NSInteger)arg0 high:(NSInteger)arg1 value:(NSInteger)arg2 ;
-(BOOL)isHomeEnvironment:(id)arg0 ;
-(BOOL)isNetworkQualifiedForAdaptiveRoaming:(id)arg0 ;
-(BOOL)isWorkEnvironment:(id)arg0 ;
-(BOOL)monitorDeploymentChanges:(id)arg0 ssid:(id)arg1 roamStatus:(NSUInteger)arg2 originBssid:(id)arg3 targetBssid:(id)arg4 ;
-(id)collectRoamCandidates:(id)arg0 roamSamplesToCollect:(NSUInteger)arg1 ;
-(id)deriveRoamInfo:(id)arg0 ssid:(id)arg1 numRoamSamplesCollectedSoFar:(NSUInteger)arg2 ;
-(id)initWithAnalyticsStore:(id)arg0 ;
-(void)checkForFrequentRoams:(NSUInteger)arg0 date:(id)arg1 motionState:(NSInteger)arg2 ;
-(void)deriveBadRoams:(id)arg0 ;
-(void)deriveNeighborChannelsFromRoamTargetsChannels:(id)arg0 bssid:(id)arg1 ssid:(id)arg2 ;
-(void)deriveRoamDeltaFromRoamCacheInfo:(id)arg0 neighborCount:(NSUInteger)arg1 ;
-(void)findDeploymentType:(NSUInteger)arg0 ;
-(void)listOutBTMRoams:(NSUInteger)arg0 ;
-(void)listOutLazyRoamScanInfo:(id)arg0 neighborCount:(NSUInteger)arg1 sourceRssi:(NSInteger)arg2 ;
-(void)listOutLinkLossSuppressionRoams:(NSUInteger)arg0 ;
-(void)listOutMostUsedRoamReasons:(NSUInteger)arg0 roamReason:(NSUInteger)arg1 ;
-(void)listOutMostUsedSourceRssi:(id)arg0 neighborCount:(NSUInteger)arg1 sourceRssi:(NSInteger)arg2 ;
-(void)listOutReassocRoams:(id)arg0 neighborCount:(NSUInteger)arg1 sourceRssi:(NSInteger)arg2 ;
-(void)listOutTimeSpentOnBss:(NSUInteger)arg0 timeSpentOnBss:(NSUInteger)arg1 motionState:(NSInteger)arg2 ;
-(void)locateTheNeighbor:(NSUInteger)arg0 cacheRssi:(NSInteger)arg1 ;
-(void)predictPath:(id)arg0 ;
-(void)resetAdaptiveRoamingStateMachine:(id)arg0 bssid:(id)arg1 ;
-(void)setDeploymentFromRoamCacheInfo:(id)arg0 neighborCount:(NSUInteger)arg1 ;
-(void)setDeploymentFromRoamInfo:(id)arg0 neighborCount:(NSUInteger)arg1 ;
-(void)storeNeighborsInfoLearningsFromRoamCacheInfo:(id)arg0 neighborCount:(NSUInteger)arg1 ;
-(void)storeNeighborsInfoLearningsFromRoamInfo:(id)arg0 neighborCount:(NSUInteger)arg1 ;
-(void)updateCoreDataWithNewChannelInfo:(NSInteger)arg0 bssid:(id)arg1 ssid:(id)arg2 ;


@end


#endif