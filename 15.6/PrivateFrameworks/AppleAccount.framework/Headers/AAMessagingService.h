// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAMESSAGINGSERVICE_H
#define AAMESSAGINGSERVICE_H

@class IDSService, IDSIDQueryController, NSString, NSMutableArray;
@protocol IDSServiceDelegate, AAIDSMessagingServiceInternal, AAIDSMessagingService, OS_dispatch_queue, AAMessagingServiceDelegate;

#import <Foundation/Foundation.h>


@interface AAMessagingService : NSObject <IDSServiceDelegate, AAIDSMessagingServiceInternal, AAIDSMessagingService>

 {
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    IDSIDQueryController *_queryController;
    NSString *_serviceName;
    NSObject<OS_dispatch_queue> *_incomingMessageQueue;
    os_unfair_lock_s _lock;
}


@property (weak, nonatomic) NSObject<AAMessagingServiceDelegate> *custodianDelegate; // ivar: _custodianDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<AAMessagingServiceDelegate> *inheritanceDelegate; // ivar: _inheritanceDelegate
@property (readonly, copy, nonatomic) NSMutableArray *pendingCustodianMessages; // ivar: _pendingCustodianMessages
@property (readonly, copy, nonatomic) NSMutableArray *pendingInheritanceMessages; // ivar: _pendingInheritanceMessages
@property (readonly) Class superclass;


+(id)sharedService;
-(id)_createNewCapabilitySetFrom:(id)arg0 ;
-(id)_optionsDictionaryWithResponseIdentifier:(id)arg0 fireAndForget:(BOOL)arg1 requiredCapabilities:(id)arg2 lackingCapabilities:(id)arg3 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)sendMessage:(id)arg0 destinations:(id)arg1 responseIdentifier:(id)arg2 fireAndForget:(BOOL)arg3 requiredCapabilities:(id)arg4 lackingCapabilities:(id)arg5 error:(*id)arg6 ;
-(void)_addMessageToPendingCustodianMessages:(id)arg0 ;
-(void)_addMessageToPendingInheritanceMessages:(id)arg0 ;
-(void)_getCurrentRemoteDevices:(id)arg0 completion:(id)arg1 ;
-(void)_processMessage:(id)arg0 ;
-(void)_processPendingIDSMessagesOfType:(NSInteger)arg0 ;
-(void)doDestinations:(id)arg0 haveIneligibleDeviceForCapability:(id)arg1 completion:(id)arg2 ;
-(void)fetchCapability:(id)arg0 destinations:(id)arg1 completion:(id)arg2 ;
-(void)partitionByCapability:(id)arg0 completion:(id)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg0 account:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;


@end


#endif