// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDATASTREAMCONTROLLER_H
#define HMDDATASTREAMCONTROLLER_H

@class NSString, HMFTimer, NSMutableArray;
@protocol HMDDataStreamHAPSetupOperationDelegate, HMFLogging, HMFTimerDelegate, HMDDataStreamDelegate, HMDDataStreamSocketController, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHAPAccessory.h"
#import "HMDDataStream.h"
#import "HMDDataStreamSetupOperation.h"
#import "HMDService.h"

@interface HMDDataStreamController : NSObject <HMDDataStreamHAPSetupOperationDelegate, HMFLogging, HMFTimerDelegate, HMDDataStreamDelegate, HMDDataStreamSocketController>



@property (weak, nonatomic) HMDHAPAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) id *dataStreamFactory; // ivar: _dataStreamFactory
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDDataStream *defaultDataStream; // ivar: _defaultDataStream
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMFTimer *idleTimer; // ivar: _idleTimer
@property (readonly, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (nonatomic) NSUInteger maxControllerTransportMTU; // ivar: _maxControllerTransportMTU
@property (retain, nonatomic) NSMutableArray *pendingSocketRequests; // ivar: _pendingSocketRequests
@property (retain, nonatomic) HMDDataStreamSetupOperation *setupInProgress; // ivar: _setupInProgress
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDataStreamOverHAP; // ivar: _supportsDataStreamOverHAP
@property (nonatomic) BOOL supportsDataStreamOverTCP; // ivar: _supportsDataStreamOverTCP
@property (weak, nonatomic) HMDService *transferManagementService; // ivar: _transferManagementService
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_isDataStreamCapable;
-(BOOL)_isDataStreamConfigurationValid;
-(BOOL)canAcceptBulkSendListeners;
-(BOOL)setupRequiresCharactertisticReads;
-(id)_getActiveProtocolWithName:(id)arg0 ;
-(id)_getStreamProtocol;
-(id)initWithAccessory:(id)arg0 service:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithAccessory:(id)arg0 service:(id)arg1 workQueue:(id)arg2 dataStreamFactory:(id)arg3 ;
-(void)_cancelStreamTransportWithError:(id)arg0 ;
-(void)_createBulkStreamProtocol;
-(void)_createStreamSocketWithStreamProtocol:(id)arg0 applicationProtocolName:(id)arg1 completion:(id)arg2 ;
-(void)_failPendingSocketRequestsWithError:(id)arg0 ;
-(void)_handleAccessoryConnected;
-(void)_handleAccessoryDisconnected;
-(void)_initiateStreamSetup;
-(void)_processPendingSocketRequests;
-(void)_readRequiredTransportCharacteristicsIfNeededWithCompletion:(id)arg0 ;
-(void)_resetTransportInfo;
-(void)_startIdleTimer;
-(void)_stopIdleTimer;
-(void)addBulkSendListener:(id)arg0 fileType:(id)arg1 ;
-(void)dataStream:(id)arg0 didFailWithError:(id)arg1 ;
-(void)dataStreamDidClose:(id)arg0 ;
-(void)dataStreamDidOpen:(id)arg0 ;
-(void)dataStreamDidReceiveRawFrame:(id)arg0 ;
-(void)dataStreamDidUpdateActiveStatus:(id)arg0 ;
-(void)dataStreamInitializationSetupOperation:(id)arg0 didCompleteSupportReadWithStatus:(BOOL)arg1 ;
-(void)dataStreamSetupOperation:(id)arg0 didFailWithError:(id)arg1 ;
-(void)dataStreamSetupOperation:(id)arg0 didSucceedWithTransport:(id)arg1 sessionEncryption:(id)arg2 ;
-(void)deRegisterFromNotifications;
-(void)handleAccessoryConfigured:(id)arg0 ;
-(void)handleAccessoryConnected;
-(void)handleAccessoryDisconnected:(id)arg0 ;
-(void)handleAccessoryUnconfigured:(id)arg0 ;
-(void)invalidate;
-(void)openBulkSendSessionForFileType:(id)arg0 reason:(id)arg1 metadata:(id)arg2 queue:(id)arg3 callback:(id)arg4 ;
-(void)openStreamSocketWithApplicationProtocol:(id)arg0 completion:(id)arg1 ;
-(void)registerForNotifications;
-(void)removeBulkSendListener:(id)arg0 ;
-(void)sendTargetControlWhoAmIWithIdentifier:(unsigned int)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif