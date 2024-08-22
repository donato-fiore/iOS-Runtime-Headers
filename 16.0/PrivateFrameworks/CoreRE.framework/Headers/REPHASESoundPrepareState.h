// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REPHASESOUNDPREPARESTATE_H
#define REPHASESOUNDPREPARESTATE_H

@class AVAudioFormat, AVAudioSession, AUAudioUnit, AVAudioChannelLayout, PHASEDirectivityModelParameters, NSUUID, PHASEGroup;

#import <Foundation/Foundation.h>


@interface REPHASESoundPrepareState : NSObject {
    atomic<bool> _hasSuccesfullyCompleted;
    vector<unsigned long long, std::allocator<unsigned long long>> _fileGroupAssetIDs;
}


@property (nonatomic) NSUInteger assetID; // ivar: _assetID
@property (nonatomic) NSInteger assetType; // ivar: _assetType
@property (retain, nonatomic) AVAudioFormat *audioFormat; // ivar: _audioFormat
@property (retain, nonatomic) AVAudioSession *audioSession; // ivar: _audioSession
@property (retain, nonatomic) AUAudioUnit *audioUnit; // ivar: _audioUnit
@property (readonly, nonatomic) AVAudioChannelLayout *channelLayout;
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) float directivityFocus; // ivar: _directivityFocus
@property (nonatomic) int directivityMode; // ivar: _directivityMode
@property (retain, nonatomic) PHASEDirectivityModelParameters *directivityOverride; // ivar: _directivityOverride
@property (nonatomic) float directivitySphericalCapDiameter; // ivar: _directivitySphericalCapDiameter
@property (nonatomic) float directivitySphericalCapOpeningAngle; // ivar: _directivitySphericalCapOpeningAngle
@property (nonatomic) NSUInteger entityID; // ivar: _entityID
@property (retain, nonatomic) NSUUID *externalStreamUUID; // ivar: _externalStreamUUID
@property ? fileGroupAssetIDs;
@property (retain, nonatomic) PHASEDirectivityModelParameters *humanDirectivity; // ivar: _humanDirectivity
@property (nonatomic) unsigned char inputMode; // ivar: _inputMode
@property (nonatomic) unsigned int layoutTag; // ivar: _layoutTag
@property (nonatomic) int loopCount; // ivar: _loopCount
@property (retain, nonatomic) PHASEGroup *mixGroup; // ivar: _mixGroup
@property (nonatomic) NSUInteger mixGroupID; // ivar: _mixGroupID
@property (copy, nonatomic) id *playbackStateChangeHandler; // ivar: _playbackStateChangeHandler
@property (nonatomic) NSUInteger playbackToken; // ivar: _playbackToken
@property (nonatomic) BOOL randomizeStart; // ivar: _randomizeStart
@property (nonatomic) NSUInteger sceneID; // ivar: _sceneID


-(id)initWithCompletion:(id)arg0 ;


@end


#endif