// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKDEVICEACTIVITYLEVELMONITOR_H
#define _DKDEVICEACTIVITYLEVELMONITOR_H

@class DKMonitor, _CDContextualKeyPath, NSDate;
@protocol _CDLocalContext, OS_dispatch_source;



@interface _DKDeviceActivityLevelMonitor : DKMonitor

@property (retain, nonatomic) NSObject<_CDLocalContext> *context; // ivar: _context
@property (nonatomic) NSUInteger currentInUseStatus; // ivar: _currentInUseStatus
@property (retain, nonatomic) NSObject<OS_dispatch_source> *debounceTimer; // ivar: _debounceTimer
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) _CDContextualKeyPath *inUseStatus; // ivar: _inUseStatus
@property (nonatomic) BOOL initialized; // ivar: _initialized
@property (retain, nonatomic) _CDContextualKeyPath *keyPathForDeviceToppingOff; // ivar: _keyPathForDeviceToppingOff
@property (retain, nonatomic) _CDContextualKeyPath *keyPathForReducedPerfStateStatus; // ivar: _keyPathForReducedPerfStateStatus
@property (nonatomic) NSUInteger lastInUseStatus; // ivar: _lastInUseStatus
@property (retain, nonatomic) NSDate *lastSetActiveDate; // ivar: _lastSetActiveDate
@property (retain, nonatomic) _CDContextualKeyPath *lastUseDate; // ivar: _lastUseDate
@property (nonatomic) BOOL limitsImposed; // ivar: _limitsImposed
@property (nonatomic) BOOL limitsInitialized; // ivar: _limitsInitialized
@property (nonatomic) int siriToken; // ivar: _siriToken
@property (nonatomic) NSUInteger userActivityNotificationHandle; // ivar: _userActivityNotificationHandle


+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(NSUInteger)arg0 ;
+(id)entitlements;
+(id)eventStream;
+(void)initialize;
-(void)deactivate;
-(void)dealloc;
-(void)handleUserActivity:(int)arg0 ;
-(void)setLastActivityDate:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;
-(void)updateActivityDateAndInUseState:(NSUInteger)arg0 ;
-(void)updateActivityInUseState:(NSUInteger)arg0 ;
-(void)updatePerformanceThrottleStatusWithLevel:(NSUInteger)arg0 ;


@end


#endif