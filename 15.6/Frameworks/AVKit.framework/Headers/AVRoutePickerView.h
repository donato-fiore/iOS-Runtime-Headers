// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVROUTEPICKERVIEW_H
#define AVROUTEPICKERVIEW_H

@class UIView, UIColor, UIButton, UIViewPropertyAnimator, AVOutputContext, MPMediaControls, NSString;
@protocol OS_dispatch_queue, AVRoutePickerViewDelegate;


#import "AVObservationController.h"
#import "AVMicaPackage.h"

@interface AVRoutePickerView : UIView {
    NSObject<OS_dispatch_queue> *_getAirPlayStatusQueue;
    UIColor *_activeTintColor;
    UIButton *_routePickerButton;
    UIButton *_customButton;
    CGSize _oldSize;
    UIViewPropertyAnimator *_buttonHighlightAnimator;
    AVObservationController *_observationController;
    AVOutputContext *_outputContext;
    BOOL _airPlayActive;
    BOOL _prioritizesVideoDevices;
    AVMicaPackage *_routePickerButtonMicaPackage;
    MPMediaControls *_routePickingControls;
}


@property (retain, nonatomic) UIColor *activeTintColor;
@property (weak, nonatomic) NSObject<AVRoutePickerViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *overrideRoutingContextUID; // ivar: _overrideRoutingContextUID
@property (nonatomic) BOOL prioritizesVideoDevices;
@property (nonatomic) NSInteger routePickerButtonStyle; // ivar: _routePickerButtonStyle


-(BOOL)_isAirPlayActive;
-(BOOL)isAirPlayActive;
-(id)_defaultActiveTintColor;
-(id)customButton;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_normalizedRect:(struct CGRect )arg0 fromView:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_createOrUpdateRoutePickerButton;
-(void)_registerNotifications;
-(void)_routePickerButtonTapped:(id)arg0 ;
-(void)_routePickerButtonTouchDown:(id)arg0 ;
-(void)_routePickerButtonTouchDragEnter:(id)arg0 ;
-(void)_routePickerButtonTouchUp:(id)arg0 ;
-(void)_setRoutePickerButtonAlpha:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)_setupOutputContext;
-(void)_updateAirPlayActive;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)presentRoutePicker:(id)arg0 ;
-(void)setAirPlayActive:(BOOL)arg0 ;
-(void)setCustomButton:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateButtonAppearance;


@end


#endif