// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMERMANAGER_H
#define MTTIMERMANAGER_H

@class NSString, NSNotificationCenter;
@protocol MTTimerManagerIntentSupport, MTTimerManagerProviding, MTUserDefaultNotificationObserver;

#import <Foundation/Foundation.h>

#import "MTTimerCache.h"
#import "MTXPCConnectionProvider.h"
#import "MTTimerManagerExportedObject.h"
#import "MTMetrics.h"

@interface MTTimerManager : NSObject <MTTimerManagerIntentSupport, MTTimerManagerProviding, MTUserDefaultNotificationObserver>



@property (retain, nonatomic) MTTimerCache *cache; // ivar: _cache
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider; // ivar: _connectionProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MTTimerManagerExportedObject *exportedObject; // ivar: _exportedObject
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTMetrics *metrics; // ivar: _metrics
@property (retain, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, nonatomic) id *notificationObject;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MTTimerManagerIntentSupport> *timerManager;


+(CGFloat)defaultDuration;
+(void)setDefaultDuration:(CGFloat)arg0 ;
+(void)warmUp;
-(BOOL)_updateCurrentTimerWithStateSync:(NSUInteger)arg0 ;
-(BOOL)pauseCurrentTimerSync;
-(BOOL)resumeCurrentTimerSync;
-(BOOL)startCurrentTimerWithDurationSync:(CGFloat)arg0 ;
-(BOOL)stopCurrentTimerSync;
// -(id)_initWithConnectionProvidingBlock:(id)arg0 metrics:(unk)arg1  ;
// -(id)_initWithConnectionProvidingBlock:(id)arg0 metrics:(unk)arg1 notificationCenter:(id)arg2  ;
-(id)_runningTimerFromCurrentTimer:(id)arg0 withDuration:(CGFloat)arg1 ;
-(id)_updateCurrentTimerWithState:(NSUInteger)arg0 ;
-(id)_updateTimer:(id)arg0 doSynchronous:(BOOL)arg1 ;
-(id)_validateCanStartTimer:(id)arg0 ;
-(id)addTimer:(id)arg0 ;
-(id)currentTimer;
-(id)dismissTimerWithIdentifier:(id)arg0 ;
-(id)getCurrentTimerSync;
-(id)init;
-(id)initWithConnectionProvider:(id)arg0 metrics:(id)arg1 ;
-(id)initWithConnectionProvider:(id)arg0 metrics:(id)arg1 notificationCenter:(id)arg2 ;
-(id)initWithMetrics:(id)arg0 ;
-(id)nextTimer;
-(id)nextTimersForDate:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(id)pauseCurrentTimer;
-(id)removeTimer:(id)arg0 ;
-(id)repeatTimerWithIdentifier:(id)arg0 ;
-(id)resumeCurrentTimer;
-(id)startCurrentTimerWithDuration:(CGFloat)arg0 ;
-(id)stopCurrentTimer;
-(id)timers;
-(id)timersSync;
-(id)updateTimer:(id)arg0 ;
-(void)_getCachedTimersWithFuture:(id)arg0 finishBlock:(id)arg1 ;
-(void)checkIn;
-(void)dealloc;
-(void)reconnect;


@end


#endif