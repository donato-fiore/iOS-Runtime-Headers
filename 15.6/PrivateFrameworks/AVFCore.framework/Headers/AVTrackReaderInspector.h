// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTRACKREADERINSPECTOR_H
#define AVTRACKREADERINSPECTOR_H



#import "AVAssetTrackInspector.h"
#import "AVDispatchOnce.h"
#import "AVWeakReference.h"

@interface AVTrackReaderInspector : AVAssetTrackInspector {
    *OpaqueFigFormatReader _formatReader;
    *OpaqueFigTrackReader _trackReader;
    AVDispatchOnce *_copySampleCursorServiceOnce;
    *OpaqueFigSampleCursorService _figSampleCursorService;
    BOOL _sampleCursorTimeAccuracyIsExact;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}




-(*void)_valueAsCFTypeForProperty:(struct __CFString *)arg0 ;
-(BOOL)hasAudioSampleDependencies;
-(BOOL)isDecodable;
-(BOOL)isEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(BOOL)isPlayable;
-(BOOL)isSelfContained;
-(BOOL)requiresFrameReordering;
-(NSInteger)alternateGroupID;
-(NSInteger)defaultAlternateGroupID;
-(NSInteger)layer;
-(NSInteger)provisionalAlternateGroupID;
-(NSInteger)totalSampleDataLength;
-(NSUInteger)hash;
-(float)estimatedDataRate;
-(float)nominalFrameRate;
-(float)peakDataRate;
-(float)preferredVolume;
-(id)_initWithAsset:(id)arg0 trackID:(int)arg1 trackIndex:(NSInteger)arg2 ;
-(id)_trackReferences;
-(id)asset;
-(id)availableMetadataFormats;
-(id)commonMetadata;
-(id)extendedLanguageTag;
-(id)formatDescriptions;
-(id)languageCode;
-(id)loudnessInfo;
-(id)mediaCharacteristics;
-(id)mediaType;
-(id)metadataForFormat:(id)arg0 ;
-(id)segmentForTrackTime:(struct ? )arg0 ;
-(id)segments;
-(int)decodabilityValidationResult;
-(int)naturalTimeScale;
-(int)playabilityValidationResult;
-(int)trackID;
-(struct ? )latentBaseDecodeTimeStampOfFirstTrackFragment;
-(struct ? )minSampleDuration;
-(struct ? )timeRange;
-(struct CGAffineTransform )preferredTransform;
-(struct CGSize )dimensions;
-(struct CGSize )naturalSize;
-(struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(*BOOL)arg0 ;
-(struct OpaqueFigTrackReader *)_figTrackReader;
-(unsigned int)_figMediaType;
-(void)dealloc;


@end


#endif