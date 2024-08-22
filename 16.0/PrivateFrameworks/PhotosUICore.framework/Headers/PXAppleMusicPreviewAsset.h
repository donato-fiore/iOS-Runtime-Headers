// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXAPPLEMUSICPREVIEWASSET_H
#define PXAPPLEMUSICPREVIEWASSET_H

@class NSString, NSArray, NSNumber;
@protocol PXStorySongResource, PXAudioAsset, PXAppleMusicAssetProperties, PXDisplayAsset, PXAudioCueSource;

#import <Foundation/Foundation.h>

#import "PXAppleMusicAsset.h"

@interface PXAppleMusicPreviewAsset : NSObject <PXStorySongResource, PXAudioAsset, PXAppleMusicAssetProperties>



@property (readonly, copy, nonatomic) NSString *albumTitle;
@property (readonly, copy, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *artworkDisplayAsset;
@property (readonly, copy, nonatomic) NSString *assetTagsDescription;
@property (readonly, nonatomic) Class audioSessionClass;
@property (readonly, nonatomic) NSInteger catalog;
@property (readonly, copy, nonatomic) NSString *colorGradeCategory;
@property (readonly, nonatomic) NSObject<PXAudioCueSource> *cueSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultMediaProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? duration;
@property (readonly, copy, nonatomic) NSArray *entryPoints;
@property (readonly, nonatomic) ? exportableDuration;
@property (readonly, nonatomic) NSUInteger flags;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSNumber *loudnessMainPeak;
@property (readonly, copy, nonatomic) NSNumber *loudnessMainValue;
@property (readonly, nonatomic) PXAppleMusicAsset *originalAsset; // ivar: _originalAsset
@property (readonly, nonatomic) NSInteger pace;
@property (readonly, nonatomic) NSObject<PXAudioAsset> *previewAudioAsset;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) NSInteger px_storyResourceKind;
@property (readonly, nonatomic) NSObject<PXAudioAsset> *px_storyResourceSongAsset;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


+(struct ? )previewClipDuration;
-(BOOL)isAudioEqualToAsset:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithOriginalAsset:(id)arg0 ;


@end


#endif