// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINPUTACTION_H
#define WFINPUTACTION_H

@class NSSet;


#import "WFAction.h"

@interface WFInputAction : WFAction

@property (retain, nonatomic) NSSet *inputSurfaces; // ivar: _inputSurfaces


+(id)inputActionForWorkflow:(id)arg0 ;
+(id)serializedParametersForWorkflow:(id)arg0 ;
+(id)serializedParametersFromActionSerializedParameters:(id)arg0 itemClass:(Class)arg1 ;
-(BOOL)isDeletable;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(id)actionSerializedParametersForSelectionOfItemClass:(Class)arg0 ;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;
-(id)minimumSupportedClientVersion;
-(id)noInputBehavior;
-(id)selectedAskForType;
-(id)selectedBehavior;
-(id)selectedInputTypes;
-(void)removedFromWorkflow;
-(void)updateWorkflowState;


@end


#endif