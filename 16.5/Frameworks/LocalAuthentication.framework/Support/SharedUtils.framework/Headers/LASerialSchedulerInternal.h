// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LASERIALSCHEDULERINTERNAL_H
#define LASERIALSCHEDULERINTERNAL_H

@class NSMutableArray, NSString;
@protocol LAScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LASerialSchedulerInternal : NSObject <LAScheduler>

 {
    BOOL _running;
    BOOL _performingPendingOperations;
    NSMutableArray *_pendingOperations;
    NSObject<OS_dispatch_queue> *_workQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)_performPendingOperations;
-(void)_performPendingOperationsWithCompletion:(id)arg0 ;
-(void)_run;
-(void)_schedule:(id)arg0 ;
-(void)resume;
-(void)schedule:(id)arg0 ;


@end


#endif