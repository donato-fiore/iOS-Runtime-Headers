// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDSHAREDSCHEDULER_H
#define FPDSHAREDSCHEDULER_H

@class NSString, NSMutableDictionary, NSDate;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface FPDSharedScheduler : NSObject {
    NSObject<OS_xpc_object> *_activity;
    NSObject<OS_xpc_object> *_criteria;
    NSString *_label;
    NSMutableDictionary *_executors;
    BOOL _registered;
    NSInteger _alwaysRunnableCount;
    NSDate *_lastRegistrationDate;
    NSDate *_lastTriggerDate;
    NSDate *_lastUsageDate;
    BOOL _preventRunning;
}


@property BOOL preventRunning;


+(id)queue;
-(BOOL)canOrIsForcedToRun;
-(BOOL)canRun;
-(BOOL)runIfPossible:(id)arg0 ;
-(BOOL)shouldPause;
-(id)description;
-(id)forceRunningWithReason:(SEL)arg0 ;
-(id)initWithLabel:(id)arg0 criteria:(id)arg1 ;
-(void)_removeKey:(id)arg0 ;
-(void)addKey:(id)arg0 executor:(id)arg1 ;
-(void)markDoneForKey:(id)arg0 ;
-(void)ping;
-(void)registerActivity;
-(void)removeKey:(id)arg0 ;
-(void)unregisterActivity;


@end


#endif