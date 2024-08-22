// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYSETUPCOORDINATOR_H
#define HMDACCESSORYSETUPCOORDINATOR_H

@class HMFObject, CHIPAccessoryServerBrowser, NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;



@interface HMDAccessorySetupCoordinator : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly) CHIPAccessoryServerBrowser *chipAccessoryServerBrowser; // ivar: _chipAccessoryServerBrowser
@property (readonly, copy) NSString *debugDescription;
@property (copy) id *decimalStringRepresentationCHIPAccessorySetupPayloadFactory; // ivar: _decimalStringRepresentationCHIPAccessorySetupPayloadFactory
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;
@property (copy) id *urlStringCHIPAccessorySetupPayloadFactory; // ivar: _urlStringCHIPAccessorySetupPayloadFactory
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_chipSetupPayloadForHMCHIPSetupPayload:(id)arg0 ;
-(id)_createCHIPSetupAccessoryPayloadWithSetupPayloadDecimalStringRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)_hmCHIPSetupPayloadForCHIPSetupPayload:(id)arg0 ;
-(id)_setupPayloadWithCHIPSetupPayload:(id)arg0 setupPayloadURL:(id)arg1 ;
-(id)createCHIPSetupAccessoryPayloadWithSetupPayloadURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 chipAccessoryServerBrowser:(id)arg2 ;
-(id)logIdentifier;
-(void)configure;
-(void)handleCancelStagedCHIPAccessoryPairingMessage:(id)arg0 ;
-(void)handleCreateCHIPSetupAccessoryPayloadMessage:(id)arg0 ;
-(void)handleCreateCHIPSetupCodeMessage:(id)arg0 ;
-(void)handleStageCHIPAccessoryPairingMessage:(id)arg0 ;


@end


#endif