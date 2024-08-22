// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONDITIONALSUBJECTPARAMETER_H
#define WFCONDITIONALSUBJECTPARAMETER_H



#import "WFParameter.h"

@interface WFConditionalSubjectParameter : WFParameter



-(BOOL)allowsMultipleValues;
-(Class)stateClass;
-(id)defaultSupportedVariableTypes;
-(id)importQuestionBehavior;


@end


#endif