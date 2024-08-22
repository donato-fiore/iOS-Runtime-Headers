// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARSESSION_H
#define CARSESSION_H

@class NSData, NSArray, NSString, NSNumber;
@protocol CARAppearanceManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CARAppearanceManager.h"
#import "CARSessionConfiguration.h"
#import "CARInputDeviceManager.h"
#import "CARObserverHashTable.h"

@interface CARSession : NSObject <CARAppearanceManagerDelegate>

 {
    *OpaqueFigEndpoint _endpoint;
}


@property (readonly, copy, nonatomic) NSData *MFiCertificateSerialNumber; // ivar: _MFiCertificateSerialNumber
@property (readonly, nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (retain, nonatomic) CARAppearanceManager *appearanceManager; // ivar: _appearanceManager
@property (readonly, nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _authenticated
@property (readonly, nonatomic) BOOL clientIsCarPlayShell; // ivar: _clientIsCarPlayShell
@property (retain, nonatomic) NSArray *clusterSessionURLs; // ivar: _clusterSessionURLs
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clusterURLUpdateQueue; // ivar: _clusterURLUpdateQueue
@property (readonly, nonatomic) CARSessionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *electronicTollCollectionAvailable;
@property (retain, nonatomic) NSNumber *fallbackNightMode; // ivar: _fallbackNightMode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CARInputDeviceManager *inputDeviceManager; // ivar: _inputDeviceManager
@property (readonly, nonatomic) BOOL isPaired;
@property (readonly, copy, nonatomic) NSNumber *limitUserInterfaces;
@property (nonatomic) int nightFallbackNotifyToken; // ivar: _nightFallbackNotifyToken
@property (readonly, copy, nonatomic) NSNumber *nightMode;
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL requiresCarCapabilitiesValues; // ivar: _requiresCarCapabilitiesValues
@property (readonly, copy, nonatomic) NSString *sourceVersion;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *systemNightMode; // ivar: _systemNightMode


+(NSInteger)_siriRequestEventForEndpointAction:(id)arg0 ;
+(id)_stringForNightModeNumber:(id)arg0 ;
-(BOOL)_sessionReady;
-(BOOL)carOwnsMainAudio;
-(BOOL)carOwnsScreen;
-(BOOL)recognizingSpeech;
-(NSInteger)_carUserInterfaceStyleForAppearanceMode:(NSUInteger)arg0 ;
-(NSInteger)mapInterfaceStyleForScreenUUID:(id)arg0 ;
-(NSInteger)userInterfaceStyleForScreenUUID:(id)arg0 ;
-(NSUInteger)navigationOwner;
-(id)APEndPointInfo;
-(id)_capabilitiesIdentifier;
-(id)_endpointValueForKey:(struct __CFString *)arg0 ;
-(id)borrowScreenForClient:(id)arg0 reason:(id)arg1 ;
-(id)initWithFigEndpoint:(struct OpaqueFigEndpoint *)arg0 clientIsCarPlayShell:(BOOL)arg1 ;
-(id)lastNavigatingBundleIdentifier;
-(struct OpaqueFigEndpoint *)endpoint;
-(struct OpaqueFigEndpointRemoteControlSession *)createRemoteControlSession:(id)arg0 channelID:(id)arg1 withoutReply:(BOOL)arg2 qualityOfService:(id)arg3 streamPriority:(id)arg4 error:(*id)arg5 ;
-(void)_clusterURLsUpdated:(id)arg0 ;
-(void)_fetchActivationStatus;
-(void)_fetchAuthenticationStatus;
-(void)_fetchFallbackIsNightWithToken:(int)arg0 ;
-(void)_handleAppearanceModeUpdateWithParameters:(id)arg0 ;
-(void)_handleDisplayPanelsUpdateWithParameters:(id)arg0 ;
-(void)_handleMapAppearanceModeUpdateWithParameters:(id)arg0 ;
-(void)_handleNightModeChange;
-(void)_handleOpenURL:(id)arg0 ;
-(void)_handleShowUIWithParameters:(id)arg0 ;
-(void)_handleSiriRequestEvent:(NSInteger)arg0 withPayload:(id)arg1 ;
-(void)_handleStopUIWithParameters:(id)arg0 ;
-(void)_handleViewAreaChangeWithPayload:(id)arg0 ;
-(void)_newObserverAdded:(id)arg0 ;
-(void)_performExtendedEndpointAction:(id)arg0 ;
-(void)_setEndpointValue:(*void)arg0 forKey:(struct __CFString *)arg1 ;
-(void)_updateCarCapabilities;
-(void)_updateConfiguration;
-(void)_updateScreenInfo:(id)arg0 currentViewAreaToViewArea:(id)arg1 duration:(CGFloat)arg2 transitionControlType:(NSUInteger)arg3 ;
-(void)addObserver:(id)arg0 ;
-(void)appearanceManager:(id)arg0 didUpdateMapAppearanceStyle:(NSInteger)arg1 forScreenUUIDs:(id)arg2 ;
-(void)appearanceManager:(id)arg0 didUpdateUIAppearanceStyle:(NSInteger)arg1 forScreenUUIDs:(id)arg2 ;
-(void)dealloc;
-(void)releaseTurnByTurnOwnership;
-(void)removeObserver:(id)arg0 ;
-(void)requestAdjacentViewAreaForScreenID:(id)arg0 ;
-(void)requestCarUI;
-(void)requestCarUIForURL:(id)arg0 ;
-(void)requestTurnByTurnOwnership;
-(void)sendCommand:(id)arg0 withParameters:(id)arg1 ;
-(void)setCornerMaskImageData:(id)arg0 forScreenInfo:(id)arg1 ;
-(void)setInputMode:(NSUInteger)arg0 forInputDevice:(id)arg1 ;
-(void)setSiriForwardingEnabled:(BOOL)arg0 ;
-(void)suggestUI:(id)arg0 ;
-(void)takeScreenForClient:(id)arg0 reason:(id)arg1 ;
-(void)takeScreenForConnection;
-(void)unborrowScreenForToken:(id)arg0 ;


@end


#endif