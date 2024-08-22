// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLSIMPLEINTERACTIONCOORDINATOR_H
#define HUQUICKCONTROLSIMPLEINTERACTIONCOORDINATOR_H

@class UIViewController<HUQuickControlInteractiveViewController>, UIView<HUQuickControlInteractiveView>, NSString;
@protocol HUQuickControlViewInteractionDelegate;


#import "HUQuickControlInteractionCoordinator.h"

@interface HUQuickControlSimpleInteractionCoordinator : HUQuickControlInteractionCoordinator <HUQuickControlViewInteractionDelegate>

 {
    id *_value;
}


@property (readonly, nonatomic) UIViewController<HUQuickControlInteractiveViewController> *contraptionViewController; // ivar: _contraptionViewController
@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *controlView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasStartedSecondTouch; // ivar: _hasStartedSecondTouch
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldDismissAutomatically; // ivar: _shouldDismissAutomatically
@property (readonly) Class superclass;


-(BOOL)isUserInteractionActive;
-(BOOL)isUserInteractionEnabled;
-(id)initWithContraptionViewController:(id)arg0 delegate:(id)arg1 ;
-(id)initWithControlView:(id)arg0 delegate:(id)arg1 ;
-(id)value;
-(void)_requestDismissalIfNecessary;
-(void)_setValue:(id)arg0 notifyDelegate:(BOOL)arg1 updateControlView:(BOOL)arg2 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)controlView:(id)arg0 interactionStateDidChange:(BOOL)arg1 forFirstTouch:(BOOL)arg2 ;
-(void)controlView:(id)arg0 valueDidChange:(id)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif