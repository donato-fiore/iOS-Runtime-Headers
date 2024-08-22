// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDMEDEVICESERVICE_H
#define DNDMEDEVICESERVICE_H

@class NSHashTable, NSString;
@protocol DNDRemoteServiceConnectionEventListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDMeDeviceService : NSObject <DNDRemoteServiceConnectionEventListener>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_listeners;
    BOOL _registeredForUpdates;
}


@property (readonly, copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)_queue_registerForStateUpdatesIfRequired;
-(id)_initWithClientIdentifier:(id)arg0 ;
-(void)addListener:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)queryCurrentStateWithCompletionHandler:(id)arg0 ;
-(void)remoteService:(id)arg0 didReceiveUpdatedMeDeviceState:(id)arg1 ;
-(void)removeListener:(id)arg0 ;


@end


#endif