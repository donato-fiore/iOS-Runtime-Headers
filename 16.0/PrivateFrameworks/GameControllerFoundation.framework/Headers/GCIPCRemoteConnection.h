// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCIPCREMOTECONNECTION_H
#define GCIPCREMOTECONNECTION_H

@class NSXPCConnection, NSArray, NSString;
@protocol GCIPCConnection, OS_os_log;

#import <Foundation/Foundation.h>


@interface GCIPCRemoteConnection : NSObject <GCIPCConnection>

 {
    uint8_t _invalid;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (copy) NSArray *interruptionHandlers; // ivar: _interruptionHandlers
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (copy) NSArray *invalidationHandlers; // ivar: _invalidationHandlers
@property (readonly) NSObject<OS_os_log> *log;
@property (readonly) int peerAuditSessionIdentifier;
@property ? peerAuditToken;
@property (readonly) NSString *peerBundleIdentifier;
@property (readonly) unsigned int peerEffectiveGroupIdentifier;
@property (readonly) unsigned int peerEffectiveUserIdentifier;
@property (readonly) int peerProcessIdentifier;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToConnection:(id)arg0 ;
-(id)addInterruptionHandler:(id)arg0 ;
-(id)addInvalidationHandler:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(id)peerValueForEntitlement:(id)arg0 ;
-(id)remoteProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteProxyWithErrorHandler:(id)arg0 ;
-(void)scheduleSendBarrierBlock:(id)arg0 ;


@end


#endif