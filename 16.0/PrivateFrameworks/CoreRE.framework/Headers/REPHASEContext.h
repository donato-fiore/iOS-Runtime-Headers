// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REPHASECONTEXT_H
#define REPHASECONTEXT_H

@class PHASEEngine, NSURL, PHASENumberMetaParameterDefinition, PHASECardioidDirectivityModelParameters, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface REPHASEContext : NSObject {
    BOOL _testNilEngine;
    CGFloat _referenceGainDBSPL;
    PHASEEngine *_engine;
    int _mixerDefNameCounter;
    atomic<bool> _stoppedAndDestroyed;
    unique_ptr<re::HashTable<unsigned long long, REPHASEAudioScene *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false>, std::function<void (re::HashTable<unsigned long long, REPHASEAudioScene *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> _scenes;
    unique_ptr<re::HashTable<unsigned long long, PHASEShape *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false>, std::function<void (re::HashTable<unsigned long long, PHASEShape *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> _shapes;
    unique_ptr<re::HashTable<unsigned long long, REPHASESoundEvent *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false>, std::function<void (re::HashTable<unsigned long long, REPHASESoundEvent *, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> _soundEvents;
    UnfairLock _soundEventsMutex;
    unique_ptr<re::HashTable<unsigned long long, bool, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false>, std::function<void (re::HashTable<unsigned long long, bool, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> _soundEventsPreparing;
    UnfairLock _soundEventsPreparingMutex;
    unique_ptr<re::HashTable<unsigned long long, REPHASESoundAsset, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false>, std::function<void (re::HashTable<unsigned long long, REPHASESoundAsset, re::Hash<uint64_t>, re::EqualTo<uint64_t>, true, false> *)>> _audioAssets;
    UnfairLock _audioAssetsMutex;
    UnfairLock _audioEngineMutex;
}


@property (nonatomic) BOOL automaticUpdate; // ivar: _automaticUpdate
@property (retain, nonatomic) NSURL *customHRIRURL; // ivar: _customHRIRURL
@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *directSendParamDefinition; // ivar: _directSendParamDefinition
@property (readonly) PHASEEngine *engine;
@property (readonly, nonatomic) BOOL engineIsConfiguredForAutomaticUpdate; // ivar: _engineIsConfiguredForAutomaticUpdate
@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *gainLinearParamDefinition; // ivar: _gainLinearParamDefinition
@property (readonly, nonatomic) PHASECardioidDirectivityModelParameters *humanDirectivity; // ivar: _humanDirectivity
@property (readonly, nonatomic) unsigned int maxBufferSize; // ivar: _maxBufferSize
@property (readonly) PHASEEngine *maybeEngine;
@property (readonly, nonatomic) NSMutableDictionary *mixGroups; // ivar: _mixGroups
@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *rateParamDefinition; // ivar: _rateParamDefinition
@property (nonatomic) NSInteger reverbPreset; // ivar: _reverbPreset
@property (readonly, nonatomic) PHASENumberMetaParameterDefinition *reverbSendParamDefinition; // ivar: _reverbSendParamDefinition
@property (readonly, nonatomic) CGFloat sampleRate; // ivar: _sampleRate
@property (nonatomic) BOOL shouldPostNotificationWhenPHASESoundEventCreated; // ivar: _shouldPostNotificationWhenPHASESoundEventCreated
@property (nonatomic) NSInteger spaceBlendTargetReverbPreset; // ivar: _spaceBlendTargetReverbPreset


-(*void)scenes;
-(*void)shapes;
-(*void)soundEvents;
-(*void)soundEventsPreparing;
-(BOOL)eventBeingPrepared:(NSUInteger)arg0 ;
-(BOOL)getConfigurationForAudioAssetID:(NSUInteger)arg0 configuration:(struct AudioAssetConfiguration *)arg1 ;
-(CGFloat)doubleFromPlistValue:(id)arg0 defaultValue:(CGFloat)arg1 ;
-(float)allowableUpwardGainForAudioAssetID:(NSUInteger)arg0 ;
-(id)baseMixerDefinitionWith:(id)arg0 ;
-(id)createSamplerDefinitionForToken:(NSUInteger)arg0 ;
-(id)eventFor:(NSUInteger)arg0 ;
-(id)groupUDIDWithSceneID:(NSUInteger)arg0 playbackHostConnectionIdentifier:(NSUInteger)arg1 groupID:(NSUInteger)arg2 ;
-(id)initWithSampleRate:(CGFloat)arg0 maxBufferSize:(unsigned int)arg1 referenceGain:(CGFloat)arg2 automaticUpdate:(BOOL)arg3 ;
-(id)mixerParametersForPrepareState:(id)arg0 source:(id)arg1 listener:(id)arg2 mixerIdentifiers:(id)arg3 ;
-(id)phaseGroupWithSceneID:(NSUInteger)arg0 playbackHostConnectionIdentifier:(NSUInteger)arg1 groupID:(NSUInteger)arg2 ;
-(id)phaseIDForAssetID:(NSUInteger)arg0 ;
-(id)samplerDefForFileAsset:(NSUInteger)arg0 with:(id)arg1 ;
-(id)sceneForID:(NSUInteger)arg0 ;
-(id)spatialMixerDefinition:(id)arg0 ;
-(void)addAudioAssetID:(NSUInteger)arg0 asset:(id)arg1 configuration:(struct AudioAssetConfiguration *)arg2 ;
-(void)addEvent:(id)arg0 forToken:(NSUInteger)arg1 ;
-(void)applyCustomHRIR;
-(void)applyReverbPreset;
-(void)createPendingListenersIfReady;
-(void)loadHumanDirectivityPlistFromURL:(id)arg0 ;
-(void)postDidCreateSoundEventNotificationWithSource:(id)arg0 mixGroupID:(NSUInteger)arg1 ;
-(void)prepare:(id)arg0 ;
-(void)removeAudioAssetID:(NSUInteger)arg0 ;
-(void)removeEntity:(NSUInteger)arg0 ;
-(void)removeEventFor:(NSUInteger)arg0 ;
-(void)setPreparing:(BOOL)arg0 forToken:(NSUInteger)arg1 ;
-(void)stopAllAndReset;
-(void)testNilEngine;
-(void)update;


@end


#endif