// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRUITOUCHPADVIEWCONTROLLER_H
#define TVRUITOUCHPADVIEWCONTROLLER_H

@class UIViewController, UIView, NSString;
@protocol _TVRUIEventDelegate, UIPointerInteractionDelegate, TVRUIRemoteViewProvider, TVRUIDevice, TVRUIStyleProvider, TVRUITouchProcessor;


#import "TVRUIDirectionalControlView.h"
#import "TVRUITouchpadView.h"

@interface TVRUITouchpadViewController : UIViewController <_TVRUIEventDelegate, UIPointerInteractionDelegate, TVRUIRemoteViewProvider>



@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TVRUIDirectionalControlView *directionalControlView; // ivar: _directionalControlView
@property (weak, nonatomic) NSObject<_TVRUIEventDelegate> *eventDelegate; // ivar: _eventDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=areMediaControlsVisible) BOOL mediaControlsAreVisible; // ivar: _mediaControlsAreVisible
@property (retain, nonatomic) NSObject<TVRUIDevice> *remoteDevice; // ivar: _remoteDevice
@property (nonatomic, getter=isShowingControls) BOOL showControls;
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<TVRUITouchProcessor> *touchProcessor; // ivar: _touchProcessor
@property (nonatomic) NSInteger touchpadMode; // ivar: _touchpadMode
@property (retain, nonatomic) TVRUITouchpadView *touchpadView; // ivar: _touchpadView


-(BOOL)_canShowWhileLocked;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_darkenSystemColorsChanged:(id)arg0 ;
-(void)_setupDirectionalArrowView;
-(void)_setupTouchpadView;
-(void)_simpleRemoteGesturesEnabled:(id)arg0 ;
-(void)_toggleControlScale;
-(void)_transitionToAppropriateView;
-(void)_transitionToDirectionalControlView;
-(void)_transitionToTouchpadView;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)setDevice:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)transitonToViewForDeviceType:(NSInteger)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif