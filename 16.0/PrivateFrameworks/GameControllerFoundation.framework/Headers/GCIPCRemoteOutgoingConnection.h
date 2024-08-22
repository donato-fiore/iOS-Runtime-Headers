// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCIPCREMOTEOUTGOINGCONNECTION_H
#define GCIPCREMOTEOUTGOINGCONNECTION_H

@class NSString;
@protocol GCIPCOutgoingConnection;


#import "GCIPCRemoteConnection.h"

@interface GCIPCRemoteOutgoingConnection : GCIPCRemoteConnection <GCIPCOutgoingConnection>



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