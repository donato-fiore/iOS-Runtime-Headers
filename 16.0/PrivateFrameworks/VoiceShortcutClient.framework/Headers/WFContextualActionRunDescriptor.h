// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTEXTUALACTIONRUNDESCRIPTOR_H
#define WFCONTEXTUALACTIONRUNDESCRIPTOR_H



#import "WFWorkflowRunDescriptor.h"
#import "WFContextualAction.h"
#import "WFContextualActionContext.h"

@interface WFContextualActionRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFContextualAction *action; // ivar: _action
@property (readonly, nonatomic) WFContextualActionContext *context; // ivar: _context


+(BOOL)supportsSecureCoding;
-(id)initWithAction:(id)arg0 context:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif