// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSBACKGROUNDACTIVITYSCHEDULER_H
#define NSBACKGROUNDACTIVITYSCHEDULER_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSBackgroundActivityScheduler : NSObject {
    NSString *_identifier;
    CGFloat _interval;
    CGFloat _tolerance;
    CGFloat _delay;
    id *_activity;
    NSObject<OS_xpc_object> *_additionalProperties;
    NSInteger _qualityOfService;
    NSObject<OS_xpc_object> *_currentActivity;
    NSInteger _flags;
    os_unfair_lock_s _invalidateLock;
    BOOL _repeats;
    BOOL _preregistered;
    BOOL _appRefresh;
}


@property (getter=_isAppRefresh) BOOL _appRefresh;
@property (copy) id *checkInHandler; // ivar: _checkInHandler
@property CGFloat delay;
@property (readonly, copy) NSString *identifier;
@property CGFloat interval;
@property (getter=isPreregistered) BOOL preregistered;
@property NSInteger qualityOfService;
@property BOOL repeats;
@property (readonly) BOOL shouldDefer;
@property CGFloat tolerance;


-(id)currentActivity;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_setAdditionalXPCActivityProperties:(id)arg0 ;
-(void)_updateCriteria:(id)arg0 ;
-(void)_updateCriteriaForCompletedActivity:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)scheduleWithBlock:(id)arg0 ;
-(void)setCurrentActivity:(id)arg0 ;


@end


#endif