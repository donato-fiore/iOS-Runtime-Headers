// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAAGGREGATEVISIBILITYSTATEMONITORHANDLE_H
#define PAAGGREGATEVISIBILITYSTATEMONITORHANDLE_H

@class NSMutableDictionary, NSString;
@protocol PAProcessStateMonitoringDelegate, PAProcessStateMonitoringEnding, OS_dispatch_source, OS_dispatch_queue, PAAggregateVisibilityStateMonitorDelegate;

#import <Foundation/Foundation.h>


@interface PAAggregateVisibilityStateMonitorHandle : NSObject <PAProcessStateMonitoringDelegate, PAProcessStateMonitoringEnding>

 {
    NSObject<OS_dispatch_source> *_startupTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_states;
    NSInteger _currentState;
    id<PAAggregateVisibilityStateMonitorDelegate> *_delegate;
    id<PAProcessStateMonitoringEnding> *_rawHandle;
    BOOL _startupPeriodElapsed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStartupInterval:(CGFloat)arg0 onQueue:(id)arg1 delegate:(id)arg2 ;
-(void)bindToRawHandle:(id)arg0 ;
-(void)invalidate;
-(void)recomputeCurrentState;
-(void)setVisibilityState:(NSInteger)arg0 forBundleID:(id)arg1 ;
-(void)startupIntervalExpired;


@end


#endif