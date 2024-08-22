// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLRINGSLIDERRANGEVIEWCONTROLLER_H
#define HUQUICKCONTROLRINGSLIDERRANGEVIEWCONTROLLER_H

@class HFRangeControlItem, NSString;
@protocol HUQuickControlRingSliderInteractionCoordinatorDelegate;


#import "HUQuickControlSingleControlViewController.h"
#import "HUQuickControlRingSliderView.h"
#import "HUQuickControlRingSliderViewProfile.h"

@interface HUQuickControlRingSliderRangeViewController : HUQuickControlSingleControlViewController <HUQuickControlRingSliderInteractionCoordinatorDelegate>



@property (readonly, nonatomic) HFRangeControlItem *controlItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUQuickControlRingSliderView *ringSliderView; // ivar: _ringSliderView
@property (readonly) Class superclass;
@property (readonly, nonatomic) HUQuickControlRingSliderViewProfile *viewProfile;


-(id)controlToViewValueTransformer;
-(id)createInteractionCoordinator;
-(id)createViewProfile;
-(void)_getHeaterCoolerThresholdControlItemStateString:(*id)arg0 temperatureString:(*id)arg1 withRangeControlItemValue:(id)arg2 ;
-(void)_getTemperatureThresholdControlItemStateString:(*id)arg0 temperatureString:(*id)arg1 withRangeControlItemValue:(id)arg2 ;
-(void)interactionCoordinator:(id)arg0 viewValueDidChange:(id)arg1 ;
-(void)invalidateViewProfile;
-(void)modelValueDidChange;
-(void)quickControlItemUpdater:(id)arg0 didUpdateResultsForControlItems:(id)arg1 ;
-(void)updateMainStatusStringWithValue:(id)arg0 ;
-(void)updateSupplementaryValue;


@end


#endif