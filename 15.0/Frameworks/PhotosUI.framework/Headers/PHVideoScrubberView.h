// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHVIDEOSCRUBBERVIEW_H
#define PHVIDEOSCRUBBERVIEW_H

@class UIView, UIView<PHVideoScrubberFilmstripView>, PXVideoScrubberController, NSString, UIImage, AVPlayer, UIScrollView;
@protocol PXVideoScrubberControllerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, PHVideoScrubberFilmstripViewProvider, PHVideoScrubberViewInteractionDelegate;


#import "PUPlayheadView.h"

@interface PHVideoScrubberView : UIView <PXVideoScrubberControllerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate>

 {
    NSUInteger _previousPlayState;
    ? _interactionDelegateRespondsTo;
}


@property (retain, nonatomic, setter=_setFilmStripView:) UIView<PHVideoScrubberFilmstripView> *_filmStripView; // ivar: __filmStripView
@property (nonatomic, setter=_setNeedsUpdateFilmStripView:) BOOL _needsUpdateFilmStripView; // ivar: __needsUpdateFilmStripView
@property (nonatomic, setter=_setNeedsUpdateVideoScrubberController:) BOOL _needsUpdateVideoScrubberController; // ivar: __needsUpdateVideoScrubberController
@property (retain, nonatomic, setter=_setPlayheadView:) PUPlayheadView *_playheadView; // ivar: __playheadView
@property (retain, nonatomic, setter=_setVideoScrubberController:) PXVideoScrubberController *_videoScrubberController; // ivar: __videoScrubberController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat estimatedDuration; // ivar: _estimatedDuration
@property (weak, nonatomic) NSObject<PHVideoScrubberFilmstripViewProvider> *filmstripViewProvider; // ivar: _filmstripViewProvider
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PHVideoScrubberViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (retain, nonatomic) UIImage *placeholderThumbnail; // ivar: _placeholderThumbnail
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic, setter=_setScrollView:) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(BOOL)_isUserInteractingWithScrollView;
-(BOOL)_needsUpdate;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(CGFloat)_lengthForDuration:(CGFloat)arg0 ;
-(CGFloat)videoScrubberController:(id)arg0 lengthForDuration:(CGFloat)arg1 ;
-(id)_currentAVAsset;
-(id)_currentVideoComposition;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleInteractionBegan;
-(void)_handleInteractionEndedAndTogglePlayState:(BOOL)arg0 ;
-(void)_handleLongPressGesture:(id)arg0 ;
-(void)_handleTapGesture:(id)arg0 ;
-(void)_handleTouchGesture:(id)arg0 ;
-(void)_invalidateFilmStripView;
-(void)_invalidateVideoScrubberController;
-(void)_updateFilmStripViewIfNeeded;
-(void)_updateIfNeeded;
-(void)_updatePlayheadFrame;
-(void)_updateScrollViewContentOffset;
-(void)_updateVideoscrubberControllerIfNeeded;
-(void)_updateVisibleRectOfFilmStripView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)videoScrubberControllerDidUpdate:(id)arg0 ;


@end


#endif