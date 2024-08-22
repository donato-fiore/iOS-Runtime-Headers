// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LABASESERVICE_H
#define LABASESERVICE_H

@class NSMutableDictionary, NSXPCListener, NSString, NSXPCListenerEndpoint;
@protocol LAService, NSXPCListenerDelegate, LAServiceManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LABaseService : NSObject <LAService, NSXPCListenerDelegate>

 {
    NSMutableDictionary *_clients;
    BOOL _terminating;
    NSXPCListener *_listener;
}


@property (readonly, nonatomic) NSUInteger clientsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<LAServiceManager> *manager; // ivar: manager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSString *serviceID; // ivar: _serviceID
@property (readonly) Class superclass;


+(id)exportedInterface;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_disconnectClient:(id)arg0 ;
-(void)dealloc;


@end


#endif