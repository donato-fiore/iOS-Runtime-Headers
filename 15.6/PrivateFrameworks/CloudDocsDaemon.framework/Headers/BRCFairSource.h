// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCFAIRSOURCE_H
#define BRCFAIRSOURCE_H

@class NSString;
@protocol OS_dispatch_workloop;

#import <Foundation/Foundation.h>

#import "BRCFairScheduler.h"

@interface BRCFairSource : NSObject {
    NSUInteger _schedulerBitIndex;
    NSString *_name;
    BRCFairScheduler *_scheduler;
    int _suspendCount;
    BOOL _cancelled;
    BOOL _signaled;
}


@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop; // ivar: _workloop


-(id)description;
-(id)initWithName:(id)arg0 scheduler:(id)arg1 ;
-(void)_runEventHandler;
-(void)cancel;
-(void)resume;
-(void)signal;
-(void)suspend;


@end


#endif