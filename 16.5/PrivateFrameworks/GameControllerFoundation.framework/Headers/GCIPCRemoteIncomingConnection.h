// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCIPCREMOTEINCOMINGCONNECTION_H
#define GCIPCREMOTEINCOMINGCONNECTION_H

@class NSString;
@protocol GCIPCIncomingConnection;


#import "GCIPCRemoteConnection.h"

@interface GCIPCRemoteIncomingConnection : GCIPCRemoteConnection <GCIPCIncomingConnection>



@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly) int peerAuditSessionIdentifier;
@property ? peerAuditToken;
@property (readonly) NSString *peerBundleIdentifier;
@property (readonly) unsigned int peerEffectiveGroupIdentifier;
@property (readonly) unsigned int peerEffectiveUserIdentifier;
@property (readonly) int peerProcessIdentifier;


-(id)initWithConnection:(id)arg0 ;
-(id)remoteProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteProxyWithErrorHandler:(id)arg0 ;


@end


#endif