// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMXPCACTIVITY_H
#define FMXPCACTIVITY_H

@class NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FMQueueSynchronizer.h"

@interface FMXPCActivity : NSObject {
    os_unfair_lock_s lock;
}


@property (weak, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (nonatomic) BOOL checkedInAtLeastOnce; // ivar: _checkedInAtLeastOnce
@property (copy, nonatomic) id *criteriaBlock; // ivar: _criteriaBlock
@property (copy, nonatomic) id *handlerBlock; // ivar: _handlerBlock
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMQueueSynchronizer *queueSynchronizer; // ivar: _queueSynchronizer
@property (copy, nonatomic) id *registrationBlock; // ivar: _registrationBlock


-(BOOL)continue;
-(BOOL)defer;
-(BOOL)done;
-(BOOL)shouldDefer;
-(NSInteger)updateCriteriaForActivity:(id)arg0 ;
-(id)_getActivity;
-(id)getCriteria;
// -(id)initWithName:(id)arg0 qos:(unsigned int)arg1 criteriaBlock:(id)arg2 handler:(unk)arg3  ;
-(void)activityHandler:(id)arg0 ;
-(void)processCheckin:(id)arg0 ;
-(void)register;
-(void)unregister;
-(void)updateCriteria;


@end


#endif