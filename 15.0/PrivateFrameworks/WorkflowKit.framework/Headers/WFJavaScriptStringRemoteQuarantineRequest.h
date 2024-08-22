// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFJAVASCRIPTSTRINGREMOTEQUARANTINEREQUEST_H
#define WFJAVASCRIPTSTRINGREMOTEQUARANTINEREQUEST_H

@class NSArray, NSDictionary, NSString, NSURL;


#import "WFBaseRemoteQuarantineRequest.h"

@interface WFJavaScriptStringRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest

@property (copy, nonatomic) NSArray *actionList; // ivar: _actionList
@property (readonly, nonatomic) NSDictionary *preRuntimeJavaScriptSerializedRepresentation; // ivar: _preRuntimeJavaScriptSerializedRepresentation
@property (readonly, nonatomic) NSString *preRuntimeJavaScriptString; // ivar: _preRuntimeJavaScriptString
@property (copy, nonatomic) NSString *runtimeJavaScriptString; // ivar: _runtimeJavaScriptString
@property (nonatomic) NSUInteger runtimeType; // ivar: _runtimeType
@property (retain, nonatomic) NSURL *targetURL; // ivar: _targetURL


+(id)JSONKeyPathsByPropertyKey;
-(id)defaultLocalizedDeniedErrorMessage;
-(id)defaultLocalizedDeniedErrorTitle;
-(id)defaultLocalizedPromptMessage;
-(id)defaultLocalizedPromptTitle;
-(id)initWithWorkflow:(id)arg0 runtimeType:(NSUInteger)arg1 targetURL:(id)arg2 preRuntimeVariableString:(id)arg3 runtimeString:(id)arg4 ;
-(id)policyFunctionName;


@end


#endif