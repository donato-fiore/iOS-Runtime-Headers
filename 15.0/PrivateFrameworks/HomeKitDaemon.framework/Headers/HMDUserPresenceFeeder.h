// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERPRESENCEFEEDER_H
#define HMDUSERPRESENCEFEEDER_H

@class NSString;
@protocol HMDUserPresenceFeedSessionDelegate, HMFLogging;


#import "HMDHomePresenceBase.h"
#import "HMDBackgroundTaskAgentTimer.h"
#import "HMDUserPresenceFeedSession.h"
#import "HMDUserPresenceFeed.h"

@interface HMDUserPresenceFeeder : HMDHomePresenceBase <HMDUserPresenceFeedSessionDelegate, HMFLogging>



@property (readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaUpdateTimer; // ivar: _btaUpdateTimer
@property (nonatomic) NSInteger ckAccountStatus; // ivar: _ckAccountStatus
@property (retain, nonatomic) HMDUserPresenceFeedSession *currentFeedSession; // ivar: _currentFeedSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAccountStatusFetchInProgress; // ivar: _isAccountStatusFetchInProgress
@property (retain, nonatomic) HMDUserPresenceFeed *lastSentFeed; // ivar: _lastSentFeed
@property (nonatomic) NSUInteger presenceRegionStatus; // ivar: _presenceRegionStatus
@property (readonly) Class superclass;


+(id)logCategory;
+(void)submitPresenceReportMetricWithPresenceAuth:(id)arg0 presenceCompute:(id)arg1 reason:(id)arg2 error:(id)arg3 ;
-(BOOL)_updatePresenceToResidentForUser:(id)arg0 presenceAuthStatus:(id)arg1 authChanging:(BOOL)arg2 reason:(id)arg3 fmfStatus:(id)arg4 ;
-(id)_sendPresenceAuthStatusForUser:(id)arg0 presenceAuthStatus:(id)arg1 presenceRegionStatus:(id)arg2 presenceComputeStatus:(id)arg3 reason:(id)arg4 ;
-(id)init;
-(void)_handleLocationAuthorizationChangedNotification:(id)arg0 ;
-(void)_registerForMessages;
-(void)_sendPresenceReport:(NSUInteger)arg0 ;
-(void)_sendPresenceUpdateToResident:(id)arg0 ;
-(void)_sendPresenceUpdateToResidentForUser:(id)arg0 presenceAuthStatus:(id)arg1 authChanging:(BOOL)arg2 reason:(id)arg3 ;
-(void)_sendPresenceUpdateToResidentForUser:(id)arg0 presenceAuthStatus:(id)arg1 authChanging:(BOOL)arg2 reason:(id)arg3 fmfStatus:(id)arg4 ;
-(void)_startRefreshTimer;
-(void)_submitPresenceAuthMetric:(id)arg0 ;
-(void)_submitPresenceComputeMetric:(id)arg0 ;
-(void)_updatePresenceComputeStatus:(id)arg0 ;
-(void)_upgradePresenceAuth;
-(void)accountAvailabilityChanged:(id)arg0 ;
-(void)configure:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)didEndFeedSession:(id)arg0 ;
-(void)fetchCKAccountStatusAndSendPresenceReport;
-(void)fmfStatusUpdateNotification:(id)arg0 ;
-(void)handleHomeDataLoadedNotification:(id)arg0 ;
-(void)homeDataProcessed;
-(void)notifyDidArriveHome;
-(void)notifyDidEnterHomeRegion;
-(void)notifyDidLeaveHome;
-(void)notifyDidLeaveHomeRegion;
-(void)presenceAuthChanged;
-(void)presenceAuthStatusChangedForUser:(id)arg0 presenceAuthStatus:(id)arg1 ;
-(void)registerQueriableAwdMetrics;
-(void)residentChanged;
-(void)timerFired:(id)arg0 ;


@end


#endif