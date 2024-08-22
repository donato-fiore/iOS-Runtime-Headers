// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETTRACKINSPECTOR_H
#define AVASSETTRACKINSPECTOR_H

@class NSArray, NSString, NSLocale, NSDictionary;
@protocol AVAsynchronousKeyValueLoading;


#import "AVFigObjectInspector.h"
#import "AVWeakReference.h"
#import "AVDispatchOnce.h"

@interface AVAssetTrackInspector : AVFigObjectInspector <AVAsynchronousKeyValueLoading>

 {
    AVWeakReference *_weakReference;
    AVDispatchOnce *_synthesizeMediaCharacteristicsOnce;
    NSArray *_cachedMediaCharacteristics;
}


@property (readonly, nonatomic) NSInteger alternateGroupID;
@property (readonly, nonatomic) NSArray *availableMetadataFormats;
@property (readonly, nonatomic) BOOL canProvideSampleCursors;
@property (readonly, nonatomic) NSArray *commonMetadata;
@property (readonly, nonatomic, getter=isDecodable) BOOL decodable;
@property (readonly, nonatomic) NSInteger defaultAlternateGroupID;
@property (readonly, nonatomic) CGSize dimensions;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) float estimatedDataRate;
@property (readonly, nonatomic, getter=isExcludedFromAutoselectionInTrackGroup) BOOL excludedFromAutoselectionInTrackGroup;
@property (readonly, nonatomic) NSString *extendedLanguageTag;
@property (readonly, nonatomic, getter=_figAssetTrack) *OpaqueFigAssetTrack figAssetTrack;
@property (readonly, nonatomic, getter=_figMediaType) unsigned int figMediaType;
@property (readonly, nonatomic, getter=_figTrackReader) *OpaqueFigTrackReader figTrackReader;
@property (readonly, nonatomic) NSArray *formatDescriptions;
@property (readonly, nonatomic) ? gaplessSourceTimeRange;
@property (readonly, nonatomic) BOOL hasAudibleBooksContent;
@property (readonly, nonatomic) BOOL hasAudioSampleDependencies;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) BOOL hasSeamSamples;
@property (readonly, nonatomic) BOOL isAudibleBooksContentAuthorized;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) ? latentBaseDecodeTimeStampOfFirstTrackFragment;
@property (readonly, nonatomic) NSInteger layer;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSDictionary *loudnessInfo;
@property (readonly, nonatomic) NSArray *mediaCharacteristics;
@property (readonly, nonatomic) ? mediaDecodeTimeRange;
@property (readonly, nonatomic) ? mediaPresentationTimeRange;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) ? minSampleDuration;
@property (readonly, nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) int naturalTimeScale;
@property (readonly, nonatomic) float nominalFrameRate;
@property (readonly, nonatomic) float peakDataRate;
@property (readonly, nonatomic) int playabilityValidationResult;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic) CGAffineTransform preferredTransform;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) NSInteger provisionalAlternateGroupID;
@property (readonly, nonatomic) BOOL requiresFrameReordering;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, copy, nonatomic) NSArray *segmentsAsPresented;
@property (readonly, nonatomic) BOOL segmentsExcludeAudioPrimingAndRemainderDurations;
@property (readonly, nonatomic, getter=isSelfContained) BOOL selfContained;
@property (readonly, nonatomic) ? timeRange;
@property (readonly, nonatomic) NSInteger totalSampleDataLength;
@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic, getter=_trackReferences) NSDictionary *trackReferences;


+(id)assetTrackInspectorWithAsset:(id)arg0 trackID:(int)arg1 trackIndex:(NSInteger)arg2 ;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)_initWithAsset:(id)arg0 trackID:(int)arg1 ;
-(id)_initWithAsset:(id)arg0 trackID:(int)arg1 trackIndex:(NSInteger)arg2 ;
-(id)_initWithAsset:(id)arg0 trackIndex:(NSInteger)arg1 ;
-(id)_weakReference;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)makeSampleCursorAtFirstSampleInDecodeOrder;
-(id)makeSampleCursorAtLastSampleInDecodeOrder;
-(id)makeSampleCursorWithPresentationTimeStamp:(struct ? )arg0 ;
-(id)metadataForFormat:(id)arg0 ;
-(id)segmentForTrackTime:(struct ? )arg0 ;
-(struct ? )samplePresentationTimeForTrackTime:(struct ? )arg0 ;
-(struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(*BOOL)arg0 ;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif