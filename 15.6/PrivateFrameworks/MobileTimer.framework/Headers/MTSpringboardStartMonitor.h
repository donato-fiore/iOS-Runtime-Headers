// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSPRINGBOARDSTARTMONITOR_H
#define MTSPRINGBOARDSTARTMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MTObserverStore.h"

@interface MTSpringboardStartMonitor : NSObject {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
    MTObserverStore *_observers;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedInstance;
-(BOOL)_checkSpringBoardStarted;
-(BOOL)isSpringboardStarted;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveSpringboardStarted:(BOOL)arg0 ;
-(void)enumerateObservers:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif