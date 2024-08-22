// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKFLOWREMOTEQUARANTINEREQUEST_H
#define WFWORKFLOWREMOTEQUARANTINEREQUEST_H

@class NSDictionary;


#import "WFBaseRemoteQuarantineRequest.h"
#import "WFWorkflowFile.h"
#import "WFWorkflowRecord.h"

@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest

@property (readonly, nonatomic) WFWorkflowFile *workflowFile; // ivar: _workflowFile
@property (copy, nonatomic) NSDictionary *workflowJavaScriptCoreRepresentation; // ivar: _workflowJavaScriptCoreRepresentation
@property (readonly, nonatomic) WFWorkflowRecord *workflowRecord; // ivar: _workflowRecord


+(id)JSONKeyPathsByPropertyKey;
-(id)defaultLocalizedDeniedErrorMessage;
-(id)defaultLocalizedDeniedErrorTitle;
-(id)initWithWorkflowFile:(id)arg0 ;
-(id)initWithWorkflowRecord:(id)arg0 ;
-(id)javaScriptCoreRepresentationWithError:(*id)arg0 ;
-(id)policyFunctionName;
-(id)workflowJavaScriptCoreRepresentationWithError:(*id)arg0 ;
-(id)workflowName;


@end


#endif