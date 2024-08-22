// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTEXTUALACTIONRUNREQUEST_H
#define WFCONTEXTUALACTIONRUNREQUEST_H

@class WFContentCollection;
@protocol NSSecureCoding;


#import "WFWorkflowRunRequest.h"
#import "WFContextualActionContext.h"

@interface WFContextualActionRunRequest : WFWorkflowRunRequest <NSSecureCoding>



@property (readonly, nonatomic) WFContextualActionContext *actionContext; // ivar: _actionContext
@property (readonly, nonatomic) WFContentCollection *input; // ivar: _input


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDescriptor:(id)arg0 presentationMode:(NSUInteger)arg1 actionContext:(id)arg2 ;
-(id)queueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getInputWithCompletionHandler:(id)arg0 ;


@end


#endif