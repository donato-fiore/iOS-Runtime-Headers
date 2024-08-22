// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMXPCMESSAGEWITHKEYVALUEBASE_H
#define MCMXPCMESSAGEWITHKEYVALUEBASE_H

@class NSString;
@protocol MCMXPCMessage, MCMParametersWithKeyValue, OS_xpc_object;


#import "MCMXPCMessageWithKeyBase.h"
#import "MCMConcreteContainerIdentity.h"

@interface MCMXPCMessageWithKeyValueBase : MCMXPCMessageWithKeyBase <MCMXPCMessage, MCMParametersWithKeyValue>



@property (readonly, nonatomic) NSUInteger command;
@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int disposition;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) *container_client proxy;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *value; // ivar: _value
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif