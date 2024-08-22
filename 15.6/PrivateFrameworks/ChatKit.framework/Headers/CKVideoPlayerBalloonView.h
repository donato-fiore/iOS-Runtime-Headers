// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVIDEOPLAYERBALLOONVIEW_H
#define CKVIDEOPLAYERBALLOONVIEW_H

@class NSString, UIView;
@protocol UIGestureRecognizerDelegate, AVPlayerViewControllerDelegate, CKReusableVideoPlayerDelegate, CKVideoPlayerBalloonViewDelegate;


#import "CKImageBalloonView.h"
#import "CKMovieMediaObject.h"
#import "CKVideoPlayerReusePool.h"
#import "CKReusableVideoPlayer.h"

@interface CKVideoPlayerBalloonView : CKImageBalloonView <UIGestureRecognizerDelegate, AVPlayerViewControllerDelegate, CKReusableVideoPlayerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKVideoPlayerBalloonViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKMovieMediaObject *mediaObject; // ivar: _mediaObject
@property (nonatomic, getter=isObservingSceneDisconnects) BOOL observingSceneDisconnects; // ivar: _observingSceneDisconnects
@property (retain, nonatomic) CKVideoPlayerReusePool *playerPool; // ivar: _playerPool
@property (retain, nonatomic) UIView *playerView; // ivar: _playerView
@property (retain, nonatomic) CKReusableVideoPlayer *reusablePlayer; // ivar: _reusablePlayer
@property (readonly) Class superclass;


-(BOOL)gestureIsOurGesture:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)playerItem;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)cleanUpPlayerIfNeeded;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 hasInvisibleInkEffect:(BOOL)arg3 ;
-(void)doubleTapGestureRecognized:(id)arg0 ;
-(void)layoutSubviews;
-(void)pausePlayback;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)showPlayerViewController;
-(void)startPlayingInlineVideo;
-(void)tapGestureRecognized:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif