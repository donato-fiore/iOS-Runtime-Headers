// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPSESSIONMANAGER_H
#define HDSPSLEEPSESSIONMANAGER_H

@class NSString;
@protocol HDSPSleepTrackerDelegate, HDSPDeviceUnlockObserver, HDSPSleepSessionManagerDelegate, HDSPSleepSessionPersistence;

#import <Foundation/Foundation.h>

#import "HDSPDeviceUnlockMonitor.h"

@interface HDSPSleepSessionManager : NSObject <HDSPSleepTrackerDelegate, HDSPDeviceUnlockObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDSPSleepSessionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPDeviceUnlockMonitor *deviceUnlockManager; // ivar: _deviceUnlockManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HDSPSleepSessionPersistence> *persistence; // ivar: _persistence
@property (readonly, nonatomic) os_unfair_lock_s sessionLock; // ivar: _sessionLock
@property (readonly) Class superclass;


+(id)_archivedSessionDirectory;
+(id)_archivedSessionFile;
-(BOOL)_hasUnprocessedSessions;
-(id)_unprocessedSessions;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 persistence:(id)arg1 ;
-(id)saveSession:(id)arg0 ;
-(void)_locked_savePendingSessions;
-(void)_waitForFirstUnlock;
-(void)_withLock:(id)arg0 ;
-(void)archiveSession:(id)arg0 ;
-(void)deviceHasBeenUnlocked;
-(void)removeSessionDataFile;
-(void)savePendingSessions;
-(void)sleepTracker:(id)arg0 didEndSession:(id)arg1 reason:(NSUInteger)arg2 ;
-(void)sleepTrackerDidStartSession:(id)arg0 ;
-(void)startSession;
-(void)stopSession;


@end


#endif