// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCAUDIOASSETTYPESELECTOR_H
#define MPCAUDIOASSETTYPESELECTOR_H

@class MPPlaybackUserDefaults, ICEnvironmentMonitor, MSVABTestGenerator;

#import <Foundation/Foundation.h>


@interface MPCAudioAssetTypeSelector : NSObject

@property (retain, nonatomic) MPPlaybackUserDefaults *defaults; // ivar: _defaults
@property (retain, nonatomic) ICEnvironmentMonitor *environmentMonitor; // ivar: _environmentMonitor
@property (readonly, nonatomic) BOOL networkBandwidthIsHigh;
@property (readonly, nonatomic) MSVABTestGenerator *outcomeGenerator; // ivar: _outcomeGenerator
@property (readonly, nonatomic) BOOL prefersHighQualityStereo;
@property (readonly, nonatomic) BOOL prefersHighResolutionLossless;
@property (readonly, nonatomic) BOOL prefersLossless;
@property (readonly, nonatomic) BOOL prefersLowQualityStereo;
@property (readonly, nonatomic) BOOL prefersSpatialOverLossless;
@property (readonly, nonatomic) BOOL spatialIsAlwaysOn;
@property (readonly, nonatomic) BOOL spatialIsAutomatic;
@property (readonly, nonatomic) BOOL spatialIsOff;


+(id)sharedSelector;
-(BOOL)prefersSpatialOverStereo:(id)arg0 ;
-(BOOL)userPrefersMultichannelAudioOverStereo:(id)arg0 ;
-(NSInteger)tierMatchingAudioAssetType:(NSInteger)arg0 ;
-(NSUInteger)audioFormatPreference;
-(id)audioFormatMatchingAudioAssetType:(NSInteger)arg0 formats:(id)arg1 route:(id)arg2 ;
-(id)description;
-(id)descriptionForTiers:(NSUInteger)arg0 ;
-(id)descriptionForTraits:(NSUInteger)arg0 ;
-(id)environmentDescription;
-(id)init;
-(id)initWithPlaybackUsersDefaults:(id)arg0 environmentMonitor:(id)arg1 probabilityOfProgressiveDownloadAssets:(float)arg2 ;
-(id)preferencesDescription;
-(id)preferredAudioAssetTypeForItem:(id)arg0 ;
-(id)preferredAudioAssetTypeForSongWithTrait:(NSUInteger)arg0 ;
-(id)preferredAudioFormatForAudioFormats:(id)arg0 route:(id)arg1 ;
-(id)preferredPlayerAudioFormatForItem:(id)arg0 route:(id)arg1 ;
-(void)updateProbabilityOfProgressiveDownloadAssets:(float)arg0 ;


@end


#endif