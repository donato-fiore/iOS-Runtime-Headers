// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXATESTAPPRELAYCLIENT_H
#define IXATESTAPPRELAYCLIENT_H

@class NSXPCConnection;
@protocol IXATestAppRelayProtocol;

#import <Foundation/Foundation.h>


@interface IXATestAppRelayClient : NSObject <IXATestAppRelayProtocol>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(id)init;
-(void)_disconnect;
-(void)_initializeConnection;
-(void)dealloc;
-(void)fetchEndpointForServiceName:(id)arg0 completion:(id)arg1 ;
-(void)registerEndpoint:(id)arg0 forServiceName:(id)arg1 withEntitlement:(id)arg2 canReplace:(BOOL)arg3 completion:(id)arg4 ;
-(void)unregisterEndpointForServiceName:(id)arg0 completion:(id)arg1 ;


@end


#endif