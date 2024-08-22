// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEDIACONTROLSPARENTCONTAINERVIEW_H
#define MEDIACONTROLSPARENTCONTAINERVIEW_H

@class UIView;


#import "MediaControlsSeparatorView.h"
#import "MediaControlsContainerView.h"
#import "MediaControlsTimeControl.h"
#import "MediaControlsTransportStackView.h"

@interface MediaControlsParentContainerView : UIView

@property (retain, nonatomic) MediaControlsSeparatorView *bottomDividerView; // ivar: _bottomDividerView
@property (retain, nonatomic) MediaControlsContainerView *containerView; // ivar: _containerView
@property (retain, nonatomic) UIView *mediaControlsRoutingPickerView; // ivar: _mediaControlsRoutingPickerView
@property (retain, nonatomic) UIView *routingView;
@property (nonatomic) NSInteger routingViewControllerAnimationCount; // ivar: _routingViewControllerAnimationCount
@property (nonatomic) NSInteger selectedMode; // ivar: _selectedMode
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) MediaControlsTimeControl *timeControl;
@property (retain, nonatomic) MediaControlsSeparatorView *topDividerView; // ivar: _topDividerView
@property (retain, nonatomic) MediaControlsTransportStackView *transportStackView;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setInitialFrameForRoutingView:(id)arg0 ;
-(void)_toggleRoutingPickerAnimated:(BOOL)arg0 ;
-(void)_updateRoutingPickerVisibilityAnimated:(BOOL)arg0 ;
-(void)_updateTimeControlVisibility:(id)arg0 ;
-(void)didMoveToWindow;
-(void)handleHoverGestureRecognizer:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif