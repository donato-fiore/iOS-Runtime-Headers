// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKIDVREMOTEDEVICESERVICECLIENT_H
#define NPKIDVREMOTEDEVICESERVICECLIENT_H

@class PKXPCService, NSString;
@protocol PKXPCServiceDelegate;

#import <Foundation/Foundation.h>


@interface NPKIDVRemoteDeviceServiceClient : NSObject <PKXPCServiceDelegate>

 {
    PKXPCService *_remoteService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


-(id)_errorHandlerWithCompletion:(SEL)arg0 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)initWithRemoteServiceName:(id)arg0 ;
-(void)didReceiveEvent:(NSUInteger)arg0 fromRemoteDeviceWithID:(id)arg1 ;
-(void)remoteService:(id)arg0 didEstablishConnection:(id)arg1 ;
-(void)remoteService:(id)arg0 didInterruptConnection:(id)arg1 ;


@end


#endif