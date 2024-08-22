// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSACCESSORYSIRICLIENTBEHAVIORMONITOR_H
#define CSACCESSORYSIRICLIENTBEHAVIORMONITOR_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSAccessorySiriClientBehaviorMonitor : NSObject

@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedInstance;
-(id)init;
-(void)_init;
-(void)notifyDidStartStreamWithContext:(id)arg0 successfully:(BOOL)arg1 option:(id)arg2 withEventUUID:(id)arg3 forAccessory:(id)arg4 ;
-(void)notifyDidStopStream:(id)arg0 reason:(NSUInteger)arg1 withEventUUID:(id)arg2 forAccessory:(id)arg3 ;
-(void)notifyWillStartStreamWithContext:(id)arg0 option:(id)arg1 forAccessory:(id)arg2 ;
-(void)notifyWillStopStream:(id)arg0 reason:(NSUInteger)arg1 forAccessory:(id)arg2 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif