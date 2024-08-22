// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINESCHEDULERBLOCKER_H
#define CPLENGINESCHEDULERBLOCKER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CPLEngineScheduler.h"

@interface CPLEngineSchedulerBlocker : NSObject {
    BOOL _blocking;
}


@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) CPLEngineScheduler *scheduler; // ivar: _scheduler


-(id)initWithReason:(id)arg0 scheduler:(id)arg1 ;
-(void)dealloc;
-(void)unblock;


@end


#endif