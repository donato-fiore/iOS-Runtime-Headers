// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JTVIDEOMEDIAUTILS_H
#define JTVIDEOMEDIAUTILS_H

@class PVColorSpace;

#import <Foundation/Foundation.h>


@interface JTVideoMediaUtils : NSObject

@property (nonatomic) BOOL cacheWillDieDuringLoad; // ivar: _cacheWillDieDuringLoad
@property (nonatomic) BOOL cachedAssetInformationValid; // ivar: _cachedAssetInformationValid
@property (nonatomic) NSUInteger cachedAudioTrackCount; // ivar: _cachedAudioTrackCount
@property (nonatomic) unsigned int cachedCodec4cc; // ivar: _cachedCodec4cc
@property (retain, nonatomic) PVColorSpace *cachedColorSpace; // ivar: _cachedColorSpace
@property (nonatomic) int cachedDurationAt30fps; // ivar: _cachedDurationAt30fps
@property (nonatomic) float cachedFrameRate; // ivar: _cachedFrameRate
@property (nonatomic) CGSize cachedNaturalSize; // ivar: _cachedNaturalSize
@property (nonatomic) ? cachedPreciseAssetDuration; // ivar: _cachedPreciseAssetDuration
@property (nonatomic) CGAffineTransform cachedTransform; // ivar: _cachedTransform
@property (nonatomic) NSUInteger cachedVideoTrackCount; // ivar: _cachedVideoTrackCount


-(BOOL)hasAudibleCharacteristicWithIsMissing:(BOOL)arg0 ;
-(BOOL)hasAudioTracks;
-(BOOL)hasVideoTracks;
-(BOOL)isOriginalHEVC4k;
-(BOOL)isUnsupportedAudio;
-(float)frameRate;
-(id)colorSpace;
-(int)durationAt30fpsWithAssetDuration:(CGFloat)arg0 ;
-(struct CGAffineTransform )transform;
-(struct CGSize )naturalSizeWithIsMissing:(BOOL)arg0 asset:(id)arg1 ;
-(void)cacheTrackInformationWithAVAsset:(id)arg0 ;
-(void)invalidateCachedAssetInformation;
-(void)requestAVAssetAsyncWithAsset:(id)arg0 needsDerivativeMedia:(BOOL)arg1 frameRate:(float)arg2 completion:(id)arg3 ;


@end


#endif