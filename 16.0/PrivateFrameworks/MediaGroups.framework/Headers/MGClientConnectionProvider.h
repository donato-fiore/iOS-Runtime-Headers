// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGCLIENTCONNECTIONPROVIDER_H
#define MGCLIENTCONNECTIONPROVIDER_H

@class NSString, NSXPCConnection;
@protocol MGClientConnectionProviderProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MGClientConnectionProvider : NSObject <MGClientConnectionProviderProtocol>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCConnection *serviceConnection; // ivar: _serviceConnection
@property (readonly) Class superclass;


-(id)init;
-(id)serviceName;
-(void)dealloc;


@end


#endif