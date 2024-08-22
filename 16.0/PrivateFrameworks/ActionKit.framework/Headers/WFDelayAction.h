// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDELAYACTION_H
#define WFDELAYACTION_H

@class WFAction, WFAutoIncrementingProgress;
@protocol OS_dispatch_source;



@interface WFDelayAction : WFAction

@property (retain, nonatomic) WFAutoIncrementingProgress *delayProgress; // ivar: _delayProgress
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


-(BOOL)isProgressIndeterminate;
-(void)finishRunningWithError:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif