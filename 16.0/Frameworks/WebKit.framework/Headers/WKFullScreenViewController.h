// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKFULLSCREENVIEWCONTROLLER_H
#define WKFULLSCREENVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UIGestureRecognizerDelegate, UIToolbarDelegate;


#import "WKWebView.h"

@interface WKFullScreenViewController : UIViewController <UIGestureRecognizerDelegate, UIToolbarDelegate>

 {
    BOOL _valid;
    RetainPtr<UILongPressGestureRecognizer> _touchGestureRecognizer;
    RetainPtr<UIView> _animatingView;
    RetainPtr<UIStackView> _stackView;
    RetainPtr<_WKExtrinsicButton> _cancelButton;
    RetainPtr<_WKExtrinsicButton> _pipButton;
    RetainPtr<UIButton> _locationButton;
    RetainPtr<UILayoutGuide> _topGuide;
    RetainPtr<NSLayoutConstraint> _topConstraint;
    FullscreenTouchSecheuristic _secheuristic;
    WKFullScreenViewControllerPlaybackSessionModelClient _playbackClient;
    CGFloat _nonZeroStatusBarHeight;
}


@property ? _effectiveFullscreenInsets;
@property (readonly, nonatomic) *void _manager;
@property (weak, nonatomic) WKWebView *_webView; // ivar: __webView
@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) SEL exitFullScreenAction; // ivar: _exitFullScreenAction
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *location; // ivar: _location
@property (nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive; // ivar: _pictureInPictureActive
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (nonatomic) BOOL prefersHomeIndicatorAutoHidden; // ivar: _prefersHomeIndicatorAutoHidden
@property (nonatomic) BOOL prefersStatusBarHidden; // ivar: _prefersStatusBarHidden
@property (readonly) Class superclass;
@property (retain, nonatomic) id *target; // ivar: _target


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithWebView:(id)arg0 ;
-(void)_cancelAction:(id)arg0 ;
-(void)_statusBarFrameDidChange:(id)arg0 ;
-(void)_togglePiPAction:(id)arg0 ;
-(void)_touchDetected:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif