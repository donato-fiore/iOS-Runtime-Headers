// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHIPXPCLISTENER_H
#define HMDCHIPXPCLISTENER_H

@class HMFObject, NSString, NSXPCInterface, NSXPCListener;
@protocol NSXPCListenerDelegate, HMFLogging, OS_dispatch_queue;


#import "HMDHomeManager.h"

@interface HMDCHIPXPCListener : HMFObject <NSXPCListenerDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSXPCInterface *exportedInterface; // ivar: _exportedInterface
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) NSXPCListener *listener; // ivar: _listener
@property (readonly, nonatomic) NSXPCInterface *remoteObjectInterface; // ivar: _remoteObjectInterface
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)createClientConnectionWithRemoteObjectProxy:(id)arg0 homeManager:(id)arg1 pid:(int)arg2 ;
-(id)initWithHomeManager:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif