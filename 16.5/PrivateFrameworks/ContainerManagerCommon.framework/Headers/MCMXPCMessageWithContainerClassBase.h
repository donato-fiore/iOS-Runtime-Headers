// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMXPCMESSAGEWITHCONTAINERCLASSBASE_H
#define MCMXPCMESSAGEWITHCONTAINERCLASSBASE_H

@class NSString;
@protocol MCMXPCMessage, MCMParametersWithContainerClass, OS_xpc_object;


#import "MCMXPCMessageBase.h"

@interface MCMXPCMessageWithContainerClassBase : MCMXPCMessageBase <MCMXPCMessage, MCMParametersWithContainerClass>



@property (readonly, nonatomic) NSUInteger command;
@property (readonly, nonatomic) NSUInteger containerClass; // ivar: _containerClass
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