// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFXPCLISTENER_H
#define CWFXPCLISTENER_H

@class NSXPCListener, NSMutableArray, NSXPCInterface, NSArray, NSString;
@protocol NSXPCListenerDelegate, CWFXPCConnectionDelegate, OS_dispatch_queue, CWFXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface CWFXPCListener : NSObject <NSXPCListenerDelegate, CWFXPCConnectionDelegate>

 {
    NSXPCListener *_XPCListener;
    NSMutableArray *_mutableXPCConnections;
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSXPCInterface *_requestXPCInterface;
    NSXPCInterface *_eventXPCInterface;
    NSArray *_bootArgs;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<CWFXPCListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


-(BOOL)__allowXPCConnection:(id)arg0 serviceType:(NSInteger)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)XPCConnections;
-(id)init;
-(id)initWithServiceType:(NSInteger)arg0 ;
-(id)registeredActivities;
-(id)registeredEventIDs;
-(void)XPCConnection:(id)arg0 canceledXPCRequestsWithUUID:(id)arg1 ;
-(void)XPCConnection:(id)arg0 receivedXPCRequest:(id)arg1 ;
-(void)XPCConnection:(id)arg0 updatedRegisteredEventIDs:(id)arg1 ;
-(void)invalidate;
-(void)resume;
-(void)sendXPCEvent:(id)arg0 reply:(id)arg1 ;
-(void)suspend;


@end


#endif