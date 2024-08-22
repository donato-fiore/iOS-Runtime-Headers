// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANANNOUNCEMENTMANAGER_H
#define ANANNOUNCEMENTMANAGER_H

@class NSArray, NSUUID, NSMutableDictionary;
@protocol ANAnnouncementManagerDelegte, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ANAnnouncementManager : NSObject

@property (readonly, nonatomic) NSArray *allAnnouncementsSortedByReceipt;
@property (weak, nonatomic) NSObject<ANAnnouncementManagerDelegte> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUUID *endpointID; // ivar: _endpointID
@property (readonly, nonatomic) NSMutableDictionary *homeAnnouncements; // ivar: _homeAnnouncements
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly, nonatomic) NSMutableDictionary *timers; // ivar: _timers
@property (nonatomic) BOOL timersSuspended; // ivar: _timersSuspended


+(id)managerWithEndpointID:(id)arg0 ;
-(BOOL)_shouldAccept:(id)arg0 accept:(id)arg1 ;
-(id)announcementForID:(id)arg0 ;
-(id)announcementsForGroupID:(id)arg0 ;
-(id)announcementsForIDs:(id)arg0 ;
-(id)initWithEndpointID:(id)arg0 ;
-(void)_addAnnouncement:(id)arg0 home:(id)arg1 groupID:(id)arg2 ;
-(void)_addAnnouncementToReceiveQueue:(id)arg0 ;
-(void)_cleanDirectory;
-(void)_handleExpiredTimer:(id)arg0 withID:(id)arg1 ;
-(void)_loadStoredAnnouncements;
-(void)_notifyDelegateAnnouncementsChangedForGroupID:(id)arg0 ;
-(void)_removeAnnouncementWithID:(id)arg0 ;
-(void)_removeAnnouncementsForGroupID:(id)arg0 ;
-(void)_removeAnnouncementsHittingStorageAgeLimit;
-(void)_resetTimer:(id)arg0 ;
-(void)_startTimer:(id)arg0 ;
-(void)_startTimerWithID:(id)arg0 ;
-(void)_suspendTimer:(id)arg0 ;
-(void)addAnnouncement:(id)arg0 completion:(id)arg1 ;
-(void)cleanForExit;
-(void)pauseAllTimers;
-(void)removeAllAnnouncements;
-(void)removeOldAnnouncements;
-(void)resetAllTimers;
-(void)resumeAllTimers;
-(void)updateAnnouncement_sync:(id)arg0 statusFlags:(NSUInteger)arg1 ;


@end


#endif