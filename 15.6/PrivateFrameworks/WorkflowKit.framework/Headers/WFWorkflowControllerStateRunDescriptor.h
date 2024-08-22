// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWORKFLOWCONTROLLERSTATERUNDESCRIPTOR_H
#define WFWORKFLOWCONTROLLERSTATERUNDESCRIPTOR_H

@class WFWorkflowRunDescriptor, NSSet;
@protocol NSSecureCoding;


#import "WFWorkflowControllerState.h"

@interface WFWorkflowControllerStateRunDescriptor : WFWorkflowRunDescriptor <NSSecureCoding>



@property (readonly, nonatomic) NSSet *extensionResourceClasses; // ivar: _extensionResourceClasses
@property (readonly, nonatomic) WFWorkflowControllerState *state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(id)arg0 ;
-(id)initWithState:(id)arg0 extensionResourceClasses:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif