// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFDEVICEREPAIRSERVICE_H
#define SFDEVICEREPAIRSERVICE_H

@class ACAccountStore, HMDeviceSetupOperationHandler;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFService.h"
#import "SFSession.h"
#import "SFDeviceOperationHandlerCDPSetup.h"
#import "SFDeviceOperationHandlerWiFiSetup.h"
#import "SFDeviceOperationHandlerCNJSetup.h"

@interface SFDeviceRepairService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _invalidateFlags;
    SFService *_sfService;
    SFSession *_sfSession;
    *__WiFiManagerClient _wifiManager;
    ACAccountStore *_accountStore;
    BOOL _prefCDPEnabled;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    SFDeviceOperationHandlerCNJSetup *_captiveNetworkHandler;
    NSUInteger _startTicks;
    NSUInteger _startProblemFlags;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) NSUInteger problemFlags; // ivar: _problemFlags
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(NSInteger)_nextServiceTypeForTRAccountServices:(id)arg0 ;
-(NSUInteger)_nextTRServiceTypeForTRAccountServices:(id)arg0 ;
-(id)init;
-(void)_authenticateAccount:(id)arg0 serviceType:(NSInteger)arg1 companionDevice:(id)arg2 anisetteDataProvider:(id)arg3 completion:(id)arg4 ;
-(void)_authenticateAccount:(id)arg0 serviceType:(NSInteger)arg1 password:(id)arg2 completion:(id)arg3 ;
-(void)_authenticateWithServiceType:(NSUInteger)arg0 authResults:(id)arg1 completion:(id)arg2 ;
-(void)_authenticateWithServiceTypes:(id)arg0 authResults:(id)arg1 completion:(id)arg2 ;
-(void)_authenticateiCloudWithAuthResults:(id)arg0 completion:(id)arg1 ;
-(void)_authenticateiTunesWithAuthResults:(id)arg0 completion:(id)arg1 ;
-(void)_handleFinishRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleGetProblemsRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleSessionEnded:(id)arg0 ;
-(void)_handleSessionStarted:(id)arg0 ;
-(void)_handleTRCompanionAuthenticationRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleTRProxyAuthenticationRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleTRProxyDeviceRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_invalidate;
-(void)_saveAccount:(id)arg0 completion:(id)arg1 ;
-(void)_saveRemoteVerifiedAccount:(id)arg0 completion:(id)arg1 ;
-(void)_sfServiceStart;
-(void)activate;
-(void)invalidate;
-(void)invalidateWithFlags:(unsigned int)arg0 ;


@end


#endif