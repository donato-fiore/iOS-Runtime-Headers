// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMXPCMESSAGEWITHCONCRETECONTAINERSARRAYBASE_H
#define MCMXPCMESSAGEWITHCONCRETECONTAINERSARRAYBASE_H

@class NSArray, NSString;
@protocol MCMXPCMessage, MCMParametersWithConcreteContainersArray, OS_xpc_object;


#import "MCMXPCMessageBase.h"

@interface MCMXPCMessageWithConcreteContainersArrayBase : MCMXPCMessageBase <MCMXPCMessage, MCMParametersWithConcreteContainersArray>



@property (readonly, nonatomic) NSUInteger command;
@property (readonly, nonatomic) NSArray *concreteContainerIdentities; // ivar: _concreteContainerIdentities
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