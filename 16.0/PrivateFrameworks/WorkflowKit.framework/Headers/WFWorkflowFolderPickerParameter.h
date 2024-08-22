// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKFLOWFOLDERPICKERPARAMETER_H
#define WFWORKFLOWFOLDERPICKERPARAMETER_H

@class NSArray;


#import "WFEnumerationParameter.h"

@interface WFWorkflowFolderPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}




-(Class)singleStateClass;
-(id)accessoryIconForPossibleState:(id)arg0 ;
-(id)accessoryImageForPossibleState:(id)arg0 ;
-(id)defaultSerializedRepresentation;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(id)possibleStates;


@end


#endif