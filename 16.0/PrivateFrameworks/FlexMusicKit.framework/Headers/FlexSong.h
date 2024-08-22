// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLEXSONG_H
#define FLEXSONG_H

@class NSDictionary, NSMutableDictionary, NSString, NSArray;
@protocol FlexSongAssetProviderProtocol;


#import "FlexSongBackend.h"

@interface FlexSong : FlexSongBackend {
    NSDictionary *_analysisData;
    ? _cachedNaturalDuration;
    NSMutableDictionary *_segmentCache;
}


@property (readonly, nonatomic) NSObject<FlexSongAssetProviderProtocol> *assetProvider; // ivar: _assetProvider
@property (readonly, nonatomic) NSString *audioFileExtension; // ivar: _audioFileExtension
@property (readonly, nonatomic) NSArray *bodySegments; // ivar: _bodySegments
@property (readonly, nonatomic) NSArray *crossFadeSegments;
@property (readonly, nonatomic) NSArray *introSegments;
@property (readonly, nonatomic) NSArray *mainSegments;
@property (readonly, nonatomic) NSArray *outroSegments;
@property (readonly, nonatomic) NSArray *transSegments;


+(BOOL)_transitionIsPossibleFromSegment:(id)arg0 toSegment:(id)arg1 forBodyClipPlaylist:(id)arg2 ;
+(NSInteger)_durationInSamplesToReserveForOutroSegment:(id)arg0 withOptions:(id)arg1 ;
+(NSInteger)_findEarlyFadeStartOffsetInSamplesForOutroSegment:(id)arg0 withOptions:(id)arg1 ;
+(NSInteger)_findMaxLengthInSamplesToReserveForOutroSegment:(id)arg0 withOptions:(id)arg1 ;
+(NSInteger)_findMinLengthInSamplesForEarlyFadeOutForOutroSegment:(id)arg0 withOptions:(id)arg1 ;
+(id)loadSongInFolderWithPath:(id)arg0 ;
+(id)numberToString:(NSInteger)arg0 ;
+(id)outroInfoForClipPlaylist:(id)arg0 ;
-(BOOL)_addBodySegmentsForAssemblyList:(id)arg0 forDuration:(NSInteger)arg1 unusedDuration:(*NSInteger)arg2 testingContext:(id)arg3 timedOut:(*BOOL)arg4 ;
-(BOOL)_addIntroSegmentsToAssemblyList:(id)arg0 forDuration:(NSInteger)arg1 testingContext:(id)arg2 ;
-(BOOL)_addOutroSegmentsToAssemblyList:(id)arg0 forDuration:(NSInteger)arg1 allowTrim:(BOOL)arg2 testingContext:(id)arg3 ;
-(BOOL)_addSegment:(id)arg0 withDuration:(NSInteger)arg1 toAssemblyList:(id)arg2 indexOfNewSegment:(*NSInteger)arg3 ;
-(BOOL)_addSegment:(id)arg0 withDuration:(NSInteger)arg1 toAssemblyList:(id)arg2 timeRemaining:(NSInteger)arg3 reusedSegment:(*id)arg4 indexofNewSegment:(*NSInteger)arg5 ;
-(BOOL)_buildIntroAndOutroOnlySegmentAssemblyList:(id)arg0 forDuration:(NSInteger)arg1 testingContext:(id)arg2 ;
-(BOOL)_buildSegmentAssemblyList:(id)arg0 forDuration:(NSInteger)arg1 withOptions:(id)arg2 testingContext:(id)arg3 ;
-(BOOL)_rebuildBodySegmentsInAssemblyList:(id)arg0 forDuration:(NSInteger)arg1 unusedDuration:(*NSInteger)arg2 testingContext:(id)arg3 ;
-(BOOL)_removeUnpermittedTransitionsInAssemblyList:(id)arg0 final:(BOOL)arg1 testingContext:(id)arg2 removedIndexes:(id)arg3 ;
-(BOOL)_removeUnpermittedTransitionsInAssemblyList:(id)arg0 final:(BOOL)arg1 testingContext:(id)arg2 removedIndexes:(id)arg3 conflictList:(id)arg4 ;
-(BOOL)_updateTransitionBodySegmentsForAssemblyList:(id)arg0 usingNewSegment:(id)arg1 indexOfNewTransitionSegment:(id)arg2 ;
-(BOOL)_validateAuthoringIssuesInRendition:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)_validateStructureForRendition:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)_validateTransitionsInRendition:(id)arg0 failureReason:(*id)arg1 ;
-(BOOL)_verifyAssetsForSegment:(id)arg0 withFailureReason:(*id)arg1 ;
-(BOOL)canPlay;
-(BOOL)isLoaded;
-(BOOL)verifyAssetsWithFailureReason:(*id)arg0 ;
-(BOOL)verifyRendition:(id)arg0 forDuration:(struct ? )arg1 failureReason:(*id)arg2 ;
-(NSInteger)_actualOutroDurationForAssemblyList:(id)arg0 currentDuration:(NSInteger)arg1 ;
-(NSInteger)_maxIntroDuration;
-(NSInteger)_maxOutroDuration;
-(NSInteger)_minBodySegmentDuration;
-(NSInteger)_minIntroDuration;
-(NSInteger)_minOutroDuration;
-(NSInteger)_minimumPermittedIntroAndOutroDuration;
-(NSInteger)_sampleDurationOfClipPlaylist:(id)arg0 ;
-(NSInteger)_samplesForDuration:(struct ? )arg0 ;
-(NSUInteger)_highestIndexForSegmentType:(NSUInteger)arg0 ;
-(id)_cacheObjectForKey:(id)arg0 ;
-(id)_clipPlaylistForDuration:(struct ? )arg0 withOptions:(id)arg1 testingContext:(id)arg2 ;
-(id)_decodedMainSegmentsFromCache;
-(id)_fullSongLoopedClipPlaylistForDuration:(struct ? )arg0 withOptions:(id)arg1 testingContext:(id)arg2 ;
-(id)_longestSegmentForType:(NSUInteger)arg0 ;
-(id)_longestSegmentsForType:(NSUInteger)arg0 ;
-(id)_metadataDictFromCache;
-(id)_naturalDurationAssemblyList;
-(id)_segmentsForIndex:(NSUInteger)arg0 andType:(NSUInteger)arg1 ;
-(id)_segmentsforType:(NSUInteger)arg0 ;
-(id)_shortestSegmentForType:(NSUInteger)arg0 ;
-(id)_shortestSegmentsForType:(NSUInteger)arg0 ;
-(id)_sortFlexSegmentsShortestToLongest:(id)arg0 ;
-(id)_transitionSegmentForSegmentInfo:(id)arg0 fromBarIndex:(NSInteger)arg1 inSegmentList:(id)arg2 ;
-(id)_transitionSegmentForSegmentInfo:(id)arg0 toSegmentInfo:(id)arg1 fromBarIndex:(NSInteger)arg2 inSegmentList:(id)arg3 ;
-(id)analysisData;
-(id)description;
-(id)encodeAsDictionary;
-(id)idealDurations;
-(id)initCommonWithUID:(id)arg0 songName:(id)arg1 artistName:(id)arg2 tagIDs:(id)arg3 keywords:(id)arg4 hidden:(BOOL)arg5 sampleRate:(NSInteger)arg6 mainSegments:(id)arg7 crossFadeSegments:(id)arg8 audioFileExtension:(id)arg9 audioEncoderPresetName:(id)arg10 metadataVersion:(NSInteger)arg11 customOptions:(id)arg12 ;
-(id)initWithDictionary:(id)arg0 assets:(id)arg1 ;
-(id)initWithUID:(id)arg0 songName:(id)arg1 artistName:(id)arg2 tagIDs:(id)arg3 keywords:(id)arg4 hidden:(BOOL)arg5 sampleRate:(NSInteger)arg6 mainSegments:(id)arg7 crossFadeSegments:(id)arg8 assets:(id)arg9 audioFileExtension:(id)arg10 audioEncoderPresetName:(id)arg11 metadataVersion:(NSInteger)arg12 customOptions:(id)arg13 ;
-(id)renditionForDuration:(struct ? )arg0 withOptions:(id)arg1 testingContext:(id)arg2 ;
-(id)timedMetadataItemsWithIdentifier:(id)arg0 forRendition:(id)arg1 ;
-(struct ? )minimumDuration;
-(struct ? )naturalDuration;
-(void)_cacheSegmentsByType;
-(void)_destroyCache;
-(void)_loadAnalysisData;
-(void)_loadSegments;
-(void)_populateCache;
-(void)_removeSegmentInfo:(id)arg0 fromAssemblyList:(id)arg1 ;
-(void)_sequenceBodySegmentList:(id)arg0 forIndexes:(id)arg1 ;
-(void)_setupInitialAssets:(id)arg0 ;


@end


#endif