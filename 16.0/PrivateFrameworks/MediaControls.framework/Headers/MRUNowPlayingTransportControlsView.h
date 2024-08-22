// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUNOWPLAYINGTRANSPORTCONTROLSVIEW_H
#define MRUNOWPLAYINGTRANSPORTCONTROLSVIEW_H

@class UIView, NSTimer;
@protocol MRUNowPlayingTransportControlsViewDelegate;


#import "MRUTransportButton.h"
#import "MRUVisualStylingProvider.h"
#import "MRUTransportControls.h"

@interface MRUNowPlayingTransportControlsView : UIView

@property (retain, nonatomic) MRUTransportButton *centerButton; // ivar: _centerButton
@property (weak, nonatomic) NSObject<MRUNowPlayingTransportControlsViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (retain, nonatomic) MRUTransportButton *leadingButton; // ivar: _leadingButton
@property (retain, nonatomic) MRUTransportButton *leftButton; // ivar: _leftButton
@property (retain, nonatomic) NSTimer *leftButtonAnimationTimer; // ivar: _leftButtonAnimationTimer
@property (nonatomic) NSUInteger leftButtonState; // ivar: _leftButtonState
@property (retain, nonatomic) MRUTransportButton *rightButton; // ivar: _rightButton
@property (retain, nonatomic) NSTimer *rightButtonAnimationTimer; // ivar: _rightButtonAnimationTimer
@property (nonatomic) NSUInteger rightButtonState; // ivar: _rightButtonState
@property (readonly, nonatomic) MRUTransportButton *routingButton; // ivar: _routingButton
@property (nonatomic) BOOL showRoutingButton; // ivar: _showRoutingButton
@property (nonatomic) BOOL showTVRemoteButton; // ivar: _showTVRemoteButton
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (retain, nonatomic) MRUTransportControls *transportControls; // ivar: _transportControls


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)beganHoldLeftButton:(id)arg0 ;
-(void)beganHoldRightButton:(id)arg0 ;
-(void)didSelectCenterButton:(id)arg0 ;
-(void)didSelectLeadingButton:(id)arg0 ;
-(void)didSelectLeftButton:(id)arg0 ;
-(void)didSelectRightButton:(id)arg0 ;
-(void)didSelectRoutingButton:(id)arg0 ;
-(void)releasedHoldLeftButton:(id)arg0 ;
-(void)releasedHoldRightButton:(id)arg0 ;
-(void)updateImageConfiguration;
-(void)updateVisibility;


@end


#endif