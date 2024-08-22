// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCOMFORTSOUNDSCONTROLLER_H
#define HUCOMFORTSOUNDSCONTROLLER_H

@class AVAudioPlayerNode, NSString, AVAudioEngine;
@protocol HUComfortSoundsAssetManagerDelegate, OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "HUComfortSoundsAssetManager.h"
#import "HUComfortSound.h"
#import "HUAudioSession.h"

@interface HUComfortSoundsController : NSObject <HUComfortSoundsAssetManagerDelegate>

 {
    id *_mixingBlock;
    id *_duckingBlock;
    id *_rampUpBlock;
    id *_rampDownBlock;
    CGFloat _fadeDuration;
    CGFloat _duckDuration;
    CGFloat _changeDuration;
    CGFloat _stepsPerSecond;
    CGFloat _stepDuration;
}


@property (retain, nonatomic) HUComfortSoundsAssetManager *assetManager; // ivar: _assetManager
@property (retain, nonatomic) AVAudioPlayerNode *audioPlayerNodeA; // ivar: _audioPlayerNodeA
@property (retain, nonatomic) AVAudioPlayerNode *audioPlayerNodeB; // ivar: _audioPlayerNodeB
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioQueue; // ivar: _audioQueue
@property (nonatomic) BOOL changePending; // ivar: _changePending
@property (nonatomic) BOOL changingSounds; // ivar: _changingSounds
@property (nonatomic) BOOL crossFading; // ivar: _crossFading
@property (retain, nonatomic) AVAudioPlayerNode *currentNode; // ivar: _currentNode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVAudioEngine *engine; // ivar: _engine
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL holdingForCall; // ivar: _holdingForCall
@property (nonatomic) CGFloat outputGain; // ivar: _outputGain
@property (retain, nonatomic) NSString *routeUID; // ivar: _routeUID
@property (retain, nonatomic) HUComfortSound *selectedSound; // ivar: _selectedSound
@property (retain, nonatomic) HUAudioSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


+(id)sharedController;
-(BOOL)currentRouteSupported;
-(BOOL)isPlaying;
-(BOOL)isPlayingOnQueue;
-(BOOL)shouldContinuePlayback;
-(id)init;
-(id)nextFileToPlay;
-(id)processComfortSoundsAssetRequest:(id)arg0 ;
-(void)assetDownloadDidUpdate;
-(void)audioSessionWasInterrupted:(id)arg0 ;
-(void)availableAssetsDidUpdate;
-(void)callStatusDidChange:(id)arg0 ;
-(void)clearActiveRoute;
-(void)mediaPlaybackDidChange:(id)arg0 ;
-(void)mediaServerDied;
-(void)play;
-(void)playOnQueue;
-(void)rampNodeVolume:(id)arg0 from:(CGFloat)arg1 to:(CGFloat)arg2 fadeDuration:(CGFloat)arg3 ;
-(void)rampNodeVolume:(id)arg0 from:(CGFloat)arg1 to:(CGFloat)arg2 fadeDuration:(CGFloat)arg3 withProgress:(CGFloat)arg4 ;
-(void)rampOutputGainFrom:(CGFloat)arg0 to:(CGFloat)arg1 withProgress:(CGFloat)arg2 ;
-(void)registerNotifications;
-(void)routesDidChange:(id)arg0 ;
-(void)scheduleFile;
-(void)scheduleNewFile;
-(void)setVolume:(CGFloat)arg0 forNode:(id)arg1 andRamp:(BOOL)arg2 ;
-(void)setupEngine;
-(void)stop;
-(void)stopAndClearRoute:(BOOL)arg0 ;
-(void)stopOnQueueAndClearRoute:(BOOL)arg0 ;
-(void)updateAnalytics;
-(void)updateVolumeForSessionAndRamp:(BOOL)arg0 ;


@end


#endif