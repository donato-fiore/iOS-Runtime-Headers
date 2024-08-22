// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUVOLUMEVIEWCONTROLLER_H
#define MRUVOLUMEVIEWCONTROLLER_H

@class UIViewController, UIViewPropertyAnimator, NSString, NSArray, UIWindowScene;
@protocol MRUSystemOutputDeviceRouteControllerObserver, MRUSystemVolumeControllerDelegate, MPVolumeDisplaying, CCUIGroupRendering, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController, MRUVolumeViewControllerDelegate;


#import "MRUVisualStylingProvider.h"
#import "MRUVolumeView.h"
#import "MRUSystemVolumeController.h"

@interface MRUVolumeViewController : UIViewController <MRUSystemOutputDeviceRouteControllerObserver, MRUSystemVolumeControllerDelegate, MPVolumeDisplaying, CCUIGroupRendering, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController>



@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUVolumeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly, nonatomic) CGFloat preferredExpandedContentHeight;
@property (readonly, nonatomic) CGFloat preferredExpandedContentWidth;
@property (readonly, nonatomic) CGFloat preferredExpandedContinuousCornerRadius;
@property (nonatomic) BOOL primaryInteractionEnabled; // ivar: _primaryInteractionEnabled
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) NSArray *punchOutRenderingViews;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (nonatomic) BOOL secondaryInteractionEnabled; // ivar: _secondaryInteractionEnabled
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (retain, nonatomic) MRUVolumeView *view;
@property (retain, nonatomic) MRUVolumeView *viewIfLoaded;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (retain, nonatomic) MRUSystemVolumeController *volumeController; // ivar: _volumeController
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;


-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)shouldExpandModuleOnTouch:(id)arg0 ;
-(id)initWithVolumeController:(id)arg0 ;
-(void)dealloc;
-(void)decreaseTouchUpInside:(id)arg0 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg0 ;
-(void)dismiss;
-(void)increaseTouchUpInside:(id)arg0 ;
-(void)loadView;
-(void)primarySliderValueDidChange:(id)arg0 ;
-(void)secondarySliderValueDidChange:(id)arg0 ;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg0 ;
-(void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)arg0 ;
-(void)systemVolumeController:(id)arg0 didChangeVolumeControlCapabilities:(unsigned int)arg1 effectiveVolumeValue:(float)arg2 forType:(NSInteger)arg3 ;
-(void)updatePrimarySliderVolumeValue;
-(void)updateSecondarySliderVolumeValue;
-(void)updateSliderAsset;
-(void)updateVisibility;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif