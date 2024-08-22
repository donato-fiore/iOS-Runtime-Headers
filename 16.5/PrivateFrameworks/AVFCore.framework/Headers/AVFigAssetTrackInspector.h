// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFIGASSETTRACKINSPECTOR_H
#define AVFIGASSETTRACKINSPECTOR_H

@class NSMutableArray;
@protocol OS_dispatch_queue;


#import "AVAssetTrackInspector.h"
#import "AVDispatchOnce.h"
#import "AVWeakReference.h"

@interface AVFigAssetTrackInspector : AVAssetTrackInspector {
    *OpaqueFigAsset _figAsset;
    *OpaqueFigAssetTrack _figAssetTrack;
    AVDispatchOnce *_copyFigFormatReaderOnce;
    *OpaqueFigFormatReader _figFormatReader;
    AVDispatchOnce *_copyFigTrackReaderOnce;
    *OpaqueFigTrackReader _figTrackReader;
    AVDispatchOnce *_copySampleCursorServiceOnce;
    *OpaqueFigSampleCursorService _figSampleCursorService;
    BOOL _sampleCursorTimeAccuracyIsExact;
    *OpaqueFigSimpleMutex _loadingMutex;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSMutableArray *_loadingBatches;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}




-(*void)_valueAsCFTypeForProperty:(struct __CFString *)arg0 ;
-(BOOL)hasAudibleBooksContent;
-(BOOL)hasProtectedContent;
-(BOOL)hasSeamSamples;
-(BOOL)isAudibleBooksContentAuthorized;
-(BOOL)isDecodable;
-(BOOL)isEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(BOOL)isPlayable;
-(BOOL)isSelfContained;
-(BOOL)requiresFrameReordering;
-(BOOL)segmentsExcludeAudioPrimingAndRemainderDurations;
-(NSInteger)_loadStatusForFigAssetTrackProperty:(id)arg0 error:(*id)arg1 ;
-(NSInteger)alternateGroupID;
-(NSInteger)defaultAlternateGroupID;
-(NSInteger)layer;
-(NSInteger)provisionalAlternateGroupID;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(NSInteger)totalSampleDataLength;
-(NSUInteger)hash;
-(float)estimatedDataRate;
-(float)nominalFrameRate;
-(float)peakDataRate;
-(float)preferredVolume;
-(id)_initWithAsset:(id)arg0 trackID:(int)arg1 trackIndex:(NSInteger)arg2 ;
-(id)_loadingBatches;
-(id)_segmentsForProperty:(struct __CFString *)arg0 ;
-(id)_trackReferences;
-(id)asset;
-(id)availableMetadataFormats;
-(id)commonMetadata;
-(id)extendedLanguageTag;
-(id)formatDescriptions;
-(id)languageCode;
-(id)loudnessInfo;
-(id)mediaType;
-(id)metadataForFormat:(id)arg0 ;
-(id)segmentForTrackTime:(struct ? )arg0 ;
-(id)segments;
-(id)segmentsAsPresented;
-(int)decodabilityValidationResult;
-(int)naturalTimeScale;
-(int)playabilityValidationResult;
-(int)trackID;
-(struct ? )gaplessSourceTimeRange;
-(struct ? )latentBaseDecodeTimeStampOfFirstTrackFragment;
-(struct ? )mediaDecodeTimeRange;
-(struct ? )mediaPresentationTimeRange;
-(struct ? )minSampleDuration;
-(struct ? )timeRange;
-(struct CGAffineTransform )preferredTransform;
-(struct CGSize )dimensions;
-(struct CGSize )naturalSize;
-(struct OpaqueFigAssetTrack *)_figAssetTrack;
-(struct OpaqueFigFormatReader *)_figFormatReader;
-(struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(*BOOL)arg0 ;
-(struct OpaqueFigSimpleMutex *)_loadingMutex;
-(struct OpaqueFigTrackReader *)_figTrackReader;
-(unsigned int)_figMediaType;
-(void)_addFigNotifications;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg0 ;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg0 ;
-(void)_removeFigNotifications;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif