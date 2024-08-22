// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLRINGSLIDERINTERACTIONCOORDINATOR_H
#define HUQUICKCONTROLRINGSLIDERINTERACTIONCOORDINATOR_H

@class UIView<HUQuickControlInteractiveView>, NSString, HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile>;
@protocol HUQuickControlViewInteractionDelegate, HUQuickControlRingSliderInteractionCoordinatorDelegate;


#import "HUQuickControlInteractionCoordinator.h"

@interface HUQuickControlRingSliderInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlViewInteractionDelegate>



@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *controlView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUQuickControlRingSliderInteractionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFirstTouchDown) BOOL firstTouchDown; // ivar: _firstTouchDown
@property (nonatomic) BOOL hasSecondaryValue; // ivar: _hasSecondaryValue
@property (readonly) NSUInteger hash;
@property (nonatomic) ? modelRangeValue; // ivar: _modelRangeValue
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (readonly, nonatomic) HUQuickControlViewProfile<HUQuickControlIncrementalConvertibleProfile> *viewProfile;


-(id)initWithControlView:(id)arg0 delegate:(id)arg1 ;
-(id)value;
-(void)_updateControlViewValueOfType:(NSUInteger)arg0 withValue:(CGFloat)arg1 ;
-(void)_updateModelValue:(struct ? )arg0 roundValue:(BOOL)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)controlView:(id)arg0 interactionStateDidChange:(BOOL)arg1 forFirstTouch:(BOOL)arg2 ;
-(void)controlView:(id)arg0 valueDidChange:(id)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif