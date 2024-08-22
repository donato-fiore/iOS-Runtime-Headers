// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFILEPICKERPARAMETER_H
#define WFFILEPICKERPARAMETER_H

@class NSString, NSArray;
@protocol WFWorkflowReferencing;


#import "WFParameter.h"
#import "WFWorkflow.h"

@interface WFFilePickerParameter : WFParameter <WFWorkflowReferencing>



@property (nonatomic) BOOL allowsMultipleSelection; // ivar: _allowsMultipleSelection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL shouldShowFullContextualPath; // ivar: _shouldShowFullContextualPath
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedTypes; // ivar: _supportedTypes
@property (weak, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(BOOL)displaysMultipleValueEditor;
-(BOOL)parameterStateIsValid:(id)arg0 ;
-(BOOL)usesDefaultValue;
-(Class)singleStateClass;
-(id)defaultSerializedRepresentation;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif