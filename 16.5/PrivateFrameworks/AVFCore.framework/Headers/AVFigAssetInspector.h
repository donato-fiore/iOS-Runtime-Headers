// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFIGASSETINSPECTOR_H
#define AVFIGASSETINSPECTOR_H

@class NSURL, NSArray;


#import "AVAssetInspector.h"
#import "AVDispatchOnce.h"
#import "AVDisplayCriteria.h"

@interface AVFigAssetInspector : AVAssetInspector {
    *OpaqueFigAsset _figAsset;
    *OpaqueFigFormatReader _formatReader;
    AVDispatchOnce *_formatReaderOnce;
    AVDispatchOnce *_checkIsStreamingOnce;
    AVDispatchOnce *_makeDisplayCriteriaOnce;
    AVDisplayCriteria *_displayCriteria;
    BOOL _isStreaming;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}


@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;
@property (readonly, nonatomic) NSUInteger downloadToken;
@property (readonly, nonatomic, getter=_figAsset) *OpaqueFigAsset figAsset;
@property (readonly, nonatomic) NSArray *figChapterGroupInfo;
@property (readonly, nonatomic) NSArray *figChapters;
@property (readonly, nonatomic, getter=_formatReader) *OpaqueFigFormatReader formatReader;
@property (readonly, nonatomic) BOOL hasProtectedContent;
@property (readonly, nonatomic) NSURL *originalNetworkContentURL;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic, getter=_isStreaming) BOOL streaming;
@property (readonly, nonatomic) NSArray *variants;


-(*void)_valueAsCFTypeForProperty:(struct __CFString *)arg0 ;
-(BOOL)_hasQTSaveRestriction;
-(BOOL)canContainFragments;
-(BOOL)containsFragments;
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
-(NSInteger)firstFragmentSequenceNumber;
-(NSInteger)fragmentCount;
-(NSInteger)trackCount;
-(NSUInteger)hash;
-(float)preferredRate;
-(float)preferredSoundCheckVolumeNormalization;
-(float)preferredVolume;
-(id)SHA1Digest;
-(id)_assetAnalysisMessages;
-(id)_mediaSelectionGroupDictionaries;
-(id)_nameForProxy;
-(id)alternateTrackGroups;
-(id)availableMetadataFormats;
-(id)availableVideoDynamicRanges;
-(id)commonMetadata;
-(id)creationDate;
-(id)httpSessionIdentifier;
-(id)identifyingTag;
-(id)identifyingTagClass;
-(id)initWithFigAsset:(struct OpaqueFigAsset *)arg0 ;
-(id)lyrics;
-(id)makePropertyListForProxyWithOptions:(id)arg0 ;
-(id)metadataForFormat:(id)arg0 ;
-(id)preferredDisplayCriteria;
-(id)propertyListForProxy;
-(id)trackReferences;
-(int)naturalTimeScale;
-(struct ? )duration;
-(struct ? )minimumTimeOffsetFromLive;
-(struct ? )overallDurationHint;
-(struct CGAffineTransform )preferredTransform;
-(struct CGSize )maximumVideoResolution;
-(struct CGSize )naturalSize;
-(void)dealloc;


@end


#endif