// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFLINKACTIONRUNDESCRIPTOR_H
#define WFLINKACTIONRUNDESCRIPTOR_H

@class LNAction, LNFullyQualifiedActionIdentifier, LNActionMetadata;


#import "WFWorkflowRunDescriptor.h"

@interface WFLinkActionRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) LNAction *action; // ivar: _action
@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) LNActionMetadata *metadata; // ivar: _metadata


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 action:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif