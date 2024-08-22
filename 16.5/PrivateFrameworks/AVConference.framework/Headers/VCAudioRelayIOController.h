// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCAUDIORELAYIOCONTROLLER_H
#define VCAUDIORELAYIOCONTROLLER_H

@class NSMutableArray, NSString, NSDictionary;
@protocol VCAudioIOControllerControl, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCAudioRelay.h"
#import "VCAudioRelayIOControllerSettings.h"

@interface VCAudioRelayIOController : NSObject <VCAudioIOControllerControl>

 {
    unsigned int _relayType;
    unsigned int _relayIOType;
    unsigned int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_allClients;
    NSMutableArray *_startingIOClients;
    VCAudioRelay *_relay;
    ? _sinkData;
    ? _sourceData;
    VCAudioRelayIOControllerSettings *_currentSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *reportingStats;
@property (readonly) Class superclass;


+(id)sharedInstanceClientFacing;
+(id)sharedInstanceRemoteFacing;
+(id)sharedInstanceSafeViewClientFacing;
+(id)sharedInstanceSafeViewRemoteFacing;
+(void)initializeStateStrings;
-(?)registerClientIOcontrollerIO;
-(?)removeAllClientsForIO;
-(?)sinkIO;
-(?)sourceIO;
-(?)unregisterClientIOcontrollerIO;
-(BOOL)addClient:(id)arg0 ;
-(BOOL)handleTransitionPrepareToStarting;
-(BOOL)removeClient:(id)arg0 ;
-(BOOL)startRelayIO:(id)arg0 ;
-(BOOL)stateIdleWithControllerSettings:(id)arg0 client:(id)arg1 newState:(*unsigned int)arg2 ;
-(BOOL)statePrepareWithControllerSettings:(id)arg0 client:(id)arg1 newState:(*unsigned int)arg2 ;
-(BOOL)stateRunningWithControllerSettings:(id)arg0 client:(id)arg1 newState:(*unsigned int)arg2 ;
-(BOOL)stateStartingWithControllerSettings:(id)arg0 client:(id)arg1 newState:(*unsigned int)arg2 ;
-(BOOL)updateStateWithClient:(id)arg0 ;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRelayType:(unsigned int)arg0 relayIOType:(unsigned int)arg1 ;
-(id)newControllerSettingsWithNewClient:(id)arg0 ;
-(id)newRelayIOWithCompletionHandler:(id)arg0 ;
-(id)retain;
-(unsigned int)channelsPerFrame;
-(unsigned int)computeSamplePerFrameWithControllerSampleRate:(unsigned int)arg0 ;
-(void)_cleanupDeadClients;
-(void)addStartingClient:(id)arg0 controllerSettings:(id)arg1 ;
-(void)dealloc;
-(void)didUpdateBasebandCodec:(struct _VCRemoteCodecInfo *)arg0 ;
-(void)flushEventQueue:(struct opaqueCMSimpleQueue *)arg0 ;
-(void)loadRelay;
-(void)processEventQueue:(struct AudioEventQueue_t *)arg0 clientList:(id)arg1 ;
-(void)release;
-(void)resetAudioTimestamps;
-(void)startClient:(id)arg0 ;
-(void)stopClient:(id)arg0 ;
-(void)unloadRelay;
-(void)updateClient:(id)arg0 direction:(unsigned char)arg1 ;


@end


#endif