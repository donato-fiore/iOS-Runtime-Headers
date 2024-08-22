// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKSUBCREDENTIALPROVISIONINGSERVICE_H
#define NPKSUBCREDENTIALPROVISIONINGSERVICE_H

@class NSString, NSMutableDictionary, IDSService;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKSubcredentialProvisioningService : NSObject <IDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests; // ivar: _outstandingRequests
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *subcredentialProvisioningQueue; // ivar: _subcredentialProvisioningQueue
@property (retain, nonatomic) IDSService *subcredentialService; // ivar: _subcredentialService
@property (readonly) Class superclass;


-(BOOL)isPairedDeviceConnected;
-(id)_sendOptions;
-(id)_sendProtobuf:(id)arg0 responseExpected:(BOOL)arg1 extraOptions:(id)arg2 ;
-(id)init;
-(id)sendProtobuf:(id)arg0 responseExpected:(BOOL)arg1 ;
-(id)sendProtobuf:(id)arg0 responseExpected:(BOOL)arg1 extraOptions:(id)arg2 ;
-(void)_setUpSubcredentialProvisioningQueue;
-(void)_setUpSubcredentialProvisioningService;
-(void)_trackOutstandingRequestWithMessageIdentifier:(id)arg0 completionHandler:(id)arg1 errorHandler:(id)arg2 ;
-(void)registerProtobufActionsForService:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)trackOutstandingRequestWithMessageIdentifier:(id)arg0 completionHandler:(id)arg1 errorHandler:(id)arg2 ;


@end


#endif