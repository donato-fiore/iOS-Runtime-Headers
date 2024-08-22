// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMOTEAUPBSERVER_H
#define REMOTEAUPBSERVER_H

@class NSXPCConnection;
@protocol AUPBServing;

#import <Foundation/Foundation.h>


@interface RemoteAUPBServer : NSObject {
    vector<NSObject<OS_dispatch_semaphore> *, std::allocator<NSObject<OS_dispatch_semaphore> *>> replySemas;
}


@property (retain, nonatomic) NSObject<AUPBServing> *proxyInterface; // ivar: proxyInterface
@property (nonatomic) *OpaqueAUPBServer ref; // ivar: ref
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: xpcConnection


-(id)description;
-(void)addSema:(id)arg0 ;
-(void)dealloc;
-(void)removeSema:(id)arg0 ;
-(void)signalAllSemaphores;


@end


#endif