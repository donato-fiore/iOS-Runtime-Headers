// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXAPPLEMUSICASSET_H
#define PXAPPLEMUSICASSET_H

@class NSString, NSNumber, NSArray, NSURL;
@protocol PXStorySongResource, PXMutableAppleMusicAsset, PXAudioAsset, PXAppleMusicAssetProperties, PXDisplayAsset, PXAudioCueSource;

#import <Foundation/Foundation.h>


@interface PXAppleMusicAsset : NSObject <PXStorySongResource, PXMutableAppleMusicAsset, PXAudioAsset, PXAppleMusicAssetProperties>



@property (copy, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *artworkDisplayAsset;
@property (copy, nonatomic) NSString *artworkURLFormat; // ivar: _artworkURLFormat
@property (readonly, copy, nonatomic) NSString *assetTagsDescription;
@property (readonly, nonatomic) Class audioSessionClass;
@property (readonly, nonatomic) NSInteger catalog;
@property (copy, nonatomic) NSString *colorGradeCategory; // ivar: _colorGradeCategory
@property (copy, nonatomic) NSString *contentProvider; // ivar: _contentProvider
@property (readonly, nonatomic) NSObject<PXAudioCueSource> *cueSource; // ivar: _cueSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class defaultMediaProviderClass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? duration; // ivar: _duration
@property (copy, nonatomic) NSNumber *energy; // ivar: _energy
@property (copy, nonatomic) NSArray *entryPoints; // ivar: _entryPoints
@property (readonly, nonatomic) ? exportableDuration;
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *introPreviewURL; // ivar: _introPreviewURL
@property (copy, nonatomic) NSNumber *loudnessMainPeak; // ivar: _loudnessMainPeak
@property (copy, nonatomic) NSNumber *loudnessMainValue; // ivar: _loudnessMainValue
@property (readonly, nonatomic) NSInteger pace;
@property (readonly, nonatomic) NSObject<PXAudioAsset> *previewAudioAsset;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) NSInteger px_storyResourceKind;
@property (readonly, nonatomic) NSObject<PXAudioAsset> *px_storyResourceSongAsset;
@property (copy, nonatomic) NSURL *songURL; // ivar: _songURL
@property (copy, nonatomic) NSString *storeID; // ivar: _storeID
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSNumber *valence; // ivar: _valence
@property (copy, nonatomic) NSNumber *visualTempo; // ivar: _visualTempo


-(BOOL)isAudioEqualToAsset:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)artworkURLForTargetPixelSize:(struct CGSize )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithMediaItem:(id)arg0 ;
-(void)configureCuesWithVideoEventTimestampsInSeconds:(id)arg0 videoEventScores:(id)arg1 ;


@end


#endif