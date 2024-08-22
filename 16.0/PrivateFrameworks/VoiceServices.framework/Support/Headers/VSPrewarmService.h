// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSPREWARMSERVICE_H
#define VSPREWARMSERVICE_H

@class VSSpeechEngine, VSVoiceResourceAsset;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VSPrewarmService : NSObject

@property (nonatomic) NSInteger activeSessionCount; // ivar: _activeSessionCount
@property (retain, nonatomic) VSSpeechEngine *cachedEngine; // ivar: _cachedEngine
@property (retain, nonatomic) VSVoiceResourceAsset *loadedResources; // ivar: _loadedResources
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prewarmQueue; // ivar: _prewarmQueue


+(id)sharedService;
-(id)_cachedEngineForVoice:(id)arg0 resources:(id)arg1 ;
-(id)_engineForVoice:(id)arg0 resources:(id)arg1 ;
-(id)cachedEngineForVoice:(id)arg0 resources:(id)arg1 ;
-(id)init;
-(id)loadEngineForVoice:(id)arg0 resources:(id)arg1 ;
-(void)_loadVoiceResources:(id)arg0 forEngine:(id)arg1 ;
-(void)handleVoiceSelectionPurge:(id)arg0 ;
-(void)prewarmWithRequest:(id)arg0 ;
-(void)unloadCachedEngineWithVoice:(id)arg0 ;
-(void)unloadEngine;
-(void)waitUntilPrewarmFinish;


@end


#endif