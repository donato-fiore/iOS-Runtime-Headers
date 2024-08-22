// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLSINGLECONTROLVIEWCONTROLLER_H
#define HUQUICKCONTROLSINGLECONTROLVIEWCONTROLLER_H

@class HFControlItem, NSString, NAValueThrottler;
@protocol HUQuickControlInteractionCoordinatorDelegate, HUQuickControlTouchContinuing;


#import "HUQuickControlViewController.h"
#import "HUQuickControlInteractionCoordinator.h"
#import "_HUQuickControlSingleControlHostView.h"
#import "HUQuickControlViewProfile.h"

@interface HUQuickControlSingleControlViewController : HUQuickControlViewController <HUQuickControlInteractionCoordinatorDelegate, HUQuickControlTouchContinuing>



@property (readonly, nonatomic) HFControlItem *controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSetControlSize; // ivar: _hasSetControlSize
@property (nonatomic) BOOL hasWrittenAnyNewValues; // ivar: _hasWrittenAnyNewValues
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalControlCompressionFactor; // ivar: _horizontalControlCompressionFactor
@property (nonatomic) NSUInteger inFlightWriteCount; // ivar: _inFlightWriteCount
@property (retain, nonatomic) HUQuickControlInteractionCoordinator *interactionCoordinator; // ivar: _interactionCoordinator
@property (readonly, nonatomic) id *modelValue; // ivar: _modelValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NAValueThrottler *valueWriteThrottler; // ivar: _valueWriteThrottler
@property (nonatomic) CGFloat verticalDirectionalControlStretchFactor; // ivar: _verticalDirectionalControlStretchFactor
@property (retain, nonatomic) _HUQuickControlSingleControlHostView *view;
@property (retain, nonatomic) HUQuickControlViewProfile *viewProfile; // ivar: _viewProfile
@property (nonatomic, getter=areWritesInProgressOrPossible) BOOL writesInProgressOrPossible; // ivar: _writesInProgressOrPossible


-(BOOL)_canShowWhileLocked;
-(BOOL)hasModelValueChangedForInteractionCoordinator:(id)arg0 ;
-(BOOL)isUserInteractionEnabled;
-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(id)initWithControlItem:(id)arg0 home:(id)arg1 itemUpdater:(id)arg2 controlOrientation:(NSUInteger)arg3 preferredControl:(NSUInteger)arg4 ;
-(id)initWithControlItems:(id)arg0 home:(id)arg1 itemUpdater:(id)arg2 controlOrientation:(NSUInteger)arg3 preferredControl:(NSUInteger)arg4 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(id)overrideSecondaryStatusText;
-(id)overrideStatusText;
-(id)overrideValueForCharacteristic:(id)arg0 ;
-(void)_updateControlTransform;
-(void)_updateControlViewReachabilityState;
-(void)_updateTitle;
-(void)_updateViewProfileForCurrentItemState;
-(void)_updateWriteState;
-(void)_writeModelControlValue:(id)arg0 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)hideAuxiliaryViewForInteractionCoordinator:(id)arg0 ;
-(void)interactionCoordinator:(id)arg0 interactionStateDidChange:(BOOL)arg1 ;
-(void)interactionCoordinator:(id)arg0 showAuxiliaryView:(id)arg1 ;
-(void)interactionCoordinator:(id)arg0 updateControlHorizontalCompressionFactor:(CGFloat)arg1 ;
-(void)interactionCoordinator:(id)arg0 updateControlVerticalStretchFactor:(CGFloat)arg1 ;
-(void)interactionCoordinator:(id)arg0 viewValueDidChange:(id)arg1 ;
-(void)interactionCoordinatorWantsDismissal:(id)arg0 ;
-(void)invalidateViewProfile;
-(void)loadView;
-(void)quickControlItemUpdater:(id)arg0 didUpdateResultsForControlItems:(id)arg1 ;
-(void)setControlOrientation:(NSUInteger)arg0 ;
-(void)setControlSize:(NSUInteger)arg0 ;
-(void)setPreferredControl:(NSUInteger)arg0 ;
-(void)setPreferredFrameLayoutGuide:(id)arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)updateValueFromControlItem;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif