// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIRECURRENTSCHEDULEFETCHROLLBACKSTASK_H
#define TRIRECURRENTSCHEDULEFETCHROLLBACKSTASK_H

@class NSString, NSArray, NSDate;
@protocol TRITask, TRITaskAttributing, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRIRecurrentScheduleFetchRollbacksTask : TRIBaseTask <TRITask>

 {
    id<TRITaskAttributing> *_taskAttribution;
    BOOL _isRepeatedInstance;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType; // ivar: taskType


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithAttribution:(id)arg0 ;
-(BOOL)_experimentsExistUsingContext:(id)arg0 ;
-(BOOL)_shouldScheduleUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredCapabilities;
-(id)_asPersistedTask;
-(id)_fetchRollbacksTaskUsingContext:(id)arg0 ;
-(id)_nextRecurrentTaskUsingContext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskAttribution:(id)arg0 isRepeatedInstance:(BOOL)arg1 ;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif