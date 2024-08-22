// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMSOUNDCOMPONENT_H
#define AXMSOUNDCOMPONENT_H

@class AVAudioEngine, AVAudioPlayerNode, NSMutableArray;


#import "AXMOutputComponent.h"

@interface AXMSoundComponent : AXMOutputComponent {
    AVAudioEngine *_engine;
    AVAudioPlayerNode *_oneShotSoundPlayer;
    NSMutableArray *_activeSounds;
}


@property (retain, nonatomic) id *configChangedObserverToken; // ivar: _configChangedObserverToken


+(BOOL)isSupported;
-(BOOL)_startEngineIfNeeded:(*id)arg0 ;
-(BOOL)canHandleRequest:(id)arg0 ;
-(id)_scheduleActiveSound:(id)arg0 ;
-(id)init;
-(void)_logAudioFileInfo:(id)arg0 ;
-(void)_scheduleOneShotSound:(id)arg0 completion:(id)arg1 ;
-(void)_stopActiveSound:(id)arg0 ;
-(void)dealloc;
-(void)handleRequest:(id)arg0 completion:(id)arg1 ;
-(void)transitionToState:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif