// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKFLOWDATARUNDESCRIPTOR_H
#define WFWORKFLOWDATARUNDESCRIPTOR_H

@class NSData;


#import "WFWorkflowRunDescriptor.h"

@interface WFWorkflowDataRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, copy, nonatomic) NSData *workflowData; // ivar: _workflowData


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkflowData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif