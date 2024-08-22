// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETINSPECTOR_H
#define AVASSETINSPECTOR_H

@class NSData, NSArray, NSString, NSDictionary;
@protocol NSCopying;


#import "AVFigObjectInspector.h"
#import "AVMetadataItem.h"
#import "AVDisplayCriteria.h"

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>



@property (readonly, nonatomic) NSData *SHA1Digest;
@property (readonly, nonatomic) NSArray *alternateTrackGroups;
@property (readonly, nonatomic, getter=_assetAnalysisMessages) NSArray *assetAnalysisMessages;
@property (readonly, nonatomic) NSArray *availableMetadataFormats;
@property (readonly, nonatomic) NSArray *availableVideoDynamicRanges;
@property (readonly, nonatomic) BOOL canContainFragments;
@property (readonly, nonatomic) NSArray *commonMetadata;
@property (readonly, nonatomic, getter=isCompatibleWithAirPlayVideo) BOOL compatibleWithAirPlayVideo;
@property (readonly, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;
@property (readonly, nonatomic, getter=isComposable) BOOL composable;
@property (readonly, nonatomic) BOOL containsFragments;
@property (readonly, nonatomic) AVMetadataItem *creationDate;
@property (readonly, nonatomic) ? duration;
@property (readonly, nonatomic, getter=isExportable) BOOL exportable;
@property (readonly, nonatomic) NSInteger firstFragmentSequenceNumber;
@property (readonly, nonatomic) NSInteger fragmentCount;
@property (readonly, nonatomic) NSString *identifyingTag;
@property (readonly, nonatomic) NSString *identifyingTagClass;
@property (readonly, nonatomic, getter=_instanceIdentifier) NSString *instanceIdentifier;
@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic) CGSize maximumVideoResolution;
@property (readonly, nonatomic, getter=_mediaSelectionGroupDictionaries) NSArray *mediaSelectionGroupDictionaries;
@property (readonly, nonatomic) ? minimumTimeOffsetFromLive;
@property (readonly, nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) int naturalTimeScale;
@property (readonly, nonatomic) ? overallDurationHint;
@property (readonly, nonatomic, getter=isPlayable) BOOL playable;
@property (readonly, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;
@property (readonly, nonatomic) float preferredRate;
@property (readonly, nonatomic) float preferredSoundCheckVolumeNormalization;
@property (readonly, nonatomic) CGAffineTransform preferredTransform;
@property (readonly, nonatomic) float preferredVolume;
@property (readonly, nonatomic) id *propertyListForProxy;
@property (readonly, nonatomic) BOOL providesPreciseDurationAndTiming;
@property (readonly, nonatomic, getter=isReadable) BOOL readable;
@property (readonly, nonatomic) BOOL supportsAnalysisReporting;
@property (readonly, nonatomic) NSInteger trackCount;
@property (readonly, nonatomic) NSArray *trackIDs;
@property (readonly, nonatomic) NSDictionary *trackReferences;


-(BOOL)hasProtectedContent;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)makePropertyListForProxyWithOptions:(id)arg0 ;
-(id)metadataForFormat:(id)arg0 ;


@end


#endif