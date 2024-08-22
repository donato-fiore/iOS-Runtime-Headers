// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSVOLUMEVIEWCONTROLLER_H
#define MEDIACONTROLSVOLUMEVIEWCONTROLLER_H

@class UIViewController, NSString, UIViewPropertyAnimator, CALayer, NSArray, UIWindowScene;
@protocol MediaControlsVolumeControllerObserver, MPVolumeDisplaying, CCUIGroupRendering, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController, MediaControlsVolumeViewControllerDelegate;


#import "MediaControlsVolumeSliderView.h"
#import "MediaControlsVolumeController.h"

@interface MediaControlsVolumeViewController : UIViewController <MediaControlsVolumeControllerObserver, MPVolumeDisplaying, CCUIGroupRendering, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>

 {
    MediaControlsVolumeSliderView *_primarySlider;
    MediaControlsVolumeSliderView *_secondarySlider;
    NSString *_packageName;
    BOOL _isExpanded;
}


@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MediaControlsVolumeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly, nonatomic) CGFloat preferredExpandedContentHeight;
@property (readonly, nonatomic) CGFloat preferredExpandedContentWidth;
@property (readonly, nonatomic) CGFloat preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) CALayer *punchOutRootLayer;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (retain, nonatomic) MediaControlsVolumeController *volumeController; // ivar: _volumeController
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)shouldExpandModuleOnTouch:(id)arg0 ;
-(struct CGRect )primaryFrame;
-(struct CGRect )secondaryFrame;
-(void)_dismissMediaControlsVolumeViewController;
-(void)_performWithoutAnimationWhileHidden:(id)arg0 ;
-(void)_primarySliderValueDidChange:(id)arg0 ;
-(void)_secondarySliderValueDidChange:(id)arg0 ;
-(void)_updateGlyphPackageDescription;
-(void)_updateVisibility;
-(void)dealloc;
-(void)didTransitionToExpandedContentMode:(BOOL)arg0 ;
-(void)mediaControlsVolumeController:(id)arg0 didChangeUserInteractionEnabled:(BOOL)arg1 forRoute:(NSInteger)arg2 ;
-(void)mediaControlsVolumeController:(id)arg0 didChangeVolumeAvailable:(BOOL)arg1 effectiveVolume:(float)arg2 forRoute:(NSInteger)arg3 ;
-(void)mediaControlsVolumeController:(id)arg0 didUpdateSplitRoute:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg0 ;


@end


#endif