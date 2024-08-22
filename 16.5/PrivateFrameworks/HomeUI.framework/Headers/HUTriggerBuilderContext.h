// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERBUILDERCONTEXT_H
#define HUTRIGGERBUILDERCONTEXT_H

@class NSString, HFItem, NSSet;
@protocol HFTriggerBuilderContextProviding;

#import <Foundation/Foundation.h>


@interface HUTriggerBuilderContext : NSObject <HFTriggerBuilderContextProviding>



@property (copy, nonatomic) NSString *actionEditorInstructionsDescription; // ivar: _actionEditorInstructionsDescription
@property (nonatomic) BOOL allowConvertToShortcut; // ivar: _allowConvertToShortcut
@property (nonatomic) BOOL allowDurationEditing; // ivar: _allowDurationEditing
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *deleteConfirmationAlertMessage; // ivar: _deleteConfirmationAlertMessage
@property (copy, nonatomic) NSString *deleteConfirmationAlertTitle; // ivar: _deleteConfirmationAlertTitle
@property (copy, nonatomic) NSString *deleteInstructionDescription; // ivar: _deleteInstructionDescription
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *doneButtonTitle; // ivar: _doneButtonTitle
@property (nonatomic) BOOL filtersEmptyActionSets; // ivar: _filtersEmptyActionSets
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *serviceActionsInstructionDescription; // ivar: _serviceActionsInstructionDescription
@property (nonatomic) BOOL showActionSetsInstructions; // ivar: _showActionSetsInstructions
@property (nonatomic) BOOL showConditionTriggers; // ivar: _showConditionTriggers
@property (nonatomic) BOOL showTriggerDeleteButton; // ivar: _showTriggerDeleteButton
@property (nonatomic) BOOL showTriggerEnableSwitch; // ivar: _showTriggerEnableSwitch
@property (nonatomic) BOOL showTriggerSummary; // ivar: _showTriggerSummary
@property (retain, nonatomic) HFItem *suggestionItem; // ivar: _suggestionItem
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *testActionsInstructionDescription; // ivar: _testActionsInstructionDescription
@property (copy, nonatomic) NSString *triggerContextAwareTitle; // ivar: _triggerContextAwareTitle
@property (copy, nonatomic) NSSet *unsupportedTriggers; // ivar: _unsupportedTriggers


-(id)init;
-(id)initWithTriggerBuilderContext:(id)arg0 ;


@end


#endif