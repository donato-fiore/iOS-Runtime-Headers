// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCIPCREMOTEOUTGOINGCONNECTION_H
#define _GCIPCREMOTEOUTGOINGCONNECTION_H

@class GCIPCRemoteConnection;
@protocol _GCIPCOutgoingConnection;



@interface _GCIPCRemoteOutgoingConnection : GCIPCRemoteConnection <_GCIPCOutgoingConnection>



@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;


+(id)sharedConnectionWorkloop;
-(id)debugDescription;
-(id)description;
-(id)initWithConnection:(id)arg0 ;
-(id)redactedDescription;
-(id)remoteProxy;
-(id)remoteProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteProxyWithErrorHandler:(id)arg0 ;


@end


#endif