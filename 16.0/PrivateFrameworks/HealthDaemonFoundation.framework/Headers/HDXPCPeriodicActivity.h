// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDXPCPERIODICACTIVITY_H
#define HDXPCPERIODICACTIVITY_H

@class NSDate, NSString;
@protocol HDXPCActivityShim, OS_xpc_object, OS_os_log;

#import <Foundation/Foundation.h>


@interface HDXPCPeriodicActivity : NSObject <HDXPCActivityShim>

 {
    os_unfair_lock_s _lock;
    uint8_t _registered;
    NSObject<OS_xpc_object> *_criteria;
    NSObject<OS_xpc_object> *_currentActivity;
    NSInteger _state;
    BOOL _conditionsChanged;
    id *_handler;
    id<HDXPCActivityShim> *_activityShim;
    BOOL _unitTest_shouldDeferOverride;
}


@property (readonly, nonatomic) CGFloat baseInterval; // ivar: _baseInterval
@property (copy) NSObject<OS_xpc_object> *criteria;
@property (readonly) NSObject<OS_xpc_object> *currentActivity;
@property (readonly, copy) NSObject<OS_xpc_object> *currentCriteria;
@property (readonly, nonatomic) NSDate *earliestRunDate;
@property (readonly, nonatomic) NSInteger errorCount;
@property (readonly, nonatomic) BOOL isWaiting;
@property (readonly, nonatomic) NSDate *lastSuccessfulRunDate;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory; // ivar: _loggingCategory
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL shouldDefer;


+(void)registerDisabledPeriodicActivityWithName:(id)arg0 loggingCategory:(id)arg1 ;
-(BOOL)xpcActivity_setCompletionStatus:(NSInteger)arg0 activity:(id)arg1 ;
-(BOOL)xpcActivity_setState:(NSInteger)arg0 activity:(id)arg1 ;
-(BOOL)xpcActivity_shouldDefer:(id)arg0 ;
-(CGFloat)modifiedIntervalForCurrentState;
-(NSInteger)xpcActivity_getState:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 baseInterval:(CGFloat)arg1 criteria:(id)arg2 loggingCategory:(id)arg3 handler:(id)arg4 ;
-(id)xpcActivity_copyCriteria:(id)arg0 ;
-(void)dealloc;
-(void)didPerformActivityWithResult:(NSInteger)arg0 minimumRetryInterval:(CGFloat)arg1 activityStartDate:(id)arg2 error:(id)arg3 ;
-(void)externalConditionsChanged;
-(void)registerActivity;
-(void)unitTest_reset;
-(void)unitTest_setActivityShim:(id)arg0 ;
-(void)unitTest_synthesizeActivityFireWithCompletion:(id)arg0 ;
-(void)unregisterActivity;
-(void)updateCriteriaForModifiedIntervalForCurrentState;
-(void)xpcActivity_register:(char *)arg0 criteria:(id)arg1 handler:(id)arg2 ;
-(void)xpcActivity_unregister:(char *)arg0 ;


@end


#endif