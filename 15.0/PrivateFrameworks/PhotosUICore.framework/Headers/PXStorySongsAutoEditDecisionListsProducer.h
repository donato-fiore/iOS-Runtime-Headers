// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYSONGSAUTOEDITDECISIONLISTSPRODUCER_H
#define PXSTORYSONGSAUTOEDITDECISIONLISTSPRODUCER_H

@class PFStoryAutoEditConfiguration, NSArray, NSMutableArray, NSString;
@protocol PXStoryVisualDiagnosticsProvider, PXStoryAutoEditDecisionListsProducer, OS_dispatch_queue, OS_os_log, PFRandomNumberGenerator, PXDisplayAssetCollection, PXDisplayAssetFetchResult, PXStoryMovieHighlightsCollection;

#import <Foundation/Foundation.h>

#import "PXStoryAutoEditClipComposabilityProvider.h"
#import "PXStoryAutoEditMomentsProvider.h"

@interface PXStorySongsAutoEditDecisionListsProducer : NSObject <PXStoryVisualDiagnosticsProvider, PXStoryAutoEditDecisionListsProducer>

 {
    PFStoryAutoEditConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    id<PFRandomNumberGenerator> *_randomNumberGenerator;
    id<PXDisplayAssetCollection> *_assetCollection;
    NSArray *_lastGeneratedAutoEditDecisionLists;
    NSMutableArray *_ttrUnitTestsForFailedDurationConstraints;
}


@property (retain, nonatomic) PXStoryAutoEditClipComposabilityProvider *composabilityProvider; // ivar: _composabilityProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXStoryAutoEditMomentsProvider *diagnosticsMomentsProvider;
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *displayAssets; // ivar: _displayAssets
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXStoryAutoEditMomentsProvider *momentsProvider; // ivar: _momentsProvider
@property (readonly, nonatomic) NSObject<PXStoryMovieHighlightsCollection> *movieHighlights; // ivar: _movieHighlights
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? targetOverallDurationInfo; // ivar: _targetOverallDurationInfo


-(BOOL)_canOverlapAudioFromClip:(id)arg0 withNextClip:(id)arg1 ;
-(BOOL)_canOverlapAudioFromClip:(id)arg0 withPreviousClip:(id)arg1 ;
-(BOOL)handlesDiagnosticTextForHUDType:(NSInteger)arg0 ;
-(NSInteger)_audioModeForAsset:(id)arg0 playbackStyle:(NSInteger)arg1 movieHighlight:(id)arg2 ;
-(NSInteger)_playbackStyleForAsset:(id)arg0 songPace:(NSInteger)arg1 ;
-(NSUInteger)_composeClips:(id)arg0 inAssetRange:(struct _NSRange )arg1 ;
-(float)_volumeGainForAsset:(id)arg0 movieHighlight:(id)arg1 audioMode:(NSInteger)arg2 ;
-(id)_decisionListForSong:(id)arg0 pace:(NSInteger)arg1 colorGradeCategory:(id)arg2 ;
-(id)_diagnosticTextForAutoEditHUDAtDisplaySize:(struct CGSize )arg0 ;
-(id)_diagnosticTextForComposabilityHUDAtDisplaySize:(struct CGSize )arg0 ;
-(id)_diagnosticTextForMomentsHUDAtDisplaySize:(struct CGSize )arg0 ;
-(id)_movieHighlightForAsset:(id)arg0 playbackStyle:(NSInteger)arg1 ;
-(id)debugQuickLookObject;
-(id)decisionListForSong:(id)arg0 pace:(NSInteger)arg1 colorGradeCategory:(id)arg2 ;
-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)init;
-(id)initWithAssetCollection:(id)arg0 displayAssets:(id)arg1 movieHighlights:(id)arg2 targetOverallDurationInfo:(struct ? )arg3 configuration:(id)arg4 ;
-(id)requestAutoEditDecisionListsWithOptions:(NSUInteger)arg0 songs:(id)arg1 colorGradeCategoriesBySong:(id)arg2 resultHandler:(id)arg3 ;
-(id)requestDefaultAutoEditDecisionListsWithColorGradeCategory:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;
-(struct ? )_durationInfoForClip:(id)arg0 durationMultiplier:(CGFloat)arg1 songPace:(NSInteger)arg2 transitionIn:(*CGFloat)arg3 transitionOut:(*CGFloat)arg4 ;
-(struct ? )_optimizeOverallDurationOfClips:(id)arg0 forSong:(id)arg1 ;
-(void)_addComposabilityGraph:(id)arg0 ;
-(void)_addMomentsGraph:(id)arg0 ;
-(void)_addTimeConstraintGraph:(id)arg0 ;
-(void)_adjustAudioPlaybackForClips:(id)arg0 ;
-(void)_adjustAudioTransitionForClips:(id)arg0 ;
-(void)_adjustDurationOfClips:(id)arg0 forSongPace:(NSInteger)arg1 ;
-(void)_audioCutsFromClip:(id)arg0 toClip:(id)arg1 useJCut:(*BOOL)arg2 useLCut:(*BOOL)arg3 ;
-(void)_composeClips:(id)arg0 forSongPace:(NSInteger)arg1 ;
-(void)_populateClips:(id)arg0 forSongPace:(NSInteger)arg1 colorGradeCategory:(id)arg2 ;
-(void)_populateModulesInClips:(id)arg0 ;
-(void)_populateMomentRecipesInClips:(id)arg0 forSongPace:(NSInteger)arg1 colorGradeCategory:(id)arg2 ;
-(void)_populateMotionStylesAndTransitionsInClips:(id)arg0 forSongPace:(NSInteger)arg1 colorGradeCategory:(id)arg2 ;
-(void)_populateMotionStylesInClips:(id)arg0 forSongPace:(NSInteger)arg1 colorGradeCategory:(id)arg2 ;
-(void)_populateTransitionsInClips:(id)arg0 forSongPace:(NSInteger)arg1 colorGradeCategory:(id)arg2 ;
-(void)addVisualDiagnosticsToContext:(id)arg0 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;


@end


#endif