// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWSYSTEMPATHMONITOR_H
#define NWSYSTEMPATHMONITOR_H

@class BKSApplicationStateMonitor, NSMutableDictionary;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NWPathEvaluator.h"
#import "NWMonitor.h"

@interface NWSystemPathMonitor : NSObject

@property (retain) BKSApplicationStateMonitor *applicationMonitor; // ivar: _applicationMonitor
@property (nonatomic, getter=isEthernetPrimary) BOOL ethernetPrimary; // ivar: _ethernetPrimary
@property *void fallbackWatcher; // ivar: _fallbackWatcher
@property (retain) NSObject<OS_dispatch_source> *mptcpWatcher; // ivar: _mptcpWatcher
@property (retain) NSMutableDictionary *perAppVPNEvaluators; // ivar: _perAppVPNEvaluators
@property (retain) NWPathEvaluator *primaryEvaluator; // ivar: _primaryEvaluator
@property (retain) NSObject<OS_dispatch_source> *smoothingTimer; // ivar: _smoothingTimer
@property int symptomsNotifyToken; // ivar: _symptomsNotifyToken
@property (nonatomic, getter=isVPNActive) BOOL vpnActive; // ivar: _vpnActive
@property (retain) NWMonitor *vpnMonitor; // ivar: _vpnMonitor
@property int vpnNotifyToken; // ivar: _vpnNotifyToken
@property (nonatomic, getter=isWiFiPrimary) BOOL wifiPrimary; // ivar: _wifiPrimary


+(id)sharedSystemPathMonitor;
-(BOOL)getSymptomsFallback;
-(id)init;
-(void)appStateChangedWithUserInfo:(id)arg0 ;
-(void)dealloc;
-(void)eventFired;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerForSymptomsFallbackNotification;
-(void)registerForVPNNotifications;
-(void)startWatchingApplicationStates;
-(void)stopWatchingApplicationStates;
-(void)updateFlags;
-(void)updateVPNMonitor;


@end


#endif