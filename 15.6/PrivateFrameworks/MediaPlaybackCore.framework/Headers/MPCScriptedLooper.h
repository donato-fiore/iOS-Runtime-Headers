// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCSCRIPTEDLOOPER_H
#define MPCSCRIPTEDLOOPER_H

@class NSError, MPNotificationObserver, AVPlayer;

#import <Foundation/Foundation.h>

#import "MPCSceneCollection.h"

@interface MPCScriptedLooper : NSObject

@property (nonatomic) NSInteger currentLoopCount; // ivar: _currentLoopCount
@property (nonatomic) NSInteger currentSceneIndex; // ivar: _currentSceneIndex
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic, getter=isExecutingPauseScene) BOOL executingPauseScene; // ivar: _executingPauseScene
@property (retain, nonatomic) MPNotificationObserver *itemDidPlayToEndObserver; // ivar: _itemDidPlayToEndObserver
@property (copy, nonatomic) id *pauseFinishedBlock; // ivar: _pauseFinishedBlock
@property (readonly, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) MPCSceneCollection *sceneCollection; // ivar: _sceneCollection
@property (nonatomic, getter=isSceneExecutionPaused) BOOL sceneExecutionPaused; // ivar: _sceneExecutionPaused
@property (nonatomic) NSInteger status; // ivar: _status
@property (retain, nonatomic) id *timeObserver; // ivar: _timeObserver


+(BOOL)isScriptedLoopingDisabled;
+(void)setScriptedLoopingDisabled:(BOOL)arg0 ;
-(NSInteger)frameForCMTime:(struct ? )arg0 ;
-(id)currentScene;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithAsset:(id)arg0 sceneCollection:(id)arg1 ;
-(id)initWithURL:(id)arg0 sceneCollection:(id)arg1 ;
-(struct ? )_CMTimeForFrame:(NSInteger)arg0 ;
-(void)_advanceScene;
-(void)_createSceneCollectionForAssetWithPreloadedKeys:(id)arg0 ;
-(void)_executeCurrentScene;
-(void)_executeSceneCollection;
-(void)_loopIfNeeded;
-(void)_pause;
-(void)_sharedInitWithItem:(id)arg0 ;
-(void)_updateRateIfNeeded;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseScenes;
-(void)playScenes;
-(void)restartScenes;
-(void)seekToFrameIfNeeded:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif