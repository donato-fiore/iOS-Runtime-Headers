// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVOLUMECONTROLSCONTROLLER_H
#define AVVOLUMECONTROLSCONTROLLER_H

@class UIView, NSLayoutConstraint, UIHoverGestureRecognizer;
@protocol AVVolumeControlsControllerLayoutDelegate, AVVolumeControlsControllerDelegate;

#import <Foundation/Foundation.h>

#import "AVVolumeButtonControl.h"
#import "AVVolumeControlsContentView.h"
#import "AVVolumeSlider.h"
#import "AVLayoutView.h"

@interface AVVolumeControlsController : NSObject

@property (nonatomic) BOOL canShowVolumeSlider; // ivar: _canShowVolumeSlider
@property (nonatomic) float playerViewHeight; // ivar: _playerViewHeight
@property (weak) NSObject<AVVolumeControlsControllerLayoutDelegate> *transportViewDelegate; // ivar: _transportViewDelegate
@property (readonly, nonatomic) AVVolumeButtonControl *volumeButton; // ivar: _volumeButton
@property (weak, nonatomic) UIView *volumeControlParentView; // ivar: _volumeControlParentView
@property (weak) NSObject<AVVolumeControlsControllerDelegate> *volumeControllerDelegate; // ivar: _volumeControllerDelegate
@property (retain, nonatomic) AVVolumeControlsContentView *volumeControlsContentView; // ivar: _volumeControlsContentView
@property (readonly, nonatomic) AVVolumeSlider *volumeSlider; // ivar: _volumeSlider
@property (retain, nonatomic) AVLayoutView *volumeSliderContentView; // ivar: _volumeSliderContentView
@property (retain, nonatomic) NSLayoutConstraint *volumeSliderGapConstraint; // ivar: _volumeSliderGapConstraint
@property (nonatomic) BOOL volumeSliderGestureActive; // ivar: _volumeSliderGestureActive
@property (retain, nonatomic) NSLayoutConstraint *volumeSliderHeightConstraint; // ivar: _volumeSliderHeightConstraint
@property (retain, nonatomic) UIHoverGestureRecognizer *volumeSliderHover; // ivar: _volumeSliderHover
@property (nonatomic) float volumeSliderTransportBarHeight; // ivar: _volumeSliderTransportBarHeight
@property (retain, nonatomic) NSLayoutConstraint *volumeSliderWidthConstraint; // ivar: _volumeSliderWidthConstraint


-(id)init;
-(void)_commonInit;
-(void)hideVolumeSlider;
-(void)layoutVolumeSliderViewIfNeeded;
-(void)mouseDidEnterVolumeControlsContentView:(id)arg0 ;
-(void)mouseDidEnterVolumeControlsVolumeButton:(id)arg0 ;
-(void)prepareSliderView;
-(void)showSliderViewIfNeeded;
-(void)updateVolumeControlsContollerLayout;


@end


#endif