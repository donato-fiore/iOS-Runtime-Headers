// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXANIMOJIPLAYBACKDELEGATE_H
#define JFXANIMOJIPLAYBACKDELEGATE_H

@class NSString;
@protocol PVCompositeDelegate, OS_dispatch_queue, JFXPlayableElement;

#import <Foundation/Foundation.h>

#import "JFXAnimojiEffect.h"
#import "JFXAnimojiEffectRenderer.h"
#import "JFXARMetadataMediaReader.h"
#import "JFXCachedAnimojiImage.h"
#import "JFXDepthDataMediaReader.h"
#import "JFXSharedMediaDataReaderManager.h"

@interface JFXAnimojiPlaybackDelegate : NSObject <PVCompositeDelegate>



@property (retain, nonatomic) JFXAnimojiEffect *animojiEffect; // ivar: _animojiEffect
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *animojiRenderQueue; // ivar: _animojiRenderQueue
@property (retain, nonatomic) JFXAnimojiEffectRenderer *animojiRenderer; // ivar: _animojiRenderer
@property (retain, nonatomic) JFXARMetadataMediaReader *arMetadataReader; // ivar: _arMetadataReader
@property (retain, nonatomic) JFXCachedAnimojiImage *cachedAnimojiImage; // ivar: _cachedAnimojiImage
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cachedAnimojiImageQueue; // ivar: _cachedAnimojiImageQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delayedUnloadPlaybackQueue; // ivar: _delayedUnloadPlaybackQueue
@property (copy, nonatomic) id *delayedUnloadPlaybackResourcesBlock; // ivar: _delayedUnloadPlaybackResourcesBlock
@property (retain, nonatomic) JFXDepthDataMediaReader *depthReader; // ivar: _depthReader
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isScrubbing; // ivar: _isScrubbing
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mediaDataReaderUpdateQueue; // ivar: _mediaDataReaderUpdateQueue
@property (readonly, nonatomic) NSObject<JFXPlayableElement> *playableElement; // ivar: _playableElement
@property (readonly, nonatomic) ? playbackElementPlaybackMediaRange; // ivar: _playbackElementPlaybackMediaRange
@property (readonly, nonatomic) ? playbackElementPlaybackPresentationOffset; // ivar: _playbackElementPlaybackPresentationOffset
@property (retain, nonatomic) JFXSharedMediaDataReaderManager *sharedMediaDataReaderManager; // ivar: _sharedMediaDataReaderManager
@property (readonly) Class superclass;
@property (nonatomic) BOOL useAnimojiBlendShapes; // ivar: _useAnimojiBlendShapes


-(id)JFX_arMetadataReaderItemForMediaTime:(struct ? )arg0 ;
-(id)JFX_avDepthDataFromDepthDataForMediaTime:(struct ? )arg0 ;
-(id)JFX_cachedAnimojiImageForMediaTime:(struct ? )arg0 forAnimojiRenderingAttributes:(id)arg1 ;
-(id)JFX_renderAnimojiEffect:(id)arg0 forTime:(struct ? )arg1 withARFrame:(id)arg2 depthData:(id)arg3 inputBufferSize:(struct CGSize )arg4 videoDimensions:(struct ? )arg5 fieldOfView:(float)arg6 captureOrientation:(NSInteger)arg7 interfaceOrientation:(NSInteger)arg8 preRecordedBlendShapes:(id)arg9 ;
-(id)initWithPlayableElement:(id)arg0 sharedMediaDataReaderManager:(id)arg1 ;
-(id)preprocessWithInputs:(id)arg0 time:(struct ? )arg1 userContext:(id)arg2 compositeContext:(id)arg3 ;
-(id)renderWithInputs:(id)arg0 time:(struct ? )arg1 userContext:(id)arg2 compositeContext:(id)arg3 ;
-(struct ? )jfx_mediaTimeFromPlaybackTime:(struct ? )arg0 ;
-(void)JFX_cacheAnimojiImage:(id)arg0 ;
-(void)JFX_clearCachedAnimojiImages;
-(void)JFX_initAnimojiImageBufferCachingProperties;
-(void)JFX_initAnimojiRenderingProperies;
-(void)JFX_initMediaDataReaderProperties;
-(void)JFX_initPlaybackLoadingProperies;
-(void)JFX_loadAnimojiRenderer;
-(void)JFX_loadMediaDataReaders;
-(void)JFX_loadResourcesForPlayback;
-(void)JFX_requestUnloadResourcesForPlayback;
-(void)JFX_setMediaDataReaderScrubbingMode:(BOOL)arg0 ;
-(void)JFX_unloadAnimojiRenderer;
-(void)JFX_unloadMediaDataReaders;
-(void)JFX_unloadResourcesForPlayback;
-(void)loadWithUserContext:(id)arg0 ;
-(void)unloadWithUserContext:(id)arg0 ;


@end


#endif