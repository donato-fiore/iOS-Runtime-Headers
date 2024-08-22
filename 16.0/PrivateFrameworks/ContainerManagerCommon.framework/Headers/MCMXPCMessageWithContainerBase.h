// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGEWITHCONTAINERBASE_H
#define MCMXPCMESSAGEWITHCONTAINERBASE_H

@class NSString;
@protocol MCMXPCMessage, MCMParametersWithContainer, OS_xpc_object;


#import "MCMXPCMessageBase.h"
#import "MCMContainerIdentity.h"

@interface MCMXPCMessageWithContainerBase : MCMXPCMessageBase <MCMXPCMessage, MCMParametersWithContainer>



@property (readonly, nonatomic) NSUInteger command;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity; // ivar: _containerIdentity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int disposition;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) *container_client proxy;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif