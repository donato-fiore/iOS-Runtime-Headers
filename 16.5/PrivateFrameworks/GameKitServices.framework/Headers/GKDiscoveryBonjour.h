// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKDISCOVERYBONJOUR_H
#define GKDISCOVERYBONJOUR_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GKDiscoveryBonjour : NSObject {
    id *_collisionCallback;
    int _listeningPort;
}


@property (nonatomic) *_DNSServiceRef_t advertiseRef; // ivar: _advertiseRef
@property (copy, nonatomic) id *browseCallback; // ivar: _browseCallback
@property (nonatomic) *_DNSServiceRef_t browseRef; // ivar: _browseRef
@property (copy, nonatomic) id *connectionCallback; // ivar: _connectionCallback
@property (retain, nonatomic) NSMutableArray *launchdSources; // ivar: _launchdSources
@property (retain, nonatomic) NSMutableDictionary *resolveContainers; // ivar: _resolveContainers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resolveContainersSyncQueue; // ivar: _resolveContainersSyncQueue
@property (copy, nonatomic) NSString *serviceDomain; // ivar: _serviceDomain
@property (copy, nonatomic) id *serviceNameCollisionCallback; // ivar: _serviceNameCollisionCallback
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(BOOL)isAppleTV;
-(id)init;
-(id)initWithDomain:(id)arg0 type:(id)arg1 ;
-(int)ipV4Socket;
-(int)ipV6Socket;
-(int)resolveName:(id)arg0 onIndex:(unsigned int)arg1 withCompletionHandler:(id)arg2 ;
-(int)startBrowsing:(id)arg0 ;
-(void)closeListeningSockets;
-(void)createDispatchEventWithSocket:(int)arg0 ;
-(void)dealloc;
-(void)sendBonjourRegistrationEvent:(id)arg0 discoveryInfo:(id)arg1 ;
-(void)setupBothListeningSockets;
-(void)setupListeningSockets;
-(void)startAdvertisingServiceName:(id)arg0 discoveryInfo:(id)arg1 ;
-(void)stopAdvertising;
-(void)stopBrowsing;
-(void)stopResolve:(id)arg0 ;


@end


#endif