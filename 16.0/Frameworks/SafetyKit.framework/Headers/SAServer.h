// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASERVER_H
#define SASERVER_H

@class NSXPCListener, NSMutableArray, NSString, CLLocation;
@protocol SAServerProtocol, SATelephonyDelegateProtocol, SALocationManagerProtocol, NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SATelephonyManager.h"
#import "SABundleManager.h"
#import "SALocationManager.h"
#import "SACriticalNotification.h"
#import "SACrashDetectionEvent.h"

@interface SAServer : NSObject <SAServerProtocol, SATelephonyDelegateProtocol, SALocationManagerProtocol, NSXPCListenerDelegate>

 {
    SATelephonyManager *_telephonyManager;
    SABundleManager *_bundleManager;
    SALocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_messageQueue;
    NSXPCListener *_listener;
    NSMutableArray *_clientConnections;
    SACriticalNotification *_criticalNotification;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SACrashDetectionEvent *mostRecentCrashEvent;
@property (copy, nonatomic) CLLocation *mostRecentLocation; // ivar: _mostRecentLocation
@property (nonatomic) NSInteger numberOfVoiceCallAttempts;
@property (readonly) Class superclass;


+(CGFloat)emergencyResponseVoiceCallTimeout;
+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)dialVoiceCallToPhoneNumber:(id)arg0 completionHandler:(id)arg1 ;
-(void)iterateClientProxies:(id)arg0 ;
-(void)locationManager:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)notifyCrashDetectedAt:(id)arg0 resolvedAt:(id)arg1 resolvedWithResponse:(NSInteger)arg2 ;
-(void)recoverMostRecentCrashEvent;
-(void)requestCrashDetectionAuthorization:(id)arg0 ;
-(void)requestMostRecentCrashDetectionEvent;
-(void)sendCrashEventToClients;
-(void)startMonitoringLocation;
-(void)stopMonitoringLocation;
-(void)telephonyManager:(id)arg0 didUpdateVoiceCallStatus:(NSInteger)arg1 ;
-(void)updateMostRecentCrashDetectionEvent:(id)arg0 ;
-(void)updateVoiceCallStatus:(NSInteger)arg0 ;


@end


#endif