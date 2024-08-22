// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APRKSTREAMRENDERINGMANAGER_H
#define APRKSTREAMRENDERINGMANAGER_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, APRKStreamRenderingManagerDelegate;

#import <Foundation/Foundation.h>

#import "AWDLActivator.h"

@interface APRKStreamRenderingManager : NSObject {
    *AirPlayReceiverServerPrivate _server;
    NSMutableArray *_renderersArray;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _useCALayerForMirroring;
    BOOL _shouldForwardLayers;
    BOOL _usesHomeKitIntegration;
    BOOL _optimizeAudioRenderingLatency;
    CGSize _customDisplaySize;
    CGSize _customDisplaySizeMax;
    NSUInteger _displayHDRMode;
    NSUInteger _airPlayVideoVersionSupport;
    NSInteger _permissionTimeout;
    NSInteger _permissionGrantPeriod;
    NSMutableDictionary *_permittedClients;
    NSObject<OS_dispatch_queue> *_permittedClientsQueue;
    NSObject<OS_dispatch_source> *_permissionGrantTimer;
    BOOL _permissionEnabled;
    BOOL _altAdvertisingEnabled;
    BOOL _assistedModeEnabled;
    NSString *_passwordString;
    AWDLActivator *_awdlActivator;
}


@property (nonatomic) NSUInteger concurrentPlaybackPolicy; // ivar: _concurrentPlaybackPolicy
@property (weak, nonatomic) NSObject<APRKStreamRenderingManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger maxNumberOfConcurrentSessions; // ivar: _maxNumberOfConcurrentSessions
@property (nonatomic) NSUInteger preemptionPolicy; // ivar: _preemptionPolicy
@property (nonatomic) BOOL supportRemoteControl; // ivar: _supportRemoteControl
@property (readonly, nonatomic) NSUInteger supportedModesMask; // ivar: _supportedModesMask


+(BOOL)getAppHasSetAdvertisingAccessModeEntitlement;
+(BOOL)listeningForAlternateBonjourBrowsing;
+(BOOL)setAdvertisingAccessMode:(NSUInteger)arg0 withError:(*id)arg1 ;
+(NSUInteger)getAdvertisingAccessMode;
+(id)sharedInstance;
+(void)setListeningForAlternateBonjourBrowsing:(BOOL)arg0 ;
-(BOOL)_isPermittedClient:(id)arg0 ;
-(BOOL)altAdvertisingEnabled;
-(BOOL)assistedModeEnabled;
-(BOOL)demoModeEnabled;
-(BOOL)isAllowedToProceedForClientWithName:(id)arg0 clientID:(id)arg1 ;
-(BOOL)optimizeAudioRenderingLatency;
-(BOOL)shouldForwardLayers;
-(BOOL)systemSupportsWiFiUDM;
-(BOOL)useCALayerForMirroring;
-(BOOL)usesHomeKitIntegration;
-(NSInteger)permissionTimeout;
-(NSUInteger)_customDisplayHDRModeFromPrefsWithDefault:(NSUInteger)arg0 ;
-(NSUInteger)activeRenderersCount;
-(NSUInteger)airPlayVideoVersionSupport;
-(NSUInteger)displayHDRMode;
-(id)_rendererForUniqueIDInternal:(id)arg0 ;
-(id)activeRenderers;
-(id)allClientNames;
-(id)allRenderers;
-(id)assistedInfoForAWDL;
-(id)assistedInfoForIPAddress:(id)arg0 ;
-(id)createStreamRendererWithUniqueID:(id)arg0 clientName:(id)arg1 UIController:(struct OpaqueAPReceiverUIController *)arg2 ;
-(id)init;
-(id)rendererForUniqueID:(id)arg0 ;
-(int)_startReceiverServerWithSupportedModesMask:(NSUInteger)arg0 ;
-(int)forcePINRefresh;
-(int)startReceiverServer;
-(int)startReceiverServerWithSupportedRenderingModes:(NSUInteger)arg0 ;
-(int)stopReceiverServer;
-(struct CGSize )_customDisplaySizeFromPrefsWithDefault:(struct CGSize )arg0 ;
-(struct CGSize )_customDisplaySizeMaxFromPrefsWithDefault:(struct CGSize )arg0 ;
-(struct __CFString *)_getHDRModeString:(NSUInteger)arg0 ;
-(void)_addPermittedClient:(id)arg0 ;
-(void)_initPermittedClients;
-(void)_setAirPlayVideoVersionSupport:(NSUInteger)arg0 ;
-(void)_setPTPClockEnabled:(BOOL)arg0 ;
-(void)_setRandomPassword;
-(void)processHideGlobalPasscodePromptRequest;
-(void)processShowGlobalPasscodePromptRequest:(id)arg0 withClientName:(id)arg1 ;
-(void)removeRendererWithUniqueID:(id)arg0 ;
-(void)setAirPlayVideoVersionSupport:(NSUInteger)arg0 ;
-(void)setAltAdvertisingEnabled:(BOOL)arg0 ;
-(void)setAssistedModeEnabled:(BOOL)arg0 ;
-(void)setCustomDisplaySizeMax:(struct CGSize )arg0 ;
-(void)setDemoModeEnabled:(BOOL)arg0 ;
-(void)setDisplayHDRMode:(NSUInteger)arg0 ;
-(void)setOptimizeAudioRenderingLatency:(BOOL)arg0 ;
-(void)setPermissionTimeout:(NSInteger)arg0 ;
-(void)setShouldForwardLayers:(BOOL)arg0 ;
-(void)setUseCALayerForMirroring:(BOOL)arg0 ;
-(void)setUsesHomeKitIntegration:(BOOL)arg0 ;


@end


#endif