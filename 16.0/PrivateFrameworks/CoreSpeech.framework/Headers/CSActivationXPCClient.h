// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSACTIVATIONXPCCLIENT_H
#define CSACTIVATIONXPCCLIENT_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSActivationXPCClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection


-(id)_decodeError:(id)arg0 ;
-(id)init;
-(void)_handleListenerError:(id)arg0 ;
-(void)_handleListenerEvent:(id)arg0 ;
-(void)_sendMessage:(id)arg0 connection:(id)arg1 completion:(id)arg2 ;
-(void)connect;
-(void)dealloc;
-(void)notifyActivationEvent:(id)arg0 completion:(id)arg1 ;


@end


#endif