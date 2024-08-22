// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFDEVICESETUPAPPLETVSERVICE_H
#define SFDEVICESETUPAPPLETVSERVICE_H

@class HMDeviceSetupOperationHandler, TVLAudioLatencyEstimator, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFClient.h"
#import "SFService.h"
#import "SFSession.h"
#import "SFDeviceOperationHandlerCDPSetup.h"
#import "SFDeviceOperationHandlerWiFiSetup.h"
#import "SFDeviceOperationHandlerCNJSetup.h"

@interface SFDeviceSetupAppleTVService : NSObject {
    BOOL _activateCalled;
    BOOL _advertiseFast;
    BOOL _invalidateCalled;
    SFClient *_preventExitForLocaleClient;
    SFService *_sfService;
    SFSession *_sfSession;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    TVLAudioLatencyEstimator *_tvLatencyEstimator;
    BOOL _tvLatencyFinalReported;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    SFDeviceOperationHandlerCNJSetup *_captiveNetworkHandler;
    BOOL _prefCDPEnabled;
    BOOL _prefTVLatency;
    BOOL _prefHH2Enabled;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) NSString *forcedPasscode; // ivar: _forcedPasscode
@property (nonatomic) BOOL isCLIMode; // ivar: _isCLIMode
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(id)init;
-(void)_activate;
-(void)_cleanup;
-(void)_handleBasicConfigRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleFinishRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handlePreAuthRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleSessionEnded:(id)arg0 ;
-(void)_handleSessionStarted:(id)arg0 ;
-(void)_handleTVLatencyProgressEvent:(NSUInteger)arg0 info:(id)arg1 ;
-(void)_handleTVLatencyRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_invalidate;
-(void)_reportProgress:(unsigned int)arg0 info:(id)arg1 ;
-(void)_sfServiceStart;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif