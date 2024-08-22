// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMETRICS_H
#define ATXMETRICS_H

@class PETScalarEventTracker;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXMetrics : NSObject {
    NSObject<OS_dispatch_queue> *_loggingQueue;
    PETScalarEventTracker *_viewTracker;
    PETScalarEventTracker *_executeTracker;
    PETScalarEventTracker *_errorTracker;
}




+(id)_sharedInstance;
+(void)logActionExecuteForType:(NSInteger)arg0 inContext:(NSInteger)arg1 ;
+(void)logActionViewForType:(NSInteger)arg0 inContext:(NSInteger)arg1 ;
+(void)logError:(NSInteger)arg0 inContext:(NSInteger)arg1 ;
-(id)init;
-(void)_logActionExecuteForType:(NSInteger)arg0 inContext:(NSInteger)arg1 ;
-(void)_logActionViewForType:(NSInteger)arg0 inContext:(NSInteger)arg1 ;
-(void)_logError:(NSInteger)arg0 inContext:(NSInteger)arg1 ;


@end


#endif