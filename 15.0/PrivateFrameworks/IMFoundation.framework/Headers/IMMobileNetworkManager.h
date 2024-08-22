// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMMOBILENETWORKMANAGER_H
#define IMMOBILENETWORKMANAGER_H

@class CoreTelephonyClient, RadiosPreferences, NSMutableSet, CTXPCServiceSubscriptionContext, NSString, NSRecursiveLock, NSNumber;
@protocol RadiosPreferencesDelegate, CoreTelephonyClientDataDelegate;

#import <Foundation/Foundation.h>


@interface IMMobileNetworkManager : NSObject <RadiosPreferencesDelegate, CoreTelephonyClientDataDelegate>



@property (nonatomic) *void _cellAssertion; // ivar: _cellAssertion
@property (retain, nonatomic) CoreTelephonyClient *_coreTelephonyClient; // ivar: _coreTelephonyClient
@property (nonatomic) *__CTServerConnection _ctServerConnection; // ivar: _ctServerConnection
@property (retain, nonatomic) RadiosPreferences *_radiosPreferences; // ivar: _radiosPreferences
@property (readonly, nonatomic) BOOL autoAssociateCellular;
@property (readonly, nonatomic) BOOL autoAssociateWiFi;
@property (retain, nonatomic) NSMutableSet *cellularAutoAssociationTokens; // ivar: _cellAutoAssociationTokens
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *currentDataSubscriptionContextSync; // ivar: _currentDataSubscriptionContextSync
@property (readonly, nonatomic) BOOL dataConnectionExists;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableFastDormancy;
@property (readonly, nonatomic) BOOL has2GDataConnection;
@property (readonly, nonatomic) BOOL hasLTEDataConnection;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL inValidSIMState;
@property (readonly, nonatomic) BOOL isAirplaneModeEnabled;
@property (readonly, nonatomic) BOOL isDataConnectionActive;
@property (nonatomic) BOOL isDataContextActive; // ivar: _isDataContextActive
@property (nonatomic) BOOL isDataContextUsable; // ivar: _isDataContextUsable
@property (nonatomic) BOOL isDataIndicatorNone; // ivar: _isDataIndicatorNone
@property (nonatomic) BOOL isDataPossible; // ivar: _isDataPossible
@property (readonly, nonatomic) BOOL isDataSwitchEnabled;
@property (readonly, nonatomic) BOOL isHostingWiFiHotSpot;
@property (readonly, nonatomic) BOOL isSIMLocked;
@property (readonly, nonatomic) BOOL isSIMRemoved;
@property (readonly, nonatomic) BOOL isWiFiAssociated;
@property (readonly, nonatomic) BOOL isWiFiCaptive;
@property (readonly, nonatomic) BOOL isWiFiEnabled;
@property (readonly, nonatomic) BOOL isWiFiUsable;
@property (retain, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (nonatomic) BOOL registered; // ivar: _registered
@property (readonly, nonatomic) BOOL requiresSIMInserted;
@property (nonatomic) BOOL shouldBringUpDataContext; // ivar: _shouldBringUpDataContext
@property (readonly) Class superclass;
@property (readonly, retain, nonatomic) NSNumber *wiFiScaledRSSI;
@property (readonly, retain, nonatomic) NSNumber *wiFiScaledRate;
@property (readonly, retain, nonatomic) NSNumber *wiFiSignalStrength;
@property (readonly, nonatomic) BOOL willTryToAutoAssociateWiFiNetwork;
@property (readonly, nonatomic) BOOL willTryToSearchForWiFiNetwork;


+(id)sharedInstance;
-(BOOL)_isDataConnectionAvailable;
-(id)_dataCTXPCServiceSubscriptionContext;
-(id)_telephonyDataSIMStatus;
-(id)init;
-(int)_getCurrentCTDataStatus;
-(void)_adjustCellularAutoAssociation;
-(void)_createCTServerConnection;
-(void)_initializeDataState;
-(void)_locked_recalculateDataContextUsableAndPostNotificationIfNeeded:(BOOL)arg0 ;
-(void)_locked_updateDataConnectionStateWithContext:(id)arg0 ;
-(void)_locked_updateDataStateBasedOnDataConnectionStatus:(id)arg0 ;
-(void)_locked_updateDataStateBasedOnDataStatus:(id)arg0 ;
-(void)_locked_updateDataStateWithContext:(id)arg0 ;
-(void)_makeDataConnectionAvailable:(BOOL)arg0 ;
-(void)_releaseCTServerConnection;
-(void)addCellularAutoAssociationClientToken:(id)arg0 ;
-(void)addFastDormancyDisableToken:(id)arg0 ;
-(void)addWiFiAutoAssociationClientToken:(id)arg0 ;
-(void)airplaneModeChanged;
-(void)currentDataSimChanged:(id)arg0 ;
-(void)dealloc;
-(void)internetConnectionActivationError:(int)arg0 ;
-(void)internetConnectionStateChanged:(id)arg0 ;
-(void)internetDataStatus:(id)arg0 ;
-(void)removeCellularAutoAssociationClientToken:(id)arg0 ;
-(void)removeFastDormancyDisableToken:(id)arg0 ;
-(void)removeWiFiAutoAssociationClientToken:(id)arg0 ;
-(void)setDataConnectionActive:(BOOL)arg0 ;
-(void)showNetworkOptions;


@end


#endif