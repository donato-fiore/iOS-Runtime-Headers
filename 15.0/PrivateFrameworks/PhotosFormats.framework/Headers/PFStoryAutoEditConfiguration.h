// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFSTORYAUTOEDITCONFIGURATION_H
#define PFSTORYAUTOEDITCONFIGURATION_H

@class NSDictionary, NSURL;
@protocol PFStoryTransitionTable, PFStoryMotionStyleTable;

#import <Foundation/Foundation.h>


@interface PFStoryAutoEditConfiguration : NSObject {
    NSDictionary *_durationTablesByPlaybackStyle;
    NSDictionary *_transitionDurationsByKind;
    NSDictionary *_clusteringPropertiesByCategory;
    NSDictionary *_overallDurationTable;
    NSDictionary *_outroDurations;
}


@property (readonly, nonatomic) NSInteger composabilityMaximumNUpRunCount; // ivar: _composabilityMaximumNUpRunCount
@property (readonly, nonatomic) NSInteger composabilityMinimum1UpRunCount; // ivar: _composabilityMinimum1UpRunCount
@property (readonly, nonatomic) NSInteger composabilityMinimumNUpCount; // ivar: _composabilityMinimumNUpCount
@property (readonly, nonatomic) CGFloat composabilityScoreThreshold; // ivar: _composabilityScoreThreshold
@property (readonly, nonatomic) CGFloat composabilityTargetDurationMultiplier; // ivar: _composabilityTargetDurationMultiplier
@property (readonly, nonatomic) NSObject<PFStoryTransitionTable> *defaultTransitionTable; // ivar: _defaultTransitionTable
@property (readonly, nonatomic) CGFloat diptychDurationMultiplier; // ivar: _diptychDurationMultiplier
@property (readonly, nonatomic) NSObject<PFStoryMotionStyleTable> *diptychMotionStyleTable; // ivar: _diptychMotionStyleTable
@property (readonly, nonatomic) CGFloat fastVisualTempoTarget; // ivar: _fastVisualTempoTarget
@property (readonly, nonatomic) CGFloat finalDurationMultiplier; // ivar: _finalDurationMultiplier
@property (readonly, nonatomic) CGFloat initialDurationMultiplier; // ivar: _initialDurationMultiplier
@property (readonly, nonatomic) NSObject<PFStoryTransitionTable> *interModuleTransitionTable; // ivar: _interModuleTransitionTable
@property (readonly, nonatomic) NSObject<PFStoryTransitionTable> *interMomentTransitionTable; // ivar: _interMomentTransitionTable
@property (readonly, nonatomic) ? longOverallDuration;
@property (readonly, nonatomic) ? maximumDurations;
@property (readonly, nonatomic) ? mediumOverallDuration;
@property (readonly, nonatomic) CGFloat mediumVisualTempoTarget; // ivar: _mediumVisualTempoTarget
@property (readonly, nonatomic) ? minimumDurations;
@property (readonly, nonatomic) NSObject<PFStoryMotionStyleTable> *motionStyleTable; // ivar: _motionStyleTable
@property (readonly, nonatomic) NSObject<PFStoryTransitionTable> *nUpTransitionTable; // ivar: _nUpTransitionTable
@property (readonly, nonatomic) NSObject<PFStoryTransitionTable> *portraitTransitionTable; // ivar: _portraitTransitionTable
@property (readonly, nonatomic) ? shortOverallDuration;
@property (readonly, nonatomic) CGFloat slowVisualTempoTarget; // ivar: _slowVisualTempoTarget
@property (readonly, nonatomic) CGFloat triptychDurationMultiplier; // ivar: _triptychDurationMultiplier
@property (readonly, nonatomic) NSObject<PFStoryMotionStyleTable> *triptychMotionStyleTable; // ivar: _triptychMotionStyleTable
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)currentVersion;
+(id)standardConfiguration;
-(CGFloat)durationForTransitionKind:(NSInteger)arg0 songPace:(NSInteger)arg1 ;
-(CGFloat)outroDurationForSongPace:(NSInteger)arg0 ;
-(id)_arrayFromTable:(id)arg0 count:(NSUInteger)arg1 nameToValueMap:(id)arg2 ;
-(id)_loadData:(id)arg0 ;
-(id)clusteringPropertiesForMemoryCategoryName:(id)arg0 ;
-(id)init;
-(id)initWithConfigurationData:(id)arg0 ;
-(id)initWithConfigurationDictionary:(id)arg0 ;
-(id)initWithConfigurationFileAtURL:(id)arg0 ;
-(struct ? )_overallDurationInfoForDurationKind:(NSInteger)arg0 ;
-(struct ? )durationInfoForPlaybackStyle:(NSInteger)arg0 songPace:(NSInteger)arg1 ;
-(void)_loadClusteringPropertiesFromMemoryCategories:(id)arg0 ;


@end


#endif