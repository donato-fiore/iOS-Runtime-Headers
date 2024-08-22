// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSET_H
#define AVASSET_H

@class NSArray;
@protocol NSCopying, AVAsynchronousKeyValueLoading, AVLoggingIdentifier;

#import <Foundation/Foundation.h>

#import "AVAssetInternal.h"
#import "AVDisplayCriteria.h"

@interface AVAsset : NSObject <NSCopying, AVAsynchronousKeyValueLoading>

 {
    AVAssetInternal *_asset;
}


@property (readonly) NSArray *availableChapterLocales;
@property (readonly, nonatomic) ? duration;
@property (readonly, nonatomic) NSArray *fragments;
@property (readonly, nonatomic) BOOL isProxy;
@property (readonly, retain, nonatomic) NSObject<AVLoggingIdentifier> *loggingIdentifier;
@property (readonly, nonatomic) ? minimumTimeOffsetFromLive;
@property (readonly, nonatomic) NSInteger moovAtomSize;
@property (readonly, nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property (readonly, nonatomic) float preferredRate;
@property (readonly, nonatomic) CGAffineTransform preferredTransform;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) id *propertyListForProxy;


+(BOOL)_assetCreationOptionsPrefersSandboxedOption:(id)arg0 ;
+(BOOL)_assetCreationOptionsRequiresInProcessOperation:(id)arg0 ;
+(BOOL)expectsPropertyRevisedNotifications;
+(BOOL)supportsPlayerItems;
+(id)assetProxyWithPropertyList:(id)arg0 ;
+(id)assetWithData:(id)arg0 contentType:(id)arg1 options:(id)arg2 ;
+(id)assetWithURL:(id)arg0 ;
+(id)assetWithURL:(id)arg0 figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 trackIDs:(id)arg2 dynamicBehavior:(BOOL)arg3 ;
+(id)inspectionOnlyAssetWithFigAsset:(struct OpaqueFigAsset *)arg0 ;
+(id)inspectionOnlyAssetWithStreamDataParser:(id)arg0 tracks:(id)arg1 ;
+(void)initialize;
-(BOOL)_hasResourceLoaderDelegate;
-(BOOL)_isStreaming;
-(BOOL)_mindsFragments;
-(BOOL)_needsLegacyChangeNotifications;
-(BOOL)_requiresInProcessOperation;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
-(BOOL)hasProtectedContent;
-(BOOL)isCompatibleWithAirPlayVideo;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg0 ;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(BOOL)isComposable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExportable;
-(BOOL)isPlayable;
-(BOOL)isReadable;
-(BOOL)providesPreciseDurationAndTiming;
-(BOOL)supportsAnalysisReporting;
-(CGFloat)_fragmentMindingInterval;
-(Class)_classForTrackInspectors;
-(NSInteger)statusOfValueForKey:(id)arg0 ;
-(NSInteger)statusOfValueForKey:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)_addChapterMetadataItem:(id)arg0 timeRange:(struct ? )arg1 toChapters:(id)arg2 fromIndex:(NSUInteger)arg3 ;
-(NSUInteger)hash;
-(NSUInteger)referenceRestrictions;
-(float)preferredSoundCheckVolumeNormalization;
-(id)_ID3Metadata;
-(id)_absoluteURL;
-(id)_assetAnalysisMessages;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(id)_availableCanonicalizedChapterLanguages;
-(id)_chapterDataTypeForMediaSubType:(int)arg0 ;
-(id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg0 containingItemsWithCommonKeys:(id)arg1 ;
-(id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg0 titleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2 ;
-(id)_chapterMetadataGroupsWithTitleLanguage:(id)arg0 containingItemsWithCommonKeys:(id)arg1 ;
-(id)_chapterTracks;
-(id)_comparisonToken;
-(id)_firstTrackGroupWithMediaTypes:(id)arg0 ;
-(id)_mediaSelectionGroupDictionaries;
-(id)_nameForLogging;
-(id)_tracksWithClass:(Class)arg0 ;
-(id)_weakReference;
-(id)allMediaSelections;
-(id)alternateTrackGroups;
-(id)audioAlternatesTrackGroup;
-(id)availableChapterLanguages;
-(id)availableMediaCharacteristicsWithMediaSelectionOptions;
-(id)availableMetadataFormats;
-(id)availableVideoDynamicRanges;
-(id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg0 ;
-(id)chapterMetadataGroupsWithTitleLocale:(id)arg0 containingItemsWithCommonKeys:(id)arg1 ;
-(id)commonMetadata;
-(id)compatibleTrackForCompositionTrack:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)creationDate;
-(id)init;
-(id)initWithData:(id)arg0 contentType:(id)arg1 options:(id)arg2 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;
-(id)lyrics;
-(id)makePropertyListForProxyWithOptions:(id)arg0 ;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg0 ;
-(id)mediaSelectionGroupForPropertyList:(id)arg0 mediaSelectionOption:(*id)arg1 ;
-(id)metadata;
-(id)metadataForFormat:(id)arg0 ;
-(id)preferredMediaSelection;
-(id)subtitleAlternatesTrackGroup;
-(id)trackGroups;
-(id)trackReferences;
-(id)trackWithTrackID:(int)arg0 ;
-(id)tracks;
-(id)tracksWithMediaCharacteristic:(id)arg0 ;
-(id)tracksWithMediaCharacteristics:(id)arg0 ;
-(id)tracksWithMediaType:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(int)naturalTimeScale;
-(int)unusedTrackID;
-(struct ? )overallDurationHint;
-(struct CGSize )maximumVideoResolution;
-(struct OpaqueFigAsset *)_figAsset;
-(struct OpaqueFigFormatReader *)_formatReader;
-(struct OpaqueFigMutableComposition *)_mutableComposition;
-(struct OpaqueFigPlaybackItem *)_playbackItem;
-(void)_handleURLRequest:(id)arg0 ;
-(void)_loadChapterInfo;
-(void)_loadValuesSynchronouslyForKeys:(id)arg0 trackKeys:(id)arg1 ;
-(void)_serverHasDied;
-(void)_setFragmentMindingInterval:(CGFloat)arg0 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg0 ;
-(void)_tracksDidChange;
-(void)cancelLoading;
-(void)dealloc;
-(void)findCompatibleTrackForCompositionTrack:(id)arg0 completionHandler:(id)arg1 ;
-(void)findUnusedTrackIDWithCompletionHandler:(id)arg0 ;
-(void)loadChapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadChapterMetadataGroupsWithTitleLocale:(id)arg0 containingItemsWithCommonKeys:(id)arg1 completionHandler:(id)arg2 ;
-(void)loadMediaSelectionGroupForMediaCharacteristic:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadMetadataForFormat:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadTrackWithTrackID:(int)arg0 completionHandler:(id)arg1 ;
-(void)loadTracksWithMediaCharacteristic:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadTracksWithMediaType:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg0 keysForCollectionKeys:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif