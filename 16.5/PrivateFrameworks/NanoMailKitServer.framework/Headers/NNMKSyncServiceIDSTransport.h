// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKSYNCSERVICEIDSTRANSPORT_H
#define NNMKSYNCSERVICEIDSTRANSPORT_H

@class NSString, IDSService;
@protocol IDSServiceDelegate, NNMKSyncServiceTransport, NNMKSyncServiceTransportDelegate;

#import <Foundation/Foundation.h>


@interface NNMKSyncServiceIDSTransport : NSObject <IDSServiceDelegate, NNMKSyncServiceTransport>



@property (nonatomic) NSUInteger connectivityState; // ivar: _connectivityState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NNMKSyncServiceTransportDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceFailureForAllRequests;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSService *idsService; // ivar: _idsService
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) BOOL simulateCloudConnectedOnly;
@property (readonly) Class superclass;


-(CGFloat)_timeIntervalFromTimeoutCategory:(NSUInteger)arg0 ;
-(id)initWithServiceName:(id)arg0 queue:(id)arg1 delegate:(id)arg2 ;
-(id)sendProtobufData:(id)arg0 type:(NSUInteger)arg1 priority:(NSUInteger)arg2 timeout:(CGFloat)arg3 allowCloudDelivery:(BOOL)arg4 ;
-(id)sendProtobufData:(id)arg0 type:(NSUInteger)arg1 priority:(NSUInteger)arg2 timeoutCategory:(NSUInteger)arg3 allowCloudDelivery:(BOOL)arg4 ;
-(id)sendResourceAtURL:(id)arg0 metadata:(id)arg1 priority:(NSUInteger)arg2 timeoutCategory:(NSUInteger)arg3 ;
-(void)_handleConnectivityChange;
-(void)dealloc;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 hasBeenDeliveredWithContext:(id)arg3 ;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;
-(void)serviceSpaceDidBecomeAvailable:(id)arg0 ;


@end


#endif