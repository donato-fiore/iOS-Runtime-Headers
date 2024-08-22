// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCDRIVERCLIENTCONNECTION_H
#define _GCDRIVERCLIENTCONNECTION_H

@class GCIPCRemoteIncomingConnection;
@protocol _GCDeviceDriverConnection, _GCDriverServerInterface;



@interface _GCDriverClientConnection : GCIPCRemoteIncomingConnection <_GCDeviceDriverConnection>



@property (retain, nonatomic) NSObject<_GCDriverServerInterface> *exportedObject;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalid;


-(id)initWithConnection:(id)arg0 fromProcess:(id)arg1 ;
-(void)connectToDeviceService:(id)arg0 withClient:(id)arg1 reply:(id)arg2 ;


@end


#endif