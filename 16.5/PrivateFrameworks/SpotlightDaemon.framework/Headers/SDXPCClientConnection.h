// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SDXPCCLIENTCONNECTION_H
#define SDXPCCLIENTCONNECTION_H

@class CSXPCConnection;
@protocol OS_dispatch_queue;



@interface SDXPCClientConnection : CSXPCConnection

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue


-(id)initWithServiceName:(id)arg0 clientType:(NSInteger)arg1 ;
-(void)handleError:(id)arg0 ;
-(void)invalidationHandler;


@end


#endif