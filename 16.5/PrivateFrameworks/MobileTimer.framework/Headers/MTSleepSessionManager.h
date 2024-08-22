// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSLEEPSESSIONMANAGER_H
#define MTSLEEPSESSIONMANAGER_H

@class NSString, HKHealthStore;
@protocol MTSleepSessionTrackerDelegate, NAScheduler, MTSleepSessionTracker;

#import <Foundation/Foundation.h>

#import "MTAlarmStorage.h"

@interface MTSleepSessionManager : NSObject <MTSleepSessionTrackerDelegate>



@property (retain, nonatomic) MTAlarmStorage *alarmStorage; // ivar: _alarmStorage
@property (copy, nonatomic) NSString *archivedSessionDataFile; // ivar: _archivedSessionDataFile
@property (copy, nonatomic) NSString *archivedSessionDataPath; // ivar: _archivedSessionDataPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (retain, nonatomic) NSObject<MTSleepSessionTracker> *sleepSessionTracker; // ivar: _sleepSessionTracker
@property (weak, nonatomic) NSObject<MTSleepSessionTrackerDelegate> *sleepSessionTrackerDelegate; // ivar: _sleepSessionTrackerDelegate
@property (readonly) Class superclass;


+(id)platformSpecificSourceBundleIdentifier;
+(id)sleepSampleWithInterval:(id)arg0 sampleType:(NSInteger)arg1 metadata:(id)arg2 ;
-(BOOL)_hasUnprocessedSessions;
-(id)_unprocessedSessions;
-(id)_writeSessionData;
-(id)_writeSessions:(id)arg0 ;
-(id)initWithAlarmStorage:(id)arg0 sleepCoordinator:(id)arg1 sleepSessionTracker:(id)arg2 ;
-(id)writeSession:(id)arg0 ;
-(void)_removeSessionDataFile;
-(void)archiveSession:(id)arg0 ;
-(void)deviceFirstUnlocked;
-(void)saveSessionData;
-(void)sleepSessionTracker:(id)arg0 sessionDidComplete:(id)arg1 ;
-(void)waitForUnlock;


@end


#endif