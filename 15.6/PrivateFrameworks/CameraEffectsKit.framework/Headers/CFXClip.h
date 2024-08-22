// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXCLIP_H
#define CFXCLIP_H

@class NSMutableArray, NSString, NSURL, NSData, PVTransformAnimation;
@protocol NSCopying, JFXPlayableElement;

#import <Foundation/Foundation.h>

#import "JFXMediaReaderCreationAVAssetTrackAttributes.h"
#import "JFXMediaItem.h"

@interface CFXClip : NSObject <NSCopying, JFXPlayableElement>



@property (retain, nonatomic) NSMutableArray *animojis; // ivar: _animojis
@property (readonly, nonatomic) JFXMediaReaderCreationAVAssetTrackAttributes *arMetadataReaderAssetTrackAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) JFXMediaReaderCreationAVAssetTrackAttributes *depthDataReaderAssetTrackAttributes;
@property (readonly, copy) NSString *description;
@property (nonatomic) int duration; // ivar: _duration
@property (retain, nonatomic) NSMutableArray *filters; // ivar: _filters
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAssetLoaded;
@property (readonly, nonatomic) BOOL isAssetUnavailable;
@property (readonly, nonatomic) BOOL isStill;
@property (readonly, nonatomic) BOOL isVideo;
@property (nonatomic) NSInteger mediaInterfaceOrientationForDisplay;
@property (retain, nonatomic) JFXMediaItem *mediaItem; // ivar: _mediaItem
@property (readonly, nonatomic) CGSize mediaSize;
@property (readonly, nonatomic) int mediaStartOffset; // ivar: _mediaStartOffset
@property (readonly, nonatomic) NSInteger mediaType;
@property (retain, nonatomic) NSURL *metadataURL; // ivar: _metadataURL
@property (retain, nonatomic) NSData *originalAnimojiDataRepresentation; // ivar: _originalAnimojiDataRepresentation
@property (nonatomic) NSUInteger originalAnimojiVersionNumber; // ivar: _originalAnimojiVersionNumber
@property (retain, nonatomic) NSMutableArray *overlays; // ivar: _overlays
@property (readonly, nonatomic) NSInteger playableAspectRatio;
@property (readonly, nonatomic) NSInteger playableAspectRatioPreservationMode;
@property (readonly, nonatomic) int playableMediaContentMode;
@property (readonly, nonatomic) CGSize playableMediaSizeWithTransform;
@property (readonly, nonatomic) int presentationTime; // ivar: _presentationTime
@property (readonly, nonatomic) BOOL shouldRenderVideoAsBlack;
@property (readonly) Class superclass;
@property (retain, nonatomic) PVTransformAnimation *transformAnimation; // ivar: _transformAnimation
@property (nonatomic) int transformInitialStartOffset; // ivar: _transformInitialStartOffset
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)cfx_writeProxyImageToURL:(id)arg0 fromImageAtURL:(id)arg1 maximumImageDimension:(NSUInteger)arg2 outColorSpace:(*id)arg3 ;
+(id)createCaptureClip;
+(id)defaultClip;
+(void)cfx_createStillClipPreviewWithLocalURL:(id)arg0 maximumImageDimension:(NSUInteger)arg1 effectStack:(id)arg2 completionHandler:(id)arg3 ;
+(void)cfx_createVideoClipWithLocalURL:(id)arg0 effectStack:(id)arg1 completionHandler:(id)arg2 ;
+(void)createClipWithLocalURL:(id)arg0 effectStack:(id)arg1 isVideo:(BOOL)arg2 maximumImageDimension:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(BOOL)cfx_isAssetInTrash;
-(BOOL)cfx_isAssetMissing;
-(BOOL)cfx_removeAllEffectsOfType:(int)arg0 ;
-(BOOL)hasMetadataAsset;
-(BOOL)hasPlayableEffectOfType:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)removeAllEffectsOfType:(int)arg0 ;
-(CGFloat)playableScaleInOutputSize:(struct CGSize )arg0 ;
-(id)CFX_removeStyleTranferOnUnsupportedDevice:(id)arg0 ;
-(id)cfx_clipType;
-(id)cfx_effectsOfType:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)effectStack;
-(id)effectStackExcludingType:(int)arg0 ;
-(id)effectsOfType:(int)arg0 ;
-(id)init;
-(id)initWithMediaItem:(id)arg0 ;
-(id)playableEffectStack;
-(id)playableEffectStackExcludingType:(int)arg0 ;
-(id)playableEffectsOfType:(int)arg0 ;
-(id)stringForMediaType:(NSInteger)arg0 ;
-(struct CGRect )playableRectInOutputSize:(struct CGSize )arg0 ;
-(struct CGRect )rectFromNormalizedPlayableRect:(struct CGRect )arg0 inOutputSize:(struct CGSize )arg1 ;
-(void)addEffect:(id)arg0 ;
-(void)addEffectStack:(id)arg0 ;
-(void)cfx_addEffect:(id)arg0 ;
-(void)dealloc;
-(void)removeAllEffects;
-(void)removeEffect:(id)arg0 ;
-(void)updateTransformPresentationTimeRange;


@end


#endif