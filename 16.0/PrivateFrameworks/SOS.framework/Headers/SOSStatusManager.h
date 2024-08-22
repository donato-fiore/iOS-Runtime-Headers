// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOSSTATUSMANAGER_H
#define SOSSTATUSMANAGER_H

@class TUCall, NSXPCConnection, NSTimer, NSString, NSUUID;
@protocol SOSStatusManagerServerProtocol, NSXPCListenerDelegate, SOSPairedDeviceStatusObserver, SOSCoreAnalyticsReporting;

#import <Foundation/Foundation.h>


@interface SOSStatusManager : NSObject <SOSStatusManagerServerProtocol, NSXPCListenerDelegate, SOSPairedDeviceStatusObserver>



@property (retain, nonatomic) TUCall *activeSOSCall; // ivar: _activeSOSCall
@property (retain, nonatomic) NSXPCConnection *clientConnection; // ivar: _clientConnection
@property (retain, nonatomic) NSObject<SOSCoreAnalyticsReporting> *coreAnalyticsReporter; // ivar: _coreAnalyticsReporter
@property (retain, nonatomic) NSTimer *currentDeviceStatusClearTimer; // ivar: _currentDeviceStatusClearTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSTimer *handoffFallbackTimer; // ivar: _handoffFallbackTimer
@property (nonatomic) NSInteger handoffTrigger; // ivar: _handoffTrigger
@property (retain, nonatomic) NSUUID *handoffTriggerUUID; // ivar: _handoffTriggerUUID
@property (nonatomic) BOOL hasActiveSOSCall; // ivar: _hasActiveSOSCall
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inSOSFlow; // ivar: _inSOSFlow
@property (nonatomic) BOOL inSOSFlowOnCurrentDevice; // ivar: _inSOSFlowOnCurrentDevice
@property (nonatomic) NSInteger mostRecentTriggerSource; // ivar: _mostRecentTriggerSource
@property (retain, nonatomic) NSTimer *pairedDeviceStatusClearTimer; // ivar: _pairedDeviceStatusClearTimer
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_reportSOSEvent:(id)arg0 callDuration:(NSInteger)arg1 ;
-(void)cancelCurrentDeviceClearStatusTimer;
-(void)cancelHandoffFallbackTimer;
-(void)cancelPairedDeviceClearStatusTimer;
-(void)checkHandoffFallback;
-(void)checkSOSStatusOnLaunch;
-(void)clearHandoffFallbackState;
-(void)endAudioSession;
-(void)flowEnded;
-(void)flowEndedOnBothDevices;
-(void)flowEndedOnCurrentDevice;
-(void)flowStarted;
-(void)flowStartedOnCurrentDevice;
-(void)flowStartedOnEitherDevice;
-(void)handleLostStatusReporterConnection;
-(void)handleSOSCallStatusChange:(id)arg0 ;
-(void)pairedDeviceSOSStatusDidUpdate:(id)arg0 progression:(NSInteger)arg1 shouldHandleThirdParty:(BOOL)arg2 ;
-(void)sosTriggerDisabledWithUUID:(id)arg0 trigger:(NSInteger)arg1 ;
-(void)sosTriggerPushedToPairedDeviceWithUUID:(id)arg0 trigger:(NSInteger)arg1 ;
-(void)sosTriggeredOnPairedDevice:(id)arg0 ;
-(void)sosTriggeredWithUUID:(id)arg0 trigger:(NSInteger)arg1 source:(NSInteger)arg2 ;
-(void)startAudioSession;
-(void)startCurrentDeviceClearStatusTimer;
-(void)startHandoffFallbackTimer;
-(void)startPairedDeviceClearStatusTimer;
-(void)triggerHandoffFallback;
-(void)updatePairedDeviceSOSStatus:(id)arg0 ;
-(void)updateSOSFlowState:(NSInteger)arg0 ;


@end


#endif