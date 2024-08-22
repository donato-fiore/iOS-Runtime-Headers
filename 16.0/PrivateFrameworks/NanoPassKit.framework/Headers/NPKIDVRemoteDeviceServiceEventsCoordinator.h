// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKIDVREMOTEDEVICESERVICEEVENTSCOORDINATOR_H
#define NPKIDVREMOTEDEVICESERVICEEVENTSCOORDINATOR_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NPKIDVRemoteDeviceServiceContext.h"

@interface NPKIDVRemoteDeviceServiceEventsCoordinator : NSObject {
    os_unfair_lock_s _serviceContextLock;
    NPKIDVRemoteDeviceServiceContext *_serviceContext;
    NSString *_serviceContextPath;
    NSObject<OS_dispatch_queue> *_remoteProcessNotificationQueue;
}


@property (readonly, nonatomic) NSString *remoteDeviceID;


-(NSUInteger)registerEvents:(NSUInteger)arg0 forServiceName:(id)arg1 ;
-(NSUInteger)unregisterEvents:(NSUInteger)arg0 forServiceName:(id)arg1 ;
-(id)init;
-(void)_insideLockPersistServiceContext;
-(void)_notifyProcessWithServiceNames:(id)arg0 deviceEvent:(NSUInteger)arg1 forDeviceID:(id)arg2 ;
-(void)initializeWithDevice:(id)arg0 ;
-(void)insideLockTeardownCurrentRemoteDeviceContextWithReason:(NSUInteger)arg0 ;
-(void)setNeedsPrearmCredential:(BOOL)arg0 ;
-(void)teardownCurrentRemoteDeviceContextWithReason:(NSUInteger)arg0 ;


@end


#endif