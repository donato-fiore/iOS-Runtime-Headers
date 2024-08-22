// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDSHAREDSCHEDULEREXECUTOR_H
#define FPDSHAREDSCHEDULEREXECUTOR_H


#import <Foundation/Foundation.h>


@interface FPDSharedSchedulerExecutor : NSObject

@property (readonly, nonatomic) id *executor; // ivar: _executor
@property (nonatomic) BOOL isDone; // ivar: _isDone


-(id)initWithExecutor:(id)arg0 ;


@end


#endif