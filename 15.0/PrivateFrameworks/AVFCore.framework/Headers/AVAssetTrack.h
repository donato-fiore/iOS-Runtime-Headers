// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETTRACK_H
#define AVASSETTRACK_H

@protocol NSCopying, AVAsynchronousKeyValueLoading;

#import <Foundation/Foundation.h>

#import "AVAssetTrackInternal.h"
#import "AVAsset.h"

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading>

 {
    AVAssetTrackInternal *_track;
}


@property (readonly, weak, nonatomic) AVAsset *asset;
@property (readonly, nonatomic) int trackID;


+(BOOL)expectsPropertyRevisedNotifications;
+(id)keyPathsForValuesAffectingTimeRange;
+(id)mediaCharacteristicsForMediaTypes;
-(BOOL)_firstFormatDescriptionIsLPCM;
-(BOOL)_hasEmptyEdits;
-(BOOL)_hasMultipleDistinctFormatDescriptions;
-(BOOL)_hasMultipleEdits;
-(BOOL)_hasScaledEdits;
-(BOOL)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned int)arg0 flagsMask:(unsigned int)arg1 ;
-(BOOL)canProvideSampleCursors;
-(BOOL)hasAudibleBooksContent;
-(BOOL)hasAudioSampleDependencies;
-(BOOL)hasMediaCharacteristic:(id)arg0 ;
-(BOOL)hasMediaCharacteristics:(id)arg0 ;
-(BOOL)hasProtectedContent;
-(BOOL)isAudibleBooksContentAuthorized;
-(BOOL)isDecodable;
-(BOOL)isEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExcludedFromAutoselectionInTrackGroup;
-(BOOL)isPlayable;
-(BOOL)isSelfContained;
-(BOOL)requiresFrameReordering;
-(BOOL)segmentsExcludeAudioPrimingAndRemainderDurations;
-(NSInteger)alternateGroupID;
-(NSInteger)defaultAlternateGroupID;
-(NSInteger)layer;
-(NSInteger)provisionalAlternateGroupID;
-(NSInteger)statusOfValueForKey:(id)arg0 ;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(NSInteger)totalSampleDataLength;
-(NSUInteger)hash;
-(float)estimatedDataRate;
-(float)nominalFrameRate;
-(float)peakDataRate;
-(float)preferredVolume;
-(id)_fallbackTrack;
-(id)_firstAssociatedTrackWithAssociationType:(id)arg0 ;
-(id)_followingTrackAmongTracks:(id)arg0 ;
-(id)_initWithAsset:(id)arg0 trackID:(int)arg1 ;
-(id)_initWithAsset:(id)arg0 trackID:(int)arg1 trackIndex:(NSInteger)arg2 ;
-(id)_initWithAsset:(id)arg0 trackIndex:(NSInteger)arg1 ;
-(id)_pairedForcedOnlySubtitlesTrack;
-(id)_trackReferences;
-(id)_weakReference;
-(id)associatedTracksOfType:(id)arg0 ;
-(id)availableMetadataFormats;
-(id)availableTrackAssociationTypes;
-(id)commonMetadata;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)extendedLanguageTag;
-(id)formatDescriptions;
-(id)init;
-(id)languageCode;
-(id)locale;
-(id)loudnessInfo;
-(id)makeSampleCursorAtFirstSampleInDecodeOrder;
-(id)makeSampleCursorAtLastSampleInDecodeOrder;
-(id)makeSampleCursorWithPresentationTimeStamp:(struct ? )arg0 ;
-(id)mediaCharacteristics;
-(id)mediaType;
-(id)metadata;
-(id)metadataForFormat:(id)arg0 ;
-(id)segmentForTrackTime:(struct ? )arg0 ;
-(id)segments;
-(id)segmentsAsPresented;
-(int)naturalTimeScale;
-(int)playabilityValidationResult;
-(struct ? )gaplessSourceTimeRange;
-(struct ? )latentBaseDecodeTimeStampOfFirstTrackFragment;
-(struct ? )mediaDecodeTimeRange;
-(struct ? )mediaPresentationTimeRange;
-(struct ? )minFrameDuration;
-(struct ? )samplePresentationTimeForTrackTime:(struct ? )arg0 ;
-(struct ? )timeRange;
-(struct CGAffineTransform )preferredTransform;
-(struct CGSize )dimensions;
-(struct CGSize )naturalSize;
-(struct OpaqueFigAssetTrack *)_figAssetTrack;
-(struct OpaqueFigTrackReader *)_figTrackReader;
-(void)_startListeningToFigAssetTrackNotifications;
-(void)_stopListeningToFigAssetTrackNotifications;
-(void)dealloc;
-(void)loadAssociatedTracksOfType:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadMetadataForFormat:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadSamplePresentationTimeForTrackTime:(struct ? )arg0 completionHandler:(id)arg1 ;
-(void)loadSegmentForTrackTime:(struct ? )arg0 completionHandler:(id)arg1 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif