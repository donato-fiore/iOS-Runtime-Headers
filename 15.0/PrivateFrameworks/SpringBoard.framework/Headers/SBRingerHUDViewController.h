// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBRINGERHUDVIEWCONTROLLER_H
#define SBRINGERHUDVIEWCONTROLLER_H

@class UIViewController, NSString, NSTimer, UIViewFloatAnimatableProperty;
@protocol UIViewControllerTransitioningDelegate, SBHUDViewControlling, SBRingerHUDViewControllerDelegate;


#import "SBRingerPillView.h"

@interface SBRingerHUDViewController : UIViewController <UIViewControllerTransitioningDelegate, SBHUDViewControlling>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBRingerHUDViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSTimer *dismissalTimer; // ivar: _dismissalTimer
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastEventIsAVolumeChange; // ivar: _lastEventIsAVolumeChange
@property (nonatomic) CGFloat overshoot; // ivar: _overshoot
@property (retain, nonatomic) SBRingerPillView *pillView; // ivar: _pillView
@property (retain, nonatomic) UIViewFloatAnimatableProperty *positionSpring; // ivar: _positionSpring
@property (readonly, nonatomic, getter=isPresented) BOOL presented;
@property (nonatomic) BOOL ringerSilent; // ivar: _ringerSilent
@property (retain, nonatomic) UIViewFloatAnimatableProperty *ringerValueSpring; // ivar: _ringerValueSpring
@property (readonly) Class superclass;
@property (nonatomic) float volume; // ivar: _volume


-(BOOL)_canShowWhileLocked;
-(BOOL)definesAnimatedDismissal;
-(void)_createSprings;
-(void)_dismiss;
-(void)_extendDismissalTimer;
-(void)_layoutPillView;
-(void)_updateStateAnimated:(BOOL)arg0 invert:(BOOL)arg1 ;
-(void)_updateVolumeSliderAnimated:(BOOL)arg0 ;
-(void)buttonReleased;
-(void)dismissAnimatedWithCompletion:(id)arg0 ;
-(void)loadView;
-(void)noteVolumeDidChange:(float)arg0 ;
-(void)noteVolumeDownWasHit:(BOOL)arg0 ;
-(void)noteVolumeUpWasHit:(BOOL)arg0 ;
-(void)nudgeUp:(BOOL)arg0 ;
-(void)presentForMuteSwitch:(BOOL)arg0 ;
-(void)refreshAudioUI;
-(void)swipeGesture:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif