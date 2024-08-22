// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKIDVREMOTEDEVICESERVICESERVER_H
#define NPKIDVREMOTEDEVICESERVICESERVER_H

@class PDXPCService, NSString;
@protocol NPKIDVRemoteDeviceServiceServerProtocol, NPKIDVRemoteDeviceServiceServerDelegate;



@interface NPKIDVRemoteDeviceServiceServer : PDXPCService <NPKIDVRemoteDeviceServiceServerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKIDVRemoteDeviceServiceServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 delegate:(id)arg1 ;
-(void)didReceiveEvent:(NSUInteger)arg0 fromRemoteDeviceWithID:(id)arg1 ackHandler:(id)arg2 ;


@end


#endif