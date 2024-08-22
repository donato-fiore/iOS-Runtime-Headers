// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXHALIVELISTENCONTROLLER_H
#define AXHALIVELISTENCONTROLLER_H

@class SBSStatusBarStyleOverridesAssertion, AXDispatchTimer;
@protocol AXHALiveListenDelegate;

#import <Foundation/Foundation.h>

#import "HUAudioSession.h"

@interface AXHALiveListenController : NSObject {
    SBSStatusBarStyleOverridesAssertion *_llStatusBarAssertion;
    float _noise;
    float _signal;
    *OpaqueExtAudioFile _debugAudioFile;
}


@property (retain, nonatomic) AXDispatchTimer *accessoryUpdateTimer; // ivar: _accessoryUpdateTimer
@property (weak, nonatomic) NSObject<AXHALiveListenDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL didInitializeAudioUnit; // ivar: _didInitializeAudioUnit
@property (nonatomic) BOOL exportsLiveListenToFile; // ivar: _exportsLiveListenToFile
@property (nonatomic) BOOL isListening; // ivar: isListening
@property (readonly, nonatomic) *OpaqueAudioComponentInstance mixerUnit; // ivar: _mixerUnit
@property (readonly, nonatomic) *OpaqueAudioComponentInstance rioUnit; // ivar: _rioUnit
@property (retain, nonatomic) HUAudioSession *session; // ivar: _session
@property (nonatomic) BOOL waitingForAccessoryUpdate; // ivar: _waitingForAccessoryUpdate


-(BOOL)startListeningWithError:(*id)arg0 ;
-(BOOL)stopListeningWithError:(*id)arg0 ;
-(float)audioLevel;
-(id)init;
-(struct OpaqueExtAudioFile *)debugAudioFile;
-(void)audioRouteDidChange:(id)arg0 ;
-(void)audioSessionWasInterrupted:(id)arg0 ;
-(void)dealloc;
-(void)mediaServicesWereReset:(id)arg0 ;


@end


#endif