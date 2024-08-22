// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUMEDIAVIEW_H
#define NUMEDIAVIEW_H

@class UIView, NUCoalescer, NUComposition, NSString, NSArray;
@protocol NUAVPlayerControllerDelegate, NUAVPlayerViewDelegate, NUMediaViewDelegate, NUMediaPlayer;


#import "NURenderView.h"
#import "NUScrollView.h"
#import "NUMediaViewRenderer.h"
#import "NUAVPlayerController.h"
#import "NUAVPlayerView.h"

@interface NUMediaView : UIView <NUAVPlayerControllerDelegate, NUAVPlayerViewDelegate>

 {
    NURenderView *_renderView;
    NUScrollView *_scrollView;
    NUMediaViewRenderer *_renderer;
    NUAVPlayerController *_nuAVPlayerController;
    NUAVPlayerView *_playerView;
    UIView *_livePhotoView;
    ? _delegateFlags;
    NUCoalescer *_renderCoalescer;
    BOOL _loopsVideo;
    NSInteger _transitionCount;
    CGSize _transitionTargetSize;
    id *_renderingCompletionBlock;
    BOOL _lastVideoPlayerVisibilityChangeWasAnimated;
}


@property (nonatomic) CGSize _masterSizeWithoutGeometry; // ivar: __masterSizeWithoutGeometry
@property (nonatomic) CGFloat angle; // ivar: _angle
@property (nonatomic) BOOL centerContent; // ivar: _centerContent
@property (copy, nonatomic) NUComposition *composition;
@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDebugEnabled) BOOL debugEnabled; // ivar: _debugEnabled
@property (weak, nonatomic) NSObject<NUMediaViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect imageFrame;
@property (nonatomic) BOOL loopsVideoPlayback;
@property (nonatomic) CGFloat maximumZoomScale;
@property (nonatomic) CGFloat minimumZoomScale;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic) NSArray *pipelineFilters;
@property (readonly) NSObject<NUMediaPlayer> *player;
@property (nonatomic) BOOL scrollUpdatesSuppressed; // ivar: _scrollUpdatesSuppressed
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (readonly, nonatomic, getter=isVideoPlayerVisible) BOOL videoPlayerVisible; // ivar: _videoPlayerVisible
@property (nonatomic) CGFloat zoomScale;


+(struct UIEdgeInsets )_proposedInsetsForInsets:(struct UIEdgeInsets )arg0 contentSize:(struct CGSize )arg1 inFrame:(struct CGRect )arg2 centerContent:(BOOL)arg3 ;
-(BOOL)_didReleaseAVObjects;
-(BOOL)isReady;
-(id)_geometry;
-(id)_imageLayer;
-(id)_layerRecursiveDescription;
-(id)_livePhotoView;
-(id)_renderView;
-(id)_renderer;
-(id)_scrollView;
-(id)_videoPlayerController;
-(id)_videoPlayerView;
-(id)_videoPlayerViewWithoutControls;
-(id)_viewRecursiveDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)snapshotImage;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromSpace:(id)arg1 toView:(id)arg2 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromView:(id)arg1 toSpace:(id)arg2 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toNormalizedYDownSourceSpaceFromView:(id)arg1 ;
-(struct CGPoint )convertPointFromImage:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointToImage:(struct CGPoint )arg0 ;
-(struct CGRect )convertNormalizedViewRect:(struct CGRect )arg0 fromSpace:(id)arg1 ;
-(struct CGRect )convertRectFromImage:(struct CGRect )arg0 ;
-(struct CGRect )convertRectToImage:(struct CGRect )arg0 ;
-(struct CGRect )convertViewRect:(struct CGRect )arg0 fromSpace:(id)arg1 ;
-(struct CGSize )_imageSize;
-(struct UIEdgeInsets )_edgeInsetsForContentSize:(struct CGSize )arg0 inFrame:(struct CGRect )arg1 ;
-(struct UIEdgeInsets )_edgeInsetsForContentSize:(struct CGSize )arg0 inFrame:(struct CGRect )arg1 alwaysCenterContent:(BOOL)arg2 ;
-(void)_beginTransition;
-(void)_endTransition;
-(void)_livephotoPlaybackDidEnd;
-(void)_livephotoPlaybackWillBegin;
-(void)_releaseAVObjects;
-(void)_rendererDidCreateAVPlayerController:(id)arg0 ;
-(void)_rendererDidFinishPreparingVideo;
-(void)_rendererDidFinishWithStatistics:(id)arg0 ;
-(void)_rendererDidStartPreparingVideo;
-(void)_rendererDidUpdateLivePhoto;
-(void)_setLayerFilters:(id)arg0 ;
-(void)_setupViews;
-(void)_startVideoPlayback;
-(void)_stopVideoPlayback;
-(void)_transitionToInsets:(struct UIEdgeInsets )arg0 duration:(CGFloat)arg1 animationCurve:(NSInteger)arg2 updateRenderContent:(BOOL)arg3 ;
-(void)_updateContentInsets;
-(void)_updateRenderContent;
-(void)_updateRenderContentCoalesced:(BOOL)arg0 ;
-(void)_updateVideoPlayerAlpha:(BOOL)arg0 ;
-(void)_withComposition:(id)arg0 visitRenderClient:(id)arg1 ;
-(void)didMoveToWindow;
-(void)installRenderingCompletionBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)playerController:(id)arg0 didUpdateElapsedTime:(CGFloat)arg1 duration:(CGFloat)arg2 ;
-(void)playerControllerDidFinishPlaying:(id)arg0 duration:(CGFloat)arg1 ;
-(void)playerControllerFailedToPlayToEnd:(id)arg0 error:(id)arg1 ;
-(void)playerControllerIsReadyForPlayback:(id)arg0 ;
-(void)playerViewReadyForDisplayDidChange:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)waitForRender;
-(void)zoomToRect:(struct CGRect )arg0 animated:(BOOL)arg1 ;


@end


#endif