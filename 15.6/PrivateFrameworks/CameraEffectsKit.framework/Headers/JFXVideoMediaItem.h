// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXVIDEOMEDIAITEM_H
#define JFXVIDEOMEDIAITEM_H

@class AVAsset;


#import "JTAssetMediaItem.h"
#import "JTVideoMediaUtils.h"

@interface JFXVideoMediaItem : JTAssetMediaItem

@property (retain, nonatomic) AVAsset *avAsset; // ivar: _avAsset
@property (nonatomic) BOOL capturedByInAppCamera; // ivar: _capturedByInAppCamera
@property (readonly, nonatomic) float frameRate;
@property (readonly, nonatomic) BOOL hasAudioTracks;
@property (readonly, nonatomic) BOOL hasVideoTracks;
@property (readonly, nonatomic) BOOL isHighFrameRate; // ivar: _isHighFrameRate
@property (readonly, nonatomic) BOOL isUnsupportedAudio;
@property (nonatomic) int mediaStartOffset; // ivar: _mediaStartOffset
@property (readonly, nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) CGSize naturalSizeWithTransform;
@property (readonly, nonatomic) BOOL needsDerivativeMedia;
@property (nonatomic) BOOL originalIsHEVC4k; // ivar: _originalIsHEVC4k
@property (readonly, nonatomic) CGAffineTransform transform;
@property (retain, nonatomic) JTVideoMediaUtils *videoMediaItemUtils; // ivar: _videoMediaItemUtils


+(void)videoMediaItemWithLocalURL:(id)arg0 delegate:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)canBeAddedToSequence;
-(BOOL)hasAudibleCharacteristic;
-(BOOL)hasVisualCharacteristic;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)assetURL;
-(id)colorSpace;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)info;
-(int)durationAt30fps;
-(struct CGAffineTransform )transform:(struct CGSize )arg0 fillDest:(BOOL)arg1 ;
-(void)cacheAssetInformation;
-(void)commonInit;
-(void)dealloc;
-(void)loadAVAssetWithCompletionHandler:(id)arg0 ;
-(void)mediaserverdCrashed;
-(void)reloadAVAsset;
-(void)setAssetIs4kHEVC:(BOOL)arg0 ;


@end


#endif