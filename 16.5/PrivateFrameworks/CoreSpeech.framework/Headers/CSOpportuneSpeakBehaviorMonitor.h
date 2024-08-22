// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSOPPORTUNESPEAKBEHAVIORMONITOR_H
#define CSOPPORTUNESPEAKBEHAVIORMONITOR_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSOpportuneSpeakBehaviorMonitor : NSObject

@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)init;
-(void)notifyDidStartStreamWithContext:(id)arg0 audioProviderUUID:(id)arg1 successfully:(BOOL)arg2 option:(id)arg3 ;
-(void)notifyDidStopStream:(id)arg0 ;
-(void)notifyWillStartStreamWithContext:(id)arg0 audioProviderUUID:(id)arg1 option:(id)arg2 ;
-(void)notifyWillStopStream:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif