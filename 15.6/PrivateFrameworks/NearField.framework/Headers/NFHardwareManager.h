// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFHARDWAREMANAGER_H
#define NFHARDWAREMANAGER_H

@class NSMutableSet, NSArray, NSDictionary, NSUUID, NSString;
@protocol NFHardwareManagerXPCDelegate, NFHardwareManagerCallbacks;

#import <Foundation/Foundation.h>

#import "NFHardwareManagerXPC.h"
#import "NFHardwareControllerInfo.h"

@interface NFHardwareManager : NSObject <NFHardwareManagerXPCDelegate, NFHardwareManagerCallbacks>

 {
    NFHardwareManagerXPC *_xpc;
    NSMutableSet *_sessions;
    BOOL _hasEventListener;
    NSMutableSet *_eventListeners;
    NSArray *_secureElements;
    NSDictionary *_secureElementsById;
    unsigned int _hwSupport;
    BOOL _didPreWarm;
    NSInteger _type;
}


@property (readonly) NSUUID *blessedUser;
@property (readonly) NFHardwareControllerInfo *controllerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBackgroundTagReadingAvailable;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suspendBackgroundTagReading;


+(id)sharedHardwareManager;
+(id)sharedHardwareManagerWithNoUI;
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
-(BOOL)secureElementBootHistory:(*id)arg0 ;
-(BOOL)setFieldDetectEnabled:(BOOL)arg0 ;
-(BOOL)triggerDelayedWake:(unsigned char)arg0 ;
-(BOOL)triggerHammerfestRecovery;
-(id)_sessionAttribute;
// -(id)_startLoyaltyAndContactlessPaymentSession:(id)arg0 force:(unk)arg1  ;
-(id)_startReaderSessionWithUI:(NSInteger)arg0 callback:(id)arg1 ;
-(id)_synchronousQueueSessionWithRetry:(id)arg0 queueBlock:(id)arg1 ;
-(id)checkExpressPassCompatibility:(id)arg0 error:(*id)arg1 ;
-(id)configureHeadlessFactoryMode:(BOOL)arg0 ;
-(id)connectToXPCManager;
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
-(id)releaseSinglePollExpressModeAssertion;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)rfSettings;
-(id)secureElementWithIdentifier:(id)arg0 ;
-(id)secureElements;
-(id)setChipscope:(BOOL)arg0 ;
-(id)setRadioEnabledSetting:(BOOL)arg0 ;
-(id)startContactlessPaymentSession:(id)arg0 ;
-(id)startContactlessSession:(id)arg0 ;
-(id)startContactlessUICCSession:(id)arg0 ;
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
-(id)updateHWSupportWithXPC:(id)arg0 ;
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
-(void)failForwardCompleted;
-(void)invalidateConnection;
-(void)refreshSecureElements;
-(void)registerEventListener:(id)arg0 ;
-(void)secureElementWithIdentifier:(id)arg0 didChangeRestrictedMode:(BOOL)arg1 ;
-(void)sessionDidEnd:(id)arg0 ;
-(void)setAuthorization:(id)arg0 ;
-(void)temperatureChanged:(CGFloat)arg0 ;
-(void)unregisterEventListener:(id)arg0 ;


@end


#endif