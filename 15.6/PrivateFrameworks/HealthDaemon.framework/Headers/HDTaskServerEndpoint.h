// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDTASKSERVERENDPOINT_H
#define HDTASKSERVERENDPOINT_H

@class HDXPCListener, NSString, HKHealthStoreConfiguration, NSXPCListenerEndpoint, HKTaskConfiguration, NSUUID;
@protocol HDXPCListenerDelegate, HDTaskServerEndpointDelegate, HDTaskServer, HDTaskServerDelegate;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDTaskServerEndpoint : NSObject <HDXPCListenerDelegate>

 {
    HDXPCListener *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDTaskServerEndpointDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HKHealthStoreConfiguration *healthStoreConfiguration; // ivar: _healthStoreConfiguration
@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HKTaskConfiguration *taskConfiguration; // ivar: _taskConfiguration
@property (readonly, weak, nonatomic) NSObject<HDTaskServer> *taskServer; // ivar: _taskServer
@property (readonly, nonatomic) Class taskServerClass; // ivar: _taskServerClass
@property (weak, nonatomic) NSObject<HDTaskServerDelegate> *taskServerDelegate; // ivar: _taskServerDelegate
@property (readonly, copy, nonatomic) NSUUID *taskUUID; // ivar: _taskUUID


-(id)exportObjectForListener:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
-(id)initWithTaskServerClass:(Class)arg0 taskConfiguration:(id)arg1 healthStoreConfiguration:(id)arg2 taskUUID:(id)arg3 profile:(id)arg4 connectionQueue:(id)arg5 ;
-(void)connectionConfiguredForListener:(id)arg0 client:(id)arg1 exportedObject:(id)arg2 ;
-(void)connectionInvalidatedForListener:(id)arg0 client:(id)arg1 exportedObject:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)resume;


@end


#endif