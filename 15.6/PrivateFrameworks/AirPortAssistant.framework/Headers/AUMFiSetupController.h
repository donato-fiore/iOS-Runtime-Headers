// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUMFISETUPCONTROLLER_H
#define AUMFISETUPCONTROLLER_H

@class EasyConfigDevice, NSDictionary, NSString, NSTimer, NSMutableSet;
@protocol OS_dispatch_semaphore;


#import "AUSetupController.h"

@interface AUMFiSetupController : AUSetupController {
    EasyConfigDevice *_easyConfigDevice;
    NSDictionary *_accessoryResponseDict;
    NSDictionary *_autoGuessRecommendationDict;
    NSDictionary *_setupOptionsDict;
    NSDictionary *_destinationNetworkScanRecord;
    NSDictionary *_targetMFiDeviceScanRecord;
    NSString *_destinationNetworkSSID;
    NSString *_postConfigTargetDeviceFriendlyName;
    NSObject<OS_dispatch_semaphore> *_askUserForPasswordSemaphore;
    NSObject<OS_dispatch_semaphore> *_easyConfigConfigurationCompleteSemaphore;
    NSObject<OS_dispatch_semaphore> *_linkUpOnTargetSWAPSemaphore;
    int _waitingForLinkState;
    BOOL _setupEnded;
    BOOL _successfullyEstablishedLinkOnTargetDeviceSWAP;
    BOOL _successfullyEstablishedLinkOnDestinationAP;
    BOOL _promptedUserForDestinationWiFiPSK;
    BOOL _postediAPAccessoryConfiguredNotification;
    BOOL _destinationNetworkPasswordAccepted;
    NSInteger _lastHeardEasyConfigProgressNotification;
    ? _easyConfigPreConfigMetrics;
    ? _easyConfigPostConfigMetrics;
    CGFloat _timeSWAPJoinStarted;
    CGFloat _timeDestinationAPJoinStarted;
}


@property (copy) NSString *destinationNetworkPassword; // ivar: _destinationNetworkPassword
@property (retain) NSTimer *linkUpOnDestinationNetworkTimer; // ivar: _linkUpOnDestinationNetworkTimer
@property (readonly, nonatomic) NSMutableSet *setupDelegates; // ivar: _mfiSetupDelegates


+(id)setupController;
-(id)init;
-(id)targetBaseInfoDict;
-(int)cancelSetup;
-(int)endSetup:(int)arg0 ;
-(int)joinTargetSWAP;
-(int)sendProgressToUI:(int)arg0 withParamDict:(id)arg1 ;
-(int)sendSetupCompleteToUIWithResult:(int)arg0 ;
-(int)sendiAPOverWiFiDeviceConfiguredXPCMessage;
-(int)setupFromAutoguessRecommendation:(id)arg0 withOptions:(id)arg1 ;
-(int)updateSettingsAsync;
-(void)_startEasyConfigWhenReady;
-(void)acquireDestinationNetworkPassword;
-(void)askUserForNetworkPassword:(id)arg0 ;
-(void)askUserForSetupCodeWithRetryStatus:(BOOL)arg0 ;
-(void)askUserForUncertified;
-(void)callbackAskUserForPasswordResult:(int)arg0 password:(id)arg1 remember:(int)arg2 ;
-(void)callbackAskUserForSetupCodeResult:(int)arg0 password:(id)arg1 ;
-(void)callbackAskUserForUncertifiedResult:(int)arg0 ;
-(void)createEasyConfigDeviceConfiguration;
-(void)dealloc;
-(void)handleEasyConfigProgress:(id)arg0 ;
-(void)handleEasyConfigProgressAppliedConfigurationToDevice:(id)arg0 ;
-(void)handleEasyConfigProgressSearchingForPostConfigDevice:(id)arg0 ;
-(void)handleEasyConfigStopped:(id)arg0 ;
-(void)invalidateLinkUpOnDestinationNetworkTimer;
-(void)joinDestinationAPDone:(id)arg0 ;
-(void)joinDestinationNetworkTimeoutFired:(id)arg0 ;
-(void)joinSWAPDone:(id)arg0 ;
-(void)linkChangeNotification:(id)arg0 ;
-(void)linkUpOnDestinationAP:(id)arg0 ;
-(void)linkUpOnSWAP:(id)arg0 ;
-(void)logCompletionStatus:(int)arg0 ;
-(void)startEasyConfigWhenReady;
-(void)startListeningForEasyConfigDeviceStatusNotifications;
-(void)stopListeningToAllNotifications;
-(void)stopListeningToEasyConfigDeviceStatusNotifications;


@end


#endif