// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNSBLUELISTMONITOR_H
#define UNSBLUELISTMONITOR_H

@class _CDContextualKeyPath;
@protocol _CDContext, OS_dispatch_queue, UNSBlueListMonitorDelegate;

#import <Foundation/Foundation.h>


@interface UNSBlueListMonitor : NSObject {
    BOOL _budgetExhausted;
    id<_CDContext> *_context;
    _CDContextualKeyPath *_blueListKeyPath;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (weak, nonatomic) NSObject<UNSBlueListMonitorDelegate> *delegate; // ivar: _delegate


-(BOOL)shouldBoostOpportunisticTopicsToEnabled;
-(id)init;
-(void)_startMonitoring;


@end


#endif