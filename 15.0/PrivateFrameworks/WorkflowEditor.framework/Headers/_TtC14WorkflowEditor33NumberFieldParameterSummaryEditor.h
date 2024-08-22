// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14WORKFLOWEDITOR33NUMBERFIELDPARAMETERSUMMARYEDITOR_H
#define _TTC14WORKFLOWEDITOR33NUMBERFIELDPARAMETERSUMMARYEDITOR_H

@protocol WFVariableProvider;


#import "WFModuleSummaryEditor.h"

@interface _TtC14WorkflowEditor33NumberFieldParameterSummaryEditor : WFModuleSummaryEditor {
    ? autocompleteDataSource;
    ? hasStagedChanges;
    ? isPickingActionOutput;
    ? autocompleteCoordinator;
}


@property (nonatomic, retain) NSObject<WFVariableProvider> *variableProvider;


+(NSUInteger)variableResultTypeForParameter:(id)arg0 ;
-(BOOL)textEntryShouldChangeText:(id)arg0 ;
-(id)initWithParameter:(id)arg0 initialState:(id)arg1 initialArrayState:(id)arg2 arrayIndex:(NSInteger)arg3 processing:(BOOL)arg4 ;
-(id)stateByReplacingVariableFromCurrentState:(id)arg0 withVariable:(id)arg1 ;
-(void)beginEditingSlotWithIdentifier:(id)arg0 presentationAnchor:(id)arg1 ;
-(void)cancelEditingWithCompletionHandler:(id)arg0 ;
-(void)stageState:(id)arg0 ;
-(void)textEntryDidFinish;
-(void)textEntryTextDidChange:(id)arg0 ;
-(void)textEntryWillBegin:(id)arg0 allowMultipleLines:(*BOOL)arg1 ;


@end


#endif