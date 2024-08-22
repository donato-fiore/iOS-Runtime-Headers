// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFINPUTACTION_H
#define WFINPUTACTION_H

@class NSSet;


#import "WFAction.h"
#import "WFWorkflow.h"

@interface WFInputAction : WFAction

@property (retain, nonatomic) NSSet *inputSurfaces; // ivar: _inputSurfaces
@property (nonatomic) WFWorkflow *workflow; // ivar: _workflow


+(BOOL)shouldShowInputActionForWorkflow:(id)arg0 ;
+(id)inputActionForWorkflow:(id)arg0 ;
-(BOOL)isDeletable;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)minimumSupportedClientVersion;
-(id)noInputBehavior;
-(id)selectedInputTypes;
-(void)removedFromWorkflow;
-(void)updateWorkflowState;


@end


#endif