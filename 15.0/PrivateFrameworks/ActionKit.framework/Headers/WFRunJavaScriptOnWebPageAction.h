// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFRUNJAVASCRIPTONWEBPAGEACTION_H
#define WFRUNJAVASCRIPTONWEBPAGEACTION_H

@class WFAction, NSString;
@protocol WFRemoteQuarantinePolicyEvaluatorDelegate;



@interface WFRunJavaScriptOnWebPageAction : WFAction <WFRemoteQuarantinePolicyEvaluatorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_getErrorFromScript:(id)arg0 ;
-(id)invalidJavaScriptErrorWithSyntaxErrorString:(id)arg0 ;
-(id)missingCompletionError;
-(id)name;
-(id)noWebPageProvidedError;
-(id)parameterSummary;
-(id)smartPromptWithContentDescription:(id)arg0 contentDestination:(id)arg1 workflowName:(id)arg2 ;
-(id)userInterfaceToPresentAlertForEvaluator:(id)arg0 ;
-(void)evaluateQuarantineWithJavaScript:(id)arg0 webPageURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)getWebPageFromInput:(id)arg0 completionHandler:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif