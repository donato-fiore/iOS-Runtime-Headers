// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDREMOTEAVAILABILITYSERVICECONNECTION_H
#define DNDREMOTEAVAILABILITYSERVICECONNECTION_H

@class BSServiceConnection, BSServiceQuality, NSString;
@protocol DNDRemoteAvailabilityServiceServerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDRemoteAvailabilityServiceConnection : NSObject <DNDRemoteAvailabilityServiceServerProtocol>

 {
    BSServiceConnection *_queue_connection;
    os_unfair_lock_s _lock;
    BSServiceQuality *_queuePriority;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)initialize;
-(id)_queue_remoteTarget;
-(id)init;
-(void)_queue_createConnection;
-(void)_queue_invalidateConnection;
-(void)getIsLocalUserAvailableWithRequestDetails:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif