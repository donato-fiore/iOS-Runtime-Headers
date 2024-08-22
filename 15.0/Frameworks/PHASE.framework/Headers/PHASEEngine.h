// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASEENGINE_H
#define PHASEENGINE_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "PHASEObject.h"
#import "PHASEMedium.h"
#import "PHASEGroupPreset.h"
#import "PHASEAssetRegistry.h"
#import "PHASETapRegistry.h"

@interface PHASEEngine : NSObject {
    unique_ptr<PHASEEngineImpl, std::default_delete<PHASEEngineImpl>> _impl;
    PHASEObject *_rootObject;
    PHASEMedium *_defaultMedium;
    NSInteger _outputSpatializationMode;
    CGFloat _unitsPerSecond;
    NSMutableArray *_internalSoundEvents;
    StopWatch<std::chrono::steady_clock> _stopWatch;
    NSMutableDictionary *_groups;
    NSMutableDictionary *_duckers;
    CGFloat _maxGainDbSpl;
}


@property (readonly, nonatomic) PHASEGroupPreset *activeGroupPreset; // ivar: _activeGroupPreset
@property (readonly, nonatomic) PHASEAssetRegistry *assetRegistry; // ivar: _assetRegistry
@property (nonatomic) CGFloat balance; // ivar: _balance
@property (retain, nonatomic) PHASEMedium *defaultMedium;
@property (nonatomic) NSInteger defaultReverbPreset; // ivar: _defaultReverbPreset
@property (readonly, copy, nonatomic) NSArray *duckers;
@property (readonly, nonatomic) NSInteger engineMode;
@property (nonatomic) NSInteger experience; // ivar: _experience
@property (readonly, copy, nonatomic) NSDictionary *groups;
@property (readonly, nonatomic) *void implementation;
@property (nonatomic) CGFloat maximumGainDbSpl;
@property (nonatomic) NSInteger outputSpatializationMode;
@property (nonatomic) NSInteger overrideOutputSpatializationMode;
@property (readonly, nonatomic) NSInteger renderingState;
@property (readonly, nonatomic) PHASEObject *rootObject;
@property (readonly, nonatomic) CGFloat sampleRate; // ivar: _sampleRate
@property (readonly, copy, nonatomic) NSArray *soundEvents;
@property (nonatomic) NSInteger spatialHint;
@property (readonly, nonatomic) PHASETapRegistry *tapRegistry; // ivar: _tapRegistry
@property (nonatomic) CGFloat unitsPerMeter; // ivar: _unitsPerMeter
@property (nonatomic) CGFloat unitsPerSecond;


+(id)new;
-(BOOL)initInternalWithUpdateMode:(NSInteger)arg0 engineMode:(NSInteger)arg1 platform:(id)arg2 ;
-(BOOL)setHeadphoneHRIRFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)setHeadphoneHRIRFile:(id)arg0 outError:(*id)arg1 ;
-(BOOL)startAndReturnError:(*id)arg0 ;
-(id)init;
-(id)initWithPlatform:(id)arg0 ;
-(id)initWithSampleRate:(CGFloat)arg0 updateMode:(NSInteger)arg1 ;
-(id)initWithUpdateMode:(NSInteger)arg0 ;
-(id)initWithUpdateMode:(NSInteger)arg0 engineMode:(NSInteger)arg1 ;
-(id)initWithUpdateMode:(NSInteger)arg0 engineMode:(NSInteger)arg1 platform:(id)arg2 ;
-(void)addDucker:(id)arg0 ;
-(void)addGroup:(id)arg0 ;
-(void)addSoundEvent:(id)arg0 ;
-(void)dealloc;
-(void)disableTargetRoomAcousticParameters;
-(void)enableTargetRoomAcousticParameters:(id)arg0 ;
-(void)pause;
-(void)removeDucker:(id)arg0 ;
-(void)removeGroup:(id)arg0 ;
-(void)removeSoundEvent:(id)arg0 ;
-(void)setInternalActiveGroupMixerPreset:(id)arg0 ;
-(void)setSpatialCategoryBandCount:(NSUInteger)arg0 withName:(id)arg1 ;
-(void)setSpatialCategoryUpdateRate:(float)arg0 withName:(id)arg1 ;
-(void)stop;
-(void)update;


@end


#endif