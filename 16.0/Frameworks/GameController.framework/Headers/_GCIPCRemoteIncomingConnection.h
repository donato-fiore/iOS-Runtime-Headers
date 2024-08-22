// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCIPCREMOTEINCOMINGCONNECTION_H
#define _GCIPCREMOTEINCOMINGCONNECTION_H

@class GCIPCRemoteIncomingConnection, NSString;
@protocol _GCIPCIncomingConnection, _GCIPCProcess;



@interface _GCIPCRemoteIncomingConnection : GCIPCRemoteIncomingConnection <_GCIPCIncomingConnection>



@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;
@property (readonly) int peerAuditSessionIdentifier;
@property (readonly) ? peerAuditToken;
@property (readonly) NSString *peerBundleIdentifier;
@property (readonly) unsigned int peerEffectiveGroupIdentifier;
@property (readonly) unsigned int peerEffectiveUserIdentifier;
@property (readonly) int peerProcessIdentifier;
@property (readonly, weak, nonatomic) NSObject<_GCIPCProcess> *process; // ivar: _process


-(id)initWithConnection:(id)arg0 ;
-(id)initWithConnection:(id)arg0 fromProcess:(id)arg1 ;


@end


#endif