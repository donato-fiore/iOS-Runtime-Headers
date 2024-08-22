// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUEVENTCREATIONUIFLOW_H
#define HUEVENTCREATIONUIFLOW_H

@class NSString, UINavigationController;
@protocol HUEventUIFlowPresentationController;


#import "HUEventUIFlow.h"

@interface HUEventCreationUIFlow : HUEventUIFlow <HUEventUIFlowPresentationController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL modalInPresentation; // ivar: _modalInPresentation
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;


-(BOOL)characteristicServicePickerViewControllerAllowChangingCharacteristic:(id)arg0 ;
-(id)_emptyConfigurationInitialStep;
-(id)_initialStepForEventType:(NSUInteger)arg0 ;
-(id)_summaryStepForEventType:(NSUInteger)arg0 ;
-(id)_viewControllerForStep:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 eventBuilderItem:(id)arg1 ;
-(id)presentationController;
-(void)setupNavigationController;
-(void)transitionToViewController:(id)arg0 ;


@end


#endif