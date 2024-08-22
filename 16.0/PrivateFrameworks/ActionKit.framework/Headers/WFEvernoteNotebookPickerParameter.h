// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEVERNOTENOTEBOOKPICKERPARAMETER_H
#define WFEVERNOTENOTEBOOKPICKERPARAMETER_H

@class WFEnumerationParameter, NSArray;


#import "WFEvernoteAccessResource.h"

@interface WFEvernoteNotebookPickerParameter : WFEnumerationParameter

@property (retain, nonatomic) WFEvernoteAccessResource *evernoteAccessResource; // ivar: _evernoteAccessResource
@property (readonly, nonatomic) NSArray *possibleStates; // ivar: _possibleStates


+(id)referencedActionResourceClasses;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg0 ;
-(void)setActionResources:(id)arg0 ;
-(void)updateNotebooks;
-(void)wasAddedToWorkflow;


@end


#endif