// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRXPCPROXY_H
#define NRXPCPROXY_H

@class NSString;
@protocol NRXPCProxyDelegate, NRNSXPCConnectionProtocol;

#import <Foundation/Foundation.h>


@interface NRXPCProxy : NSObject {
    id<NRXPCProxyDelegate> *_delegate;
    unsigned int _entitlementBitmask;
}


@property (readonly, nonatomic) NSString *appPath; // ivar: _appPath
@property (readonly, nonatomic) NSObject<NRNSXPCConnectionProtocol> *connection; // ivar: _connection
@property (readonly, nonatomic) BOOL invalidated; // ivar: _invalidated
@property (nonatomic) BOOL monitorClientForSuspension; // ivar: _monitorClientForSuspension
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) id *remoteObjectProxy;
@property (readonly, nonatomic) id *target; // ivar: _target


+(BOOL)requireAnEntitlement;
+(id)clientExportedInterface;
+(id)clientRemoteObjectInterface;
+(id)entitlements;
+(id)machServiceName;
+(id)serverExportedInterface;
+(id)serverRemoteObjectInterface;
-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)hasEntitlements;
-(id)initWithConnection:(id)arg0 delegate:(id)arg1 xpcTarget:(id)arg2 entitlementBitmask:(unsigned int)arg3 ;
-(void)_invalidate;


@end


#endif