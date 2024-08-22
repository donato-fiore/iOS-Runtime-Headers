// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCDEADLINESOURCE_H
#define BRCDEADLINESOURCE_H

@class NSString;
@protocol OS_dispatch_workloop;

#import <Foundation/Foundation.h>

#import "BRCDeadlineScheduler.h"

@interface BRCDeadlineSource : NSObject {
    NSInteger _deadline;
    BRCDeadlineScheduler *_scheduler;
    int _suspendCount;
    BOOL _cancelled;
    BOOL _signaled;
    NSString *_name;
}


@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop; // ivar: _workloop


-(BOOL)willRunEvenHandler;
-(id)description;
-(id)initWithScheduler:(id)arg0 name:(id)arg1 ;
-(void)cancel;
-(void)resume;
-(void)runEventHandler;
-(void)signal;
-(void)signalWithDeadline:(NSInteger)arg0 ;
-(void)suspend;


@end


#endif