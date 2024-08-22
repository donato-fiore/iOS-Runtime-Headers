// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAREACHABILITY_H
#define DAREACHABILITY_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DAReachability : NSObject {
    NSHashTable *_delegates;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedReachability;
-(BOOL)_monitoringReachability;
-(id)init;
-(void)_notifyDelegatesNetworkReachable;
-(void)_startMonitoringReachability;
-(void)_stopMonitoringReachability;
-(void)addDelegate:(id)arg0 ;
-(void)muckWithDelegates:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif