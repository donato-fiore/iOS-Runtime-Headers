// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLAUDIOITEMVIEWCONTROLLER_H
#define QLAUDIOITEMVIEWCONTROLLER_H

@class UIScrollView, NSString, UIView, NSLayoutConstraint;
@protocol UIGestureRecognizerDelegate;


#import "QLMediaItemViewController.h"
#import "QLOverlayPlayButton.h"
#import "QLVideoScrubberView.h"
#import "QLWaveformScrubberViewProvider.h"

@interface QLAudioItemViewController : QLMediaItemViewController <UIGestureRecognizerDelegate>

 {
    QLOverlayPlayButton *_playButton;
    UIScrollView *_scrubberContainerScrollView;
    QLVideoScrubberView *_scrubber;
    QLWaveformScrubberViewProvider *_scrubberViewProvider;
    BOOL _previewIsVisisble;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) UIView *scrubberContainer; // ivar: _scrubberContainer
@property CGFloat scrubberVerticalOffset; // ivar: _scrubberVerticalOffset
@property BOOL scrubbing; // ivar: _scrubbing
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *topScrubber; // ivar: _topScrubber


-(BOOL)canEnterFullScreen;
-(BOOL)canPerformFirstTimeAppearanceActions:(NSUInteger)arg0 ;
-(id)accessoryView;
-(id)timeLabelScrollView;
-(void)_tapRecognized:(id)arg0 ;
-(void)addScrubberWithDeferral;
-(void)dealloc;
-(void)didChangePlayingStatus;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performFirstTimeAppearanceActions:(NSUInteger)arg0 ;
-(void)previewDidAppear:(BOOL)arg0 ;
-(void)previewDidDisappear:(BOOL)arg0 ;
-(void)setPlayControlsHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)transitionDidFinish:(BOOL)arg0 didComplete:(BOOL)arg1 ;
-(void)transitionDidStart:(BOOL)arg0 ;


@end


#endif