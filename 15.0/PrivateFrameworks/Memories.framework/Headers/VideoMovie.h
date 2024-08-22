// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOMOVIE_H
#define VIDEOMOVIE_H

@class NSURL, AVAsset;
@protocol NSCoding, NSCopying;


#import "Movie.h"

@interface VideoMovie : Movie <NSCoding, NSCopying>



@property (nonatomic) BOOL audioProxyExists; // ivar: _audioProxyExists
@property (copy, nonatomic) NSURL *audioProxyURL; // ivar: _audioProxyURL
@property (nonatomic) BOOL cacheMovieIsPlayable; // ivar: _cacheMovieIsPlayable
@property (nonatomic) BOOL cacheWillDieDuringLoad; // ivar: _cacheWillDieDuringLoad
@property (nonatomic) BOOL cachedAssetInformationValid; // ivar: _cachedAssetInformationValid
@property (nonatomic) NSUInteger cachedAudioTrackChannels; // ivar: _cachedAudioTrackChannels
@property (nonatomic) NSUInteger cachedAudioTrackCount; // ivar: _cachedAudioTrackCount
@property (nonatomic) CGRect cachedCleanAperture; // ivar: _cachedCleanAperture
@property (nonatomic) unsigned int cachedCodec4cc; // ivar: _cachedCodec4cc
@property (nonatomic) int cachedDuration; // ivar: _cachedDuration
@property (nonatomic) CGSize cachedEncodedPixelSize; // ivar: _cachedEncodedPixelSize
@property (nonatomic) float cachedFrameRate; // ivar: _cachedFrameRate
@property (nonatomic) CGSize cachedNaturalSize; // ivar: _cachedNaturalSize
@property (nonatomic) ? cachedPreciseAssetDuration; // ivar: _cachedPreciseAssetDuration
@property (nonatomic) CGAffineTransform cachedTransform; // ivar: _cachedTransform
@property (nonatomic) NSUInteger cachedVideoTrackCount; // ivar: _cachedVideoTrackCount
@property (nonatomic) CGRect cleanAperture; // ivar: _cleanAperture
@property (readonly, nonatomic) float frameRate;
@property (readonly, nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) CGAffineTransform transform;
@property (retain, nonatomic) AVAsset *watermarkedAVAsset; // ivar: _watermarkedAVAsset
@property (retain, nonatomic) AVAsset *weakAVAsset; // ivar: _weakAVAsset


-(BOOL)hasAudioTracks;
-(BOOL)hasVideoTracks;
-(BOOL)isMono;
-(BOOL)isUnsupportedFormat;
-(BOOL)renderedAdjustmentsExist;
-(CGFloat)durationInSeconds;
-(id)avAsset;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifierURL:(id)arg0 ;
-(id)initWithIdentifierURL:(id)arg0 asset:(id)arg1 ;
-(id)initWithIdentifierURL:(id)arg0 asset:(id)arg1 userInfo:(id)arg2 ;
-(id)initWithPath:(id)arg0 ;
-(id)loadAVAsset;
-(id)thumbnailImageWithSize:(struct CGSize )arg0 ;
-(int)duration;
-(struct CGSize )encodedPixelSize;
-(struct CGSize )encodedPixelSizeWithTransform;
-(unsigned int)videoCodec;
-(void)cacheAssetInformation;
-(void)cacheAssetInformationWithCompletionHandler:(id)arg0 ;
-(void)cacheAudioTrackFormatInformationOfAsset:(id)arg0 ;
-(void)cacheVideoTrackInformationOfAsset:(id)arg0 ;
-(void)loadAVAssetWithCompletionHandler:(id)arg0 ;
// -(void)loadAVPlayerItemWithCompletionHander:(id)arg0 progressHandler:(unk)arg1 networkAccessAllowed:(id)arg2  ;
-(void)mediaserverdCrashed;
-(void)resetCachedAssetInformation;
-(void)updateAssetAvailability;
-(void)updateCreationDate;
-(void)updateLocation;
-(void)updateMetadata;


@end


#endif