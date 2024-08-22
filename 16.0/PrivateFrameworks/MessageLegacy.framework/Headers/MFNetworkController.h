// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFNETWORKCONTROLLER_H
#define MFNETWORKCONTROLLER_H

@class NSLock, NSMutableArray, NSMutableSet, RadiosPreferences, CoreTelephonyClient, CXCallObserver, NSString, EFObservable;
@protocol MFDiagnosticsGenerator, RadiosPreferencesDelegate, CXCallObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MFNetworkController : NSObject <MFDiagnosticsGenerator, RadiosPreferencesDelegate, CXCallObserverDelegate>

 {
    NSLock *_lock;
    *__CFRunLoop _rl;
    NSMutableArray *_observers;
    unsigned int _flags;
    BOOL _dns;
    NSUInteger _activeCalls;
    NSMutableSet *_backgroundWifiClients;
    *__SCPreferences _wiFiPreferences;
    BOOL _hasCellDataCapability;
    BOOL _hasWiFiCapability;
    BOOL _isWiFiEnabled;
    BOOL _isRoamingAllowed;
    BOOL _alternateAdviceState;
    RadiosPreferences *_radiosPreferences;
    NSObject<OS_dispatch_queue> *_prefsQueue;
    int _symptomsToken;
    CoreTelephonyClient *_ctc;
    int _dataIndicator;
    NSObject<OS_dispatch_queue> *_dataStatusQueue;
    BOOL _cellularDataAvailable;
    *__SCNetworkReachability _reachability;
    *__SCDynamicStore _store;
    *__CFRunLoopSource _store_source;
    CXCallObserver *_callObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EFObservable *networkObservable;
@property (readonly) Class superclass;
@property (nonatomic) *void wifiManager; // ivar: _wifiManager
@property (readonly, nonatomic) EFObservable *wifiObservable;


+(id)networkAssertionWithIdentifier:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_isNetworkUp_nts;
-(BOOL)_simulationOverrideForType:(NSUInteger)arg0 actualValue:(BOOL)arg1 ;
-(BOOL)hasAlternateAdvice;
-(BOOL)inAirplaneMode;
-(BOOL)is3GConnection;
-(BOOL)is4GConnection;
-(BOOL)isDataAvailable;
-(BOOL)isFatPipe;
-(BOOL)isNetworkUp;
-(BOOL)isOnWWAN;
-(id)_networkAssertionWithIdentifier:(id)arg0 ;
// -(id)addNetworkObserverBlock:(id)arg0 queue:(unk)arg1  ;
-(id)copyCarrierBundleValue:(id)arg0 ;
-(id)copyDiagnosticInformation;
-(id)init;
-(int)dataStatus;
-(void)_carrierBundleDidChange;
-(void)_checkKeys:(id)arg0 forStore:(struct __SCDynamicStore *)arg1 ;
-(void)_handleWiFiNotification:(unsigned int)arg0 ;
-(void)_initializeDataStatus;
-(void)_inititializeWifiManager;
-(void)_setDataStatus_nts:(id)arg0 ;
-(void)_setFlags:(unsigned int)arg0 forReachability:(struct __SCNetworkReachability *)arg1 ;
-(void)_setupSymptons;
-(void)_updateActiveCalls;
-(void)_updateWifiClientType;
-(void)addBackgroundWifiClient:(id)arg0 ;
-(void)airplaneModeChanged;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)connectionActivationError:(id)arg0 connection:(int)arg1 error:(int)arg2 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)preferredDataSimChanged:(id)arg0 ;
-(void)removeBackgroundWifiClient:(id)arg0 ;
-(void)removeNetworkObserver:(id)arg0 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;


@end


#endif