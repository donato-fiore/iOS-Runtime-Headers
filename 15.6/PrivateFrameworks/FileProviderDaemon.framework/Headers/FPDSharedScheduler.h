// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDSHAREDSCHEDULER_H
#define FPDSHAREDSCHEDULER_H

@class NSString, NSMutableDictionary, NSDate;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface FPDSharedScheduler : NSObject {
    NSObject<OS_xpc_object> *_activity;
    id *_criteriaBuilder;
    NSString *_label;
    NSMutableDictionary *_executors;
    BOOL _registered;
    NSInteger _alwaysRunnableCount;
    NSDate *_lastRegistrationDate;
    NSDate *_lastTriggerDate;
    NSDate *_lastUsageDate;
    BOOL _preventRunning;
    BOOL _manualScheduling;
    BOOL _wasCheckedIn;
}


@property (getter=useManualScheduling) BOOL manualScheduling;
@property BOOL preventRunning;


+(id)queue;
+(id)schedulerWithLabel:(id)arg0 ;
+(void)checkIn;
-(BOOL)canOrIsForcedToRun;
-(BOOL)canRun;
-(BOOL)runIfPossible:(id)arg0 ;
-(BOOL)shouldPause;
-(id)description;
-(id)forceRunningWithReason:(SEL)arg0 ;
-(id)initWithLabel:(id)arg0 criteria:(id)arg1 ;
-(id)initWithLabel:(id)arg0 criteriaBuilder:(id)arg1 ;
-(void)_removeKey:(id)arg0 ;
-(void)addKey:(id)arg0 executor:(id)arg1 ;
-(void)markDoneForKey:(id)arg0 ;
-(void)ping;
-(void)registerActivity;
-(void)removeKey:(id)arg0 ;
-(void)unregisterActivity;


@end


#endif