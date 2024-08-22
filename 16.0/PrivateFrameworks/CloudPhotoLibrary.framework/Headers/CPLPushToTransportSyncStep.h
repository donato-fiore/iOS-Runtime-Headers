// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPUSHTOTRANSPORTSYNCSTEP_H
#define CPLPUSHTOTRANSPORTSYNCSTEP_H



#import "CPLSimpleTaskSyncStep.h"

@interface CPLPushToTransportSyncStep : CPLSimpleTaskSyncStep

@property (readonly, nonatomic) BOOL highPriority; // ivar: _highPriority


-(id)initWithSyncManager:(id)arg0 syncSession:(id)arg1 highPriority:(BOOL)arg2 ;
-(id)newTask;
-(void)cancelAllTasks:(BOOL)arg0 ;


@end


#endif