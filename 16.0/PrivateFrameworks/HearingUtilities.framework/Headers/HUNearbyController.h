// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNEARBYCONTROLLER_H
#define HUNEARBYCONTROLLER_H

@class NSArray, NSString, NSMutableDictionary, NSMutableArray, IDSService;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HUNearbyController : NSObject <IDSServiceDelegate>

 {
    os_unfair_lock_s _syncLock;
}


@property (copy, nonatomic) NSArray *availableDevices; // ivar: _availableDevices
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableDictionary *discoveryUpdates; // ivar: _discoveryUpdates
@property (retain, nonatomic) NSMutableDictionary *domainQueues; // ivar: _domainQueues
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *loggingUpdates; // ivar: _loggingUpdates
@property (retain, nonatomic) NSMutableDictionary *messageUpdates; // ivar: _messageUpdates
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nearbyUpdatesQueue; // ivar: _nearbyUpdatesQueue
@property (retain, nonatomic) NSMutableArray *registeredDomains; // ivar: _registeredDomains
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(id)nearbyDeviceWithIdentifier:(id)arg0 ;
-(id)nearbyDevices;
-(void)discoverNearbyDevicesWithDomain:(id)arg0 ;
-(void)logMessage:(id)arg0 ;
-(void)nearbyDevicesDidUpdateWithNewDevices:(id)arg0 forDomain:(id)arg1 ;
-(void)registerBlock:(id)arg0 forKey:(id)arg1 withUpdateGroup:(id)arg2 forDomain:(id)arg3 withListener:(id)arg4 ;
// -(void)registerDiscoveryBlock:(id)arg0 forDomain:(unk)arg1 withListener:(id)arg2  ;
// -(void)registerLoggingBlock:(id)arg0 forDomain:(unk)arg1 withListener:(id)arg2  ;
// -(void)registerMessageBlock:(id)arg0 forDomain:(unk)arg1 withListener:(id)arg2  ;
-(void)registerQueue:(id)arg0 forDomain:(id)arg1 ;
-(void)sendMessage:(id)arg0 toDevicesWithDomain:(id)arg1 withPriority:(NSUInteger)arg2 ;
-(void)sendMessage:(id)arg0 withDomain:(id)arg1 toDevices:(id)arg2 withPriority:(NSUInteger)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 connectedDevicesChanged:(id)arg1 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)stopDiscoveringDevicesWithDomain:(id)arg0 ;


@end


#endif