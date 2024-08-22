// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEPRESENCEMONITOR_H
#define HMDHOMEPRESENCEMONITOR_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol HMFLogging, NSSecureCoding;


#import "HMDHomePresenceBase.h"
#import "HMDHomePresence.h"
#import "HMDHomePresenceUpdate.h"

@interface HMDHomePresenceMonitor : HMDHomePresenceBase <HMFLogging, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_presenceMap;
}


@property (retain, nonatomic) HMDHomePresence *currentHomePresence; // ivar: _currentHomePresence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDHomePresenceUpdate *homePresenceUpdate; // ivar: _homePresenceUpdate
@property (readonly, copy, nonatomic) NSDictionary *presenceMap;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *timerID; // ivar: _timerID


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_addUser:(id)arg0 ;
-(void)_auditPresenceMap;
-(void)_evaluatePresence:(id)arg0 newUserPresence:(id)arg1 presenceStatusUpdateReason:(id)arg2 ;
-(void)_preparePresenceMap;
-(void)_reEvaluatePresenceWithReason:(id)arg0 ;
-(void)_registerForMessages;
-(void)_removeNonExistingUsers;
-(void)_startAuditTimer;
-(void)_updateUserPresence:(id)arg0 presenceAuth:(id)arg1 completion:(id)arg2 ;
-(void)addNewUser:(id)arg0 ;
-(void)configure:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleHomeDataLoadedNotification:(id)arg0 ;
-(void)handleTimerFiredNotification:(id)arg0 ;
-(void)handleUserHomePresencePayload:(id)arg0 device:(id)arg1 user:(id)arg2 completion:(id)arg3 ;
-(void)handleUserPresenceUpdate:(id)arg0 ;
-(void)handleUserPresenceUpdateNotification:(id)arg0 ;
-(void)removeUser:(id)arg0 ;
-(void)residentChanged;


@end


#endif