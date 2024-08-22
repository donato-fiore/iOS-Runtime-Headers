// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYSETUPCOORDINATOR_H
#define HMDACCESSORYSETUPCOORDINATOR_H

@class HMFObject, HMMTRAccessoryServerBrowser, NSString, HMFMessageDispatcher, NSUUID, NSMutableDictionary;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;


#import "HMDCHIPDataSource.h"

@interface HMDAccessorySetupCoordinator : HMFObject <HMFLogging, HMFMessageReceiver>



@property (readonly) HMMTRAccessoryServerBrowser *chipAccessoryServerBrowser; // ivar: _chipAccessoryServerBrowser
@property (readonly) HMDCHIPDataSource *chipDataSource; // ivar: _chipDataSource
@property (copy) NSString *currentBundleIdentifier; // ivar: _currentBundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (copy) id *decimalStringRepresentationCHIPAccessorySetupPayloadFactory; // ivar: _decimalStringRepresentationCHIPAccessorySetupPayloadFactory
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy) id *payloadCHIPAccessorySetupPayloadFactory; // ivar: _payloadCHIPAccessorySetupPayloadFactory
@property (readonly) NSMutableDictionary *stagingRequestsByUUID; // ivar: _stagingRequestsByUUID
@property (readonly) Class superclass;
@property (copy) id *urlStringCHIPAccessorySetupPayloadFactory; // ivar: _urlStringCHIPAccessorySetupPayloadFactory
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_createCHIPSetupAccessoryPayloadWithSetupPayloadDecimalStringRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)_setupPayloadWithCHIPSetupPayload:(id)arg0 setupPayloadURL:(id)arg1 ;
-(id)createCHIPSetupAccessoryPayloadWithSetupPayloadURL:(id)arg0 error:(*id)arg1 ;
-(id)createSetupAccessoryPayloadWithCHIPSetupPayload:(id)arg0 error:(*id)arg1 ;
-(id)initWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 chipAccessoryServerBrowser:(id)arg2 chipDataSource:(id)arg3 ;
-(id)logIdentifier;
// -(void)_handleStagedPairingDeviceCredential:(id)arg0 completionHandler:(id)arg1 forRequest:(unk)arg2 activity:(id)arg3  ;
-(void)_handleStagedPairingServer:(id)arg0 error:(id)arg1 forRequest:(id)arg2 activity:(id)arg3 ;
// -(void)_handleStagedPairingThreadNetworkScanResults:(id)arg0 completionHandler:(id)arg1 forRequest:(unk)arg2 activity:(id)arg3  ;
// -(void)_handleStagedPairingWiFiNetworkScanResults:(id)arg0 completionHandler:(id)arg1 forRequest:(unk)arg2 activity:(id)arg3  ;
-(void)configure;
-(void)handleCancelStagedCHIPAccessoryPairingMessage:(id)arg0 ;
-(void)handleConfirmDeviceCredentialMessage:(id)arg0 ;
-(void)handleCreateCHIPSetupAccessoryPayloadMessage:(id)arg0 ;
-(void)handleCreateCHIPSetupPayloadMessage:(id)arg0 ;
-(void)handleRejectDeviceCredentialMessage:(id)arg0 ;
-(void)handleSelectThreadNetworkAssociationMessage:(id)arg0 ;
-(void)handleSelectWiFiNetworkAssociationMessage:(id)arg0 ;
-(void)handleStageCHIPAccessoryPairingInStepsMessage:(id)arg0 ;


@end


#endif