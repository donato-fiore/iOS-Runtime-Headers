// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MEDIACONTROLSVOLUMECONTAINERVIEW_H
#define MEDIACONTROLSVOLUMECONTAINERVIEW_H

@class UIView, NSString, MTVisualStylingProvider;
@protocol UIGestureRecognizerDelegate;


#import "MediaControlsVolumeSlider.h"
#import "MediaControlsRelativeVolumeStepper.h"

@interface MediaControlsVolumeContainerView : UIView <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning
@property (retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // ivar: _visualStylingProvider
@property (nonatomic) unsigned int volumeCapabilities; // ivar: _volumeCapabilities
@property (retain, nonatomic) MediaControlsVolumeSlider *volumeSlider; // ivar: _volumeSlider
@property (retain, nonatomic) MediaControlsRelativeVolumeStepper *volumeStepper; // ivar: _volumeStepper


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 slider:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateVolumeCapabilities;
-(void)_updateVolumeStyle;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif