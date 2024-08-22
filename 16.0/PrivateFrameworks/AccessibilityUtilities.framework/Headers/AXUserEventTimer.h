// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXUSEREVENTTIMER_H
#define AXUSEREVENTTIMER_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXUserEventTimer : NSObject {
    NSObject<OS_dispatch_queue> *_assertionQueue;
    NSHashTable *_assertions;
}




+(id)sharedInstance;
-(BOOL)_canUseIdleTimerServices;
-(id)acquireAssertionToDisableIdleTimerWithReason:(id)arg0 ;
-(id)init;
-(void)_startTrackingPoorMansAssertion:(id)arg0 ;
-(void)_stopTrackingPoorMansAssertion:(id)arg0 ;
-(void)userEventOccurred;


@end


#endif