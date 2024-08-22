// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSHAREAUDIOSERVICE_H
#define SFSHAREAUDIOSERVICE_H

@class NSString, CUBluetoothClient, SDStatusMonitor;
@protocol SFProxCardXPCClientInterface, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFBluetoothPairingSession.h"
#import "SFProxCardSessionClient.h"
#import "SFService.h"
#import "SFSession.h"

@interface SFShareAudioService : NSObject <SFProxCardXPCClientInterface>

 {
    NSString *_guestDeviceAddress;
    NSString *_headphonesAddress;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFBluetoothPairingSession *_pairingSession;
    SFProxCardSessionClient *_proxCardSessionClient;
    id *_responseHandler;
    SFService *_sfService;
    SFSession *_sfSession;
    CUBluetoothClient *_searchBTClient;
    NSObject<OS_dispatch_source> *_searchTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SDStatusMonitor *statusMonitor; // ivar: _statusMonitor
@property (readonly) Class superclass;


-(id)init;
-(void)_handleSessionEnded:(id)arg0 error:(id)arg1 ;
-(void)_handleSessionStarted:(id)arg0 ;
-(void)_handleShareAudioFoundDevice:(id)arg0 ;
-(void)_handleShareAudioPairingCompleted:(id)arg0 error:(id)arg1 ;
-(void)_handleShareAudioRequest2:(id)arg0 contact:(id)arg1 responseHandler:(id)arg2 ;
-(void)_handleShareAudioRequest:(id)arg0 responseHandler:(id)arg1 ;
-(void)_handleShareAudioResponse:(int)arg0 error:(id)arg1 ;
-(void)_handleShareAudioSearchTimeout;
-(void)_invalidate;
-(void)_sfServiceStart;
-(void)activate;
-(void)invalidate;
-(void)xpcPerformAction:(int)arg0 completion:(id)arg1 ;


@end


#endif