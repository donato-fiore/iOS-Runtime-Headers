// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _IDSACTIVITYMONITORXPCCONNECTOR_H
#define _IDSACTIVITYMONITORXPCCONNECTOR_H

@class NSString, NSMutableDictionary;
@protocol IDSXPCActivityMonitorClient;

#import <Foundation/Foundation.h>

#import "IDSXPCDaemonController.h"

@interface _IDSActivityMonitorXPCConnector : NSObject <IDSXPCActivityMonitorClient>



@property (retain, nonatomic) IDSXPCDaemonController *daemonController; // ivar: _daemonController
@property (copy, nonatomic) id *daemonControllerBuilder; // ivar: _daemonControllerBuilder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *listenersByActivity; // ivar: _listenersByActivity
@property (readonly) Class superclass;
@property (retain, nonatomic) IDSXPCDaemonController *syncDaemonController; // ivar: _syncDaemonController
@property (copy, nonatomic) id *syncDaemonControllerBuilder; // ivar: _syncDaemonControllerBuilder


+(id)weakSharedInstance;
// -(id)initWithSyncDaemonControllerBuilder:(id)arg0 daemonControllerBuilder:(unk)arg1  ;
-(void)_handleInterruption;
-(void)_updateActivity:(id)arg0 isSupported:(BOOL)arg1 ;
-(void)addListener:(id)arg0 forTopic:(id)arg1 ;
-(void)dealloc;
-(void)handleIncomingUpdate:(id)arg0 onActivity:(id)arg1 completion:(id)arg2 ;
// -(void)performAction:(id)arg0 errorHandler:(unk)arg1  ;
-(void)performSyncAction:(id)arg0 ;
-(void)removeListener:(id)arg0 forTopic:(id)arg1 ;


@end


#endif