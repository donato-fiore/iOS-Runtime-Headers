// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC14WORKFLOWEDITOR25PARAMETERVALUEPICKERMODEL_H
#define _TTC14WORKFLOWEDITOR25PARAMETERVALUEPICKERMODEL_H

@protocol WFParameterEventObserver;

#import <Foundation/Foundation.h>


@interface _TtC14WorkflowEditor25ParameterValuePickerModel : NSObject <WFParameterEventObserver>

 {
    ? _results;
    ? _prompt;
    ? _selectedState;
    ? userInput;
    ? parameter;
    ? allowsMultipleSelection;
    ? allowedVariableTypes;
    ? variableProvider;
    ? variableUIDelegate;
    ? onPick;
    ? onSelectMagicVariable;
    ? onCancel;
    ? onClear;
    ? defaultCollection;
    ? cachedValues;
    ? reloadDebouncer;
}




-(id)init;
-(void)_reload;
-(void)parameterAttributesDidChange:(id)arg0 ;


@end


#endif