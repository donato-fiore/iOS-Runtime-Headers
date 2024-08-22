// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWREMOTEQUARANTINEREQUEST_H
#define WFWORKFLOWREMOTEQUARANTINEREQUEST_H

@class NSDictionary, NSString;


#import "WFBaseRemoteQuarantineRequest.h"
#import "WFWorkflowRecord.h"
#import "WFWorkflow.h"

@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest

@property (readonly, nonatomic) WFWorkflowRecord *record;
@property (readonly, nonatomic) WFWorkflow *workflow; // ivar: _workflow
@property (copy, nonatomic) NSDictionary *workflowJavaScriptCoreRepresentation; // ivar: _workflowJavaScriptCoreRepresentation
@property (readonly, nonatomic) NSString *workflowName;
@property (readonly, nonatomic) WFWorkflowRecord *workflowRecord; // ivar: _workflowRecord


+(id)JSONKeyPathsByPropertyKey;
-(id)defaultLocalizedDeniedErrorMessage;
-(id)defaultLocalizedDeniedErrorTitle;
-(id)initWithWorkflow:(id)arg0 ;
-(id)initWithWorkflowRecord:(id)arg0 ;
-(id)javaScriptCoreRepresentationWithError:(*id)arg0 ;
-(id)policyFunctionName;
-(id)workflowJavaScriptCoreRepresentationWithError:(*id)arg0 ;


@end


#endif