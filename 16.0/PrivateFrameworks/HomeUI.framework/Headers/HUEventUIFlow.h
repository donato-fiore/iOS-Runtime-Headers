// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUEVENTUIFLOW_H
#define HUEVENTUIFLOW_H

@class HFEventBuilderItem, HFEventTriggerBuilder;
@protocol HUEventUIFlowDelegate, HUEventUIFlowPresentationController;

#import <Foundation/Foundation.h>


@interface HUEventUIFlow : NSObject

@property (weak, nonatomic) NSObject<HUEventUIFlowDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HFEventBuilderItem *eventBuilderItem; // ivar: _eventBuilderItem
@property (nonatomic) NSUInteger eventType; // ivar: _eventType
@property (nonatomic) BOOL isPresentedModally; // ivar: _isPresentedModally
@property (readonly, nonatomic) HFEventBuilderItem *originalEventBuilderItem; // ivar: _originalEventBuilderItem
@property (weak, nonatomic) NSObject<HUEventUIFlowPresentationController> *presentationController; // ivar: _presentationController
@property (retain, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(BOOL)characteristicEditorAllowChangingCharacteristic:(id)arg0 ;
-(BOOL)isFlowCompleteAfterStep:(id)arg0 ;
-(BOOL)shouldSaveEventBuildersToTriggerBuilderForStep:(id)arg0 ;
-(BOOL)shouldShowDoneButtonForStep:(id)arg0 ;
-(BOOL)shouldShowNextButtonForStep:(id)arg0 ;
-(Class)_viewControllerClassForStep:(id)arg0 ;
-(NSUInteger)viewController:(id)arg0 servicePickerSourceForStep:(id)arg1 ;
-(id)_characteristicSelectionStepForEventType:(NSUInteger)arg0 ;
-(id)_createViewControllerWithClass:(Class)arg0 step:(id)arg1 ;
-(id)_emptyConfigurationInitialStep;
-(id)_initialEventBuilderItemForType:(NSUInteger)arg0 ;
-(id)_initialStepForEventType:(NSUInteger)arg0 ;
-(id)_stepFolowingStep:(id)arg0 ;
-(id)_summaryStepForEventType:(NSUInteger)arg0 ;
-(id)_viewControllerForStep:(id)arg0 ;
-(id)buildInitialViewController;
-(id)initWithTriggerBuilder:(id)arg0 eventBuilderItem:(id)arg1 ;
-(void)_presentViewControllerForStep:(id)arg0 ;
-(void)_updateEventTypeFromBuilder;
-(void)characteristicEditorDidSelectToChangeCharacteristic:(id)arg0 ;
-(void)viewController:(id)arg0 didCancelStepWithIdentifier:(id)arg1 ;
-(void)viewController:(id)arg0 didFinishStepWithIdentifier:(id)arg1 ;
-(void)viewController:(id)arg0 didSelectEventType:(NSUInteger)arg1 ;


@end


#endif