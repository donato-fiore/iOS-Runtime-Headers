// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BAAGENTSYSTEMPROXY_H
#define BAAGENTSYSTEMPROXY_H

@class NSXPCConnection, NSString;
@protocol BAClientSystemXPCProtocol;

#import <Foundation/Foundation.h>

#import "BAAppStoreProgressConfiguration.h"

@interface BAAgentSystemProxy : NSObject <BAClientSystemXPCProtocol>

 {
    os_unfair_lock_s _connectionLock;
    os_unfair_lock_s _progressObserverLock;
    NSXPCConnection *_connection;
    BAAppStoreProgressConfiguration *_recentProgressConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)applicationEventPerformedWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)applicationPrepareWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)applicationShouldTriggerPeriodicWithIdentifier:(id)arg0 bundleURLPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateAppStoreProgressObservationWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)receiveAppStoreProgressWithAppBundleIdentifier:(id)arg0 progressInfo:(id)arg1 ;
-(void)runDebugCommand:(id)arg0 ;


@end


#endif