// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMEDIAOBJECTBACKEDASSET_H
#define CKMEDIAOBJECTBACKEDASSET_H

@class NSDate, NSString, NSData, NSNumber, CLLocation, NSURL, NSArray;
@protocol PXDisplayAsset, PXMetadataAsset, NSCopying;

#import <Foundation/Foundation.h>

#import "CKAggregateAcknowledgmentChatItem.h"
#import "CKAttachmentMessagePartChatItem.h"
#import "CKMediaObject.h"

@interface CKMediaObjectBackedAsset : NSObject <PXDisplayAsset, PXMetadataAsset, NSCopying>



@property (readonly, nonatomic) CGRect acceptableCropRect;
@property (readonly, nonatomic) CKAggregateAcknowledgmentChatItem *acknowledgmentChatItem;
@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) float audioScore; // ivar: _audioScore
@property (readonly, nonatomic) NSUInteger burstSelectionTypes;
@property (retain, nonatomic) CKAttachmentMessagePartChatItem *chatItem; // ivar: _chatItem
@property (readonly, nonatomic) BOOL cloudIsDeletable;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultImageProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) CGRect faceAreaRect;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (readonly, nonatomic) NSData *fetchColorNormalizationData;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *hdrGain;
@property (readonly, nonatomic) NSDate *importDate;
@property (readonly, nonatomic) BOOL isAutoPlaybackEligibilityEstimated;
@property (readonly, nonatomic) BOOL isEligibleForAutoPlayback;
@property (readonly, nonatomic) BOOL isInCloud;
@property (readonly, nonatomic) BOOL isInSharedLibrary;
@property (readonly, nonatomic) ? livePhotoVideoDuration;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) CKMediaObject *mediaObject;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSInteger mediaType;
@property (readonly, nonatomic) NSInteger originalFileSize;
@property (readonly, nonatomic) NSUInteger pixelHeight;
@property (readonly, nonatomic) NSUInteger pixelWidth;
@property (readonly, nonatomic) NSInteger playbackStyle;
@property (readonly, nonatomic) NSInteger playbackVariation;
@property (readonly, nonatomic) CGRect preferredCropRect;
@property (readonly, nonatomic) BOOL representsBurst;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger thumbnailIndex; // ivar: _thumbnailIndex
@property (readonly, nonatomic) NSUInteger thumbnailVersion;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSArray *visibleAssociatedMessageChatItems;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)isContentEqualTo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithChatItem:(id)arg0 ;
-(struct CGSize )_previewPxSize:(*BOOL)arg0 ;
-(struct CGSize )_transcoderGeneratedPxSize:(*BOOL)arg0 ;
-(struct IMPreviewConstraints )_clientPreviewConstraints;


@end


#endif