// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFPERSONALHOTSPOTSTATEMONITOR_H
#define WFPERSONALHOTSPOTSTATEMONITOR_H

@class NSRunLoop, NSThread;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFClient.h"

@interface WFPersonalHotspotStateMonitor : NSObject

@property NSRunLoop *callbackRunLoop; // ivar: _callbackRunLoop
@property (retain, nonatomic) NSThread *callbackThread; // ivar: _callbackThread
@property (retain, nonatomic) WFClient *client; // ivar: _client
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue


-(id)init;
-(void)_runManagerCallbackThread;
-(void)_spawnManagerCallbackThread;
-(void)asyncMISDiscoveryState:(id)arg0 ;
-(void)dealloc;
-(void)setMISDiscoveryState:(BOOL)arg0 immediateDisable:(BOOL)arg1 ;


@end


#endif