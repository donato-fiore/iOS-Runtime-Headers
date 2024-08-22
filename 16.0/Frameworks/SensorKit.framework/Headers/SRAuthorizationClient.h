// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRAUTHORIZATIONCLIENT_H
#define SRAUTHORIZATIONCLIENT_H

@class NSXPCConnection, NSMapTable, NSMutableDictionary, NSNumber, NSDictionary, NSArray, NSString;
@protocol SRSensorKitServiceClientAuthorizationListening;

#import <Foundation/Foundation.h>


@interface SRAuthorizationClient : NSObject <SRSensorKitServiceClientAuthorizationListening>

 {
    int _registrationToken;
    NSXPCConnection *_connection;
    NSMapTable *_listeners;
    NSMutableDictionary *_actualAuthorizedServices;
    NSMutableDictionary *_deniedServices;
    NSMutableDictionary *_lastModifiedTimes;
    NSNumber *_prerequisites;
}


@property (readonly, copy) NSDictionary *authorizedServices;
@property (nonatomic) BOOL dataCollectionEnabled;
@property (nonatomic) BOOL firstRunOnboardingCompleted;
@property (readonly, nonatomic) NSArray *legacyResearchStudyBundleIDs;
@property (readonly, nonatomic) NSString *legacyResearchStudyEntitlement;
@property (readonly, nonatomic) BOOL onboardingAirGapEnabled;


+(id)authClient;
+(id)sharedInstance;
+(void)initialize;
+(void)setAuthClient:(id)arg0 ;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(void)addListener:(id)arg0 ;
-(void)addListener:(id)arg0 forBundleId:(id)arg1 ;
-(void)authorizedServicesDidChange:(id)arg0 deniedServices:(id)arg1 prerequisites:(NSInteger)arg2 lastModifiedTimes:(id)arg3 bundleIdentifier:(id)arg4 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeListener:(id)arg0 ;
-(void)reregisterAfterInterruption:(id)arg0 effectiveBundleId:(id)arg1 ;


@end


#endif