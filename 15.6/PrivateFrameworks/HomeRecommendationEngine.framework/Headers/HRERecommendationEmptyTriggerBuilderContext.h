// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRERECOMMENDATIONEMPTYTRIGGERBUILDERCONTEXT_H
#define HRERECOMMENDATIONEMPTYTRIGGERBUILDERCONTEXT_H

@class NSString, HFItem, NSSet;
@protocol HFTriggerBuilderContextProviding;

#import <Foundation/Foundation.h>


@interface HRERecommendationEmptyTriggerBuilderContext : NSObject <HFTriggerBuilderContextProviding>



@property (readonly, copy, nonatomic) NSString *actionEditorInstructionsDescription; // ivar: actionEditorInstructionsDescription
@property (readonly, nonatomic) BOOL allowDurationEditing; // ivar: allowDurationEditing
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *deleteConfirmationAlertMessage; // ivar: deleteConfirmationAlertMessage
@property (readonly, copy, nonatomic) NSString *deleteConfirmationAlertTitle; // ivar: deleteConfirmationAlertTitle
@property (readonly, copy, nonatomic) NSString *deleteInstructionDescription; // ivar: deleteInstructionDescription
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *doneButtonTitle; // ivar: doneButtonTitle
@property (readonly, nonatomic) BOOL filtersEmptyActionSets; // ivar: filtersEmptyActionSets
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *serviceActionsInstructionDescription; // ivar: serviceActionsInstructionDescription
@property (readonly, nonatomic) BOOL showActionSetsInstructions; // ivar: showActionSetsInstructions
@property (readonly, nonatomic) BOOL showConditionTriggers; // ivar: showConditionTriggers
@property (readonly, nonatomic) BOOL showTriggerDeleteButton; // ivar: showTriggerDeleteButton
@property (readonly, nonatomic) BOOL showTriggerEnableSwitch; // ivar: showTriggerEnableSwitch
@property (readonly, nonatomic) BOOL showTriggerSummary; // ivar: showTriggerSummary
@property (readonly, nonatomic) HFItem *suggestionItem; // ivar: suggestionItem
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *testActionsInstructionDescription; // ivar: testActionsInstructionDescription
@property (readonly, copy, nonatomic) NSString *triggerContextAwareTitle; // ivar: triggerContextAwareTitle
@property (readonly, copy, nonatomic) NSSet *unsupportedTriggers; // ivar: unsupportedTriggers


-(id)init;


@end


#endif