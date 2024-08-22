// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERVIEWCONTROLLERCUSTOMCONTROLSVIEW_H
#define AVPLAYERVIEWCONTROLLERCUSTOMCONTROLSVIEW_H

@class UIView, NSLayoutConstraint, UILayoutGuide;



@interface AVPlayerViewControllerCustomControlsView : UIView {
    BOOL _needsInitialConstraints;
    NSLayoutConstraint *_transportControlsVisibleConstraint;
    NSLayoutConstraint *_transportControlsHiddenConstraint;
    NSLayoutConstraint *_volumeControlsVisibleConstraint;
    NSLayoutConstraint *_volumeControlsHiddenConstraint;
}


@property (readonly, nonatomic) UILayoutGuide *animatedUnobscuredCenterAreaLayoutGuide; // ivar: _animatedUnobscuredCenterAreaLayoutGuide
@property (readonly, nonatomic) UIView *animatedUnobscuredCenterAreaLayoutGuideProvidingView; // ivar: _animatedUnobscuredCenterAreaLayoutGuideProvidingView
@property (nonatomic) BOOL areTransportControlsVisible; // ivar: _areTransportControlsVisible
@property (nonatomic) BOOL areVolumeControlsVisible; // ivar: _areVolumeControlsVisible
@property (readonly, nonatomic) UILayoutGuide *displayModeControlsAreaLayoutGuide; // ivar: _displayModeControlsAreaLayoutGuide
@property (readonly, nonatomic) UIView *displayModeControlsAreaLayoutGuideProvidingView; // ivar: _displayModeControlsAreaLayoutGuideProvidingView
@property (readonly, nonatomic) UILayoutGuide *transportControlsAreaLayoutGuide; // ivar: _transportControlsAreaLayoutGuide
@property (readonly, nonatomic) UIView *transportControlsAreaLayoutGuideProvidingView; // ivar: _transportControlsAreaLayoutGuideProvidingView
@property (readonly, nonatomic) UILayoutGuide *unobscuredCenterAreaLayoutGuide; // ivar: _unobscuredCenterAreaLayoutGuide
@property (readonly, nonatomic) UIView *unobscuredCenterAreaLayoutGuideProvidingView; // ivar: _unobscuredCenterAreaLayoutGuideProvidingView
@property (readonly, nonatomic) UILayoutGuide *unobscuredTopAreaLayoutGuide; // ivar: _unobscuredTopAreaLayoutGuide
@property (readonly, nonatomic) UIView *unobscuredTopAreaLayoutGuideProvidingView; // ivar: _unobscuredTopAreaLayoutGuideProvidingView
@property (readonly, nonatomic) UILayoutGuide *volumeControlsAreaLayoutGuide; // ivar: _volumeControlsAreaLayoutGuide
@property (readonly, nonatomic) UIView *volumeControlsAreaLayoutGuideProvidingView; // ivar: _volumeControlsAreaLayoutGuideProvidingView


+(BOOL)requiresConstraintBasedLayout;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif