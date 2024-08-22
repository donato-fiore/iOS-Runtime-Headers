// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GAXTIMERESTRICTIONMANAGER_H
#define GAXTIMERESTRICTIONMANAGER_H

@class NSMutableSet, NSMutableArray, AXAccessQueue, AXAccessQueueTimer, NSDate;
@protocol GAXTimeRestrictionManagerDelegate;

#import <Foundation/Foundation.h>


@interface GAXTimeRestrictionManager : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) NSMutableSet *alarmDurationsInSeconds; // ivar: _alarmDurationsInSeconds
@property (retain, nonatomic) NSMutableArray *alarmTimers; // ivar: _alarmTimers
@property (retain, nonatomic) AXAccessQueue *assertedAccessQueue; // ivar: _assertedAccessQueue
@property (weak, nonatomic) NSObject<GAXTimeRestrictionManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger expirationDurationInSeconds; // ivar: _expirationDurationInSeconds
@property (retain, nonatomic) AXAccessQueueTimer *expirationTimer; // ivar: _expirationTimer
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly, nonatomic) NSInteger remainingTimeInSeconds;
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


-(id)description;
-(id)initWithAssertedAccessQueue:(id)arg0 ;
-(void)_addAlarmForDuration:(NSInteger)arg0 ;
-(void)_removeAllAlarmTimers;
-(void)_removeAllTimers;
-(void)_removeExpirationTimer;
-(void)_scheduleTimers;
-(void)beginWithDuration:(NSInteger)arg0 ;
-(void)cancel;
-(void)pause;
-(void)resume;


@end


#endif