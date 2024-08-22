// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFHARDWAREMANAGER_H
#define NFHARDWAREMANAGER_H

@class NSMutableSet, NSArray, NSDictionary, NSMutableArray, NSUUID, NSString;
@protocol NFHardwareManagerXPCDelegate, NFHardwareManagerCallbacks, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NFHardwareManagerXPC.h"
#import "NFHardwareControllerInfo.h"

@interface NFHardwareManager : NSObject <NFHardwareManagerXPCDelegate, NFHardwareManagerCallbacks>

 {
    NFHardwareManagerXPC *_xpc;
    NSMutableSet *_sessions;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _hasEventListener;
    NSMutableSet *_eventListeners;
    NSArray *_secureElements;
    NSDictionary *_secureElementsById;
    unsigned int _hwSupport;
    BOOL _didPreWarm;
    int _listeningForNfcdStartedNtf;
    NSObject<OS_dispatch_queue> *_listeningQueue;
    NSInteger _type;
    NSMutableArray *_waitingClients;
}


@property (readonly) NSUUID *blessedUser;
@property (readonly) NFHardwareControllerInfo *controllerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBackgroundTagReadingAvailable;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suspendBackgroundTagReading;


+(id)_sharedHardwareManagerWaitOnHWInit:(BOOL)arg0 ;
+(id)sharedHardwareManager;
+(id)sharedHardwareManagerWithNoUI;
+(void)sharedHardwareManager:(id)arg0 ;
-(BOOL)areFeaturesSupported:(NSUInteger)arg0 outError:(*id)arg1 ;
-(BOOL)areSessionsAllowed;
-(BOOL)expressModesEnabled;
-(BOOL)getHeadlessFactoryMode:(*id)arg0 ;
-(BOOL)hasCard;
-(BOOL)isExpressAppletTypeSupported:(unsigned char)arg0 ;
-(BOOL)isExpressModeSupported;
-(BOOL)isInRestrictedMode;
-(BOOL)preWarm;
-(BOOL)preWarm:(*id)arg0 ;
-(BOOL)recoveryInProgress;
-(BOOL)secureElementBootHistory:(*id)arg0 ;
-(BOOL)setFieldDetectEnabled:(BOOL)arg0 ;
-(BOOL)triggerDelayedWake:(unsigned char)arg0 ;
-(BOOL)triggerHammerfestRecovery;
-(NSInteger)expressModeControlState;
-(id)_sessionAttribute;
// -(id)_startLoyaltyAndContactlessPaymentSession:(id)arg0 force:(unk)arg1  ;
-(id)_startReaderSessionWithUI:(NSInteger)arg0 callback:(id)arg1 ;
-(id)_synchronousQueueSessionWithRetry:(id)arg0 queueBlock:(id)arg1 ;
-(id)cachedEmbeddedSecureElementSerialNumber:(*id)arg0 ;
-(id)checkExpressPassCompatibility:(id)arg0 error:(*id)arg1 ;
-(id)configureHeadlessFactoryMode:(BOOL)arg0 ;
-(id)connectToXPCManager:(BOOL)arg0 ;
-(id)controllerInfoWithError:(*id)arg0 ;
-(id)disableHeadless;
-(id)disableLPEMFeature:(NSUInteger)arg0 ;
-(id)enableHeadlessTestMode:(unsigned short)arg0 ;
-(id)enableLPEMFeature:(NSUInteger)arg0 ;
-(id)forceLoyaltyAndContactlessPaymentSession:(id)arg0 ;
-(id)getDieID;
-(id)getDieIDWithError:(*id)arg0 ;
-(id)getFlashWriteCounters:(*id)arg0 ;
-(id)getHeadlessModeFlags:(*unsigned int)arg0 ;
-(id)getLPEMFTALogging:(*id)arg0 ;
-(id)getPowerCounters:(*id)arg0 ;
-(id)getRadioEnabledSetting:(*BOOL)arg0 ;
-(id)getRadioEnabledState:(*NSInteger)arg0 ;
-(id)getTemperature:(*CGFloat)arg0 ;
-(id)getUniqueFDRKey:(*id)arg0 ;
-(id)hostEmulationLog;
-(id)initWithType:(NSInteger)arg0 ;
-(id)pushSignedRF:(id)arg0 ;
-(id)releaseAssertion:(id)arg0 ;
-(id)releaseSinglePollExpressModeAssertion;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)requestAssertion:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)rfSettings;
-(id)secureElementWithIdentifier:(id)arg0 ;
-(id)secureElementWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)secureElements;
-(id)secureElementsWithError:(*id)arg0 ;
-(id)setChipscope:(BOOL)arg0 ;
-(id)setRadioEnabledSetting:(BOOL)arg0 ;
-(id)startContactlessPaymentSession:(id)arg0 ;
-(id)startContactlessSession:(id)arg0 ;
-(id)startDigitalCarKeySession:(id)arg0 ;
-(id)startECommercePaymentSession:(id)arg0 ;
-(id)startFieldDetectSession:(id)arg0 ;
-(id)startHCESession:(id)arg0 ;
-(id)startLPEMConfigSession:(id)arg0 ;
-(id)startLoyaltyAndContactlessPaymentSession:(id)arg0 ;
-(id)startNdefTagSession:(id)arg0 ;
-(id)startNdefTagSessionWithBluetoothLESecureOOBData:(id)arg0 callback:(id)arg1 ;
-(id)startPeerPaymentSession:(id)arg0 ;
-(id)startReaderSession:(id)arg0 ;
-(id)startReaderSessionWithActionSheetUI:(id)arg0 ;
-(id)startSecureElementAndHCESession:(id)arg0 ;
-(id)startSecureElementLoggingSession:(id)arg0 ;
-(id)startSecureElementManagerSession:(id)arg0 ;
-(id)startSecureElementManagerSessionWithAttributes:(id)arg0 completion:(id)arg1 ;
-(id)startSecureElementManagerSessionWithPriority:(BOOL)arg0 callback:(id)arg1 ;
-(id)startSecureElementManagerSessionWithPriority:(id)arg0 ;
-(id)startSecureElementReaderSession:(id)arg0 ;
-(id)startSecureTransactionServicesSessionWithRole:(NSUInteger)arg0 connectionHandoverCofig:(NSUInteger)arg1 completion:(id)arg2 ;
-(id)startSesHatSession:(id)arg0 ;
-(id)startSinglePollExpressModeAssertion:(CGFloat)arg0 ;
-(id)startTrustSession:(id)arg0 ;
-(id)startUnifiedAccessSession:(id)arg0 ;
-(id)stateInfo:(*id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)toggleGPIO:(unsigned short)arg0 ;
-(id)updateHWSupportWithXPC:(id)arg0 waitForInit:(BOOL)arg1 ;
-(unsigned int)checkUserBlessing:(id)arg0 ;
-(unsigned int)checkUserBlessing:(id)arg0 hasCards:(*BOOL)arg1 ;
-(unsigned int)getHwSupport;
-(unsigned int)queryHardwareSupport:(*id)arg0 ;
-(void)actOnUserInitiatedSystemShutDown:(unsigned int)arg0 completion:(id)arg1 ;
-(void)configureReaderModeRFForTransitPartner:(BOOL)arg0 transitPartner:(unsigned int)arg1 callback:(id)arg2 ;
-(void)didChangeRadioState:(BOOL)arg0 ;
-(void)didInterrupt:(id)arg0 ;
-(void)didInvalidate;
-(void)dumpLPMDebugLog;
-(void)hwStateDidChange:(unsigned int)arg0 ;
-(void)invalidateConnection;
-(void)listenForNfcdStartup;
-(void)refreshSecureElements;
-(void)refreshSecureElementsWithError:(*id)arg0 ;
-(void)registerEventListener:(id)arg0 ;
-(void)registerForRemoteCallbacks;
-(void)secureElementWithIdentifier:(id)arg0 didChangeRestrictedMode:(BOOL)arg1 ;
-(void)sessionDidEnd:(id)arg0 ;
-(void)setAuthorization:(id)arg0 ;
-(void)stopListeningForNfcdRestart;
-(void)temperatureChanged:(CGFloat)arg0 ;
-(void)unregisterEventListener:(id)arg0 ;
-(void)unregisterForRemoteCallbacks;


@end


#endif