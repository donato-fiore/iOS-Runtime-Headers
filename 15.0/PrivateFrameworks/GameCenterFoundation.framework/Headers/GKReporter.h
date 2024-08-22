// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKREPORTER_H
#define GKREPORTER_H


#import <Foundation/Foundation.h>


@interface GKReporter : NSObject

@property (nonatomic) CGFloat appLaunchTimestamp; // ivar: _appLaunchTimestamp
@property (nonatomic) CGFloat authenticateResponseTimestamp; // ivar: _authenticateResponseTimestamp
@property (nonatomic) CGFloat connectingDevicesTimestamp; // ivar: _connectingDevicesTimestamp
@property (nonatomic) CGFloat currentRealtimeMatchPersistenceTimestamp; // ivar: _currentRealtimeMatchPersistenceTimestamp
@property (nonatomic) CGFloat inviteeUILaunchTimestamp; // ivar: _inviteeUILaunchTimestamp
@property (nonatomic) CGFloat messageInviteProcessingTimestamp; // ivar: _messageInviteProcessingTimestamp
@property (nonatomic) CGFloat programaticInviteTimestamp; // ivar: _programaticInviteTimestamp
@property (nonatomic) CGFloat totalInviteReceivedTimestamp; // ivar: _totalInviteReceivedTimestamp


+(id)reporter;
-(BOOL)isTimeSpanValid:(CGFloat)arg0 maxDuration:(CGFloat)arg1 ;
-(void)recordAppLaunchAndTotalTimestamp;
-(void)recordAuthenticateResponseTimestamp;
-(void)recordConnectingDevicesTimestamp;
-(void)recordCurrentRealtimeMatchPersistenceTimestamp;
-(void)recordInviteeUILaunchTimestamp;
-(void)recordMessageInviteProcessingTimestamp;
-(void)recordProgramaticInviteTimestamp;
-(void)reportAppLaunchDuration;
-(void)reportAuthenticateResponseDuration;
-(void)reportConnectingDevicesDuration;
-(void)reportCurrentRealtimeMatchPersistenceDuration;
-(void)reportDurationForEvent:(id)arg0 eventType:(id)arg1 withStartTimestamp:(CGFloat)arg2 ;
-(void)reportEvent:(id)arg0 payload:(id)arg1 ;
-(void)reportEvent:(id)arg0 reportable:(id)arg1 ;
-(void)reportEvent:(id)arg0 target:(id)arg1 keyPath:(id)arg2 ;
-(void)reportEvent:(id)arg0 type:(id)arg1 ;
-(void)reportEvent:(id)arg0 type:(id)arg1 adamID:(id)arg2 ;
-(void)reportEvent:(id)arg0 type:(id)arg1 bundleID:(id)arg2 ;
-(void)reportEvent:(id)arg0 type:(id)arg1 count:(NSInteger)arg2 ;
-(void)reportEvent:(id)arg0 type:(id)arg1 friendsPlayedThisGame:(id)arg2 ;
-(void)reportEvent:(id)arg0 type:(id)arg1 inboxFriendRequestCount:(NSInteger)arg2 ;
-(void)reportEvent:(id)arg0 type:(id)arg1 payload:(id)arg2 ;
-(void)reportEvent:(id)arg0 type:(id)arg1 scoreRank:(id)arg2 ;
-(void)reportEvent:(id)arg0 type:(id)arg1 startTime:(id)arg2 ;
-(void)reportInviteeUILaunchDuration;
-(void)reportMessageInviteProcessingDuration;
-(void)reportOnboardingEventForType:(id)arg0 withStartTimestamp:(CGFloat)arg1 ;
-(void)reportPlayerAuthenticationFailure:(id)arg0 ;
-(void)reportProgramaticInviteDuration;
-(void)reportScreenTimeEventForType:(id)arg0 withStartTimestamp:(CGFloat)arg1 ;
-(void)reportTotalInviteReceivedDuration;
-(void)reportTournamentAnalyticsWithDomain:(id)arg0 type:(id)arg1 tournamentType:(id)arg2 replayCount:(id)arg3 friendCount:(id)arg4 tournamentID:(id)arg5 bundleID:(id)arg6 inviteeCount:(id)arg7 ;


@end


#endif