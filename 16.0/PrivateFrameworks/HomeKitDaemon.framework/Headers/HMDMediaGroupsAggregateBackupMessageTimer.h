// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPSAGGREGATEBACKUPMESSAGETIMER_H
#define HMDMEDIAGROUPSAGGREGATEBACKUPMESSAGETIMER_H

@class NSUUID, NSString, HMFTimer;
@protocol HMDTimerProvider, HMFTimerDelegate, HMDMediaGroupsAggregateBackupMessageTimerDelegate;

#import <Foundation/Foundation.h>


@interface HMDMediaGroupsAggregateBackupMessageTimer : NSObject <HMDTimerProvider, HMFTimerDelegate>



@property NSUInteger attemptCount; // ivar: _attemptCount
@property (copy) NSUUID *currentMessageIdentifier; // ivar: _currentMessageIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDMediaGroupsAggregateBackupMessageTimerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *participantAccessoryUUID; // ivar: _participantAccessoryUUID
@property (readonly) Class superclass;
@property (retain) HMFTimer *timer; // ivar: _timer
@property (weak) NSObject<HMDTimerProvider> *timerProvider; // ivar: _timerProvider


+(id)logCategory;
-(CGFloat)nextTimeInterval;
-(id)initWithParticipantAccessoryUUID:(id)arg0 ;
-(id)initWithParticipantAccessoryUUID:(id)arg0 timerProvider:(id)arg1 ;
-(id)logIdentifier;
-(id)timerWithTimeInterval:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(void)markAttemptWithMessageIdentifier:(id)arg0 ;
-(void)startRetryTimer;
-(void)timerDidFire:(id)arg0 ;


@end


#endif