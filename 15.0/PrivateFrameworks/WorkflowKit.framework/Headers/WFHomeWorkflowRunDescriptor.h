// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFHOMEWORKFLOWRUNDESCRIPTOR_H
#define WFHOMEWORKFLOWRUNDESCRIPTOR_H

@class WFWorkflowRunDescriptor;


#import "WFHomeWorkflow.h"

@interface WFHomeWorkflowRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFHomeWorkflow *homeWorkflow; // ivar: _homeWorkflow


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeWorkflow:(id)arg0 ;
-(id)workflowRepresentationWithDatabase:(id)arg0 environment:(NSInteger)arg1 error:(*id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif