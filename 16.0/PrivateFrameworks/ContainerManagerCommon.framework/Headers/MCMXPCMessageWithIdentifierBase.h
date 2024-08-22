// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGEWITHIDENTIFIERBASE_H
#define MCMXPCMESSAGEWITHIDENTIFIERBASE_H

@class NSString;
@protocol MCMXPCMessage, MCMParametersWithIdentifier, OS_xpc_object;


#import "MCMXPCMessageBase.h"

@interface MCMXPCMessageWithIdentifierBase : MCMXPCMessageBase <MCMXPCMessage, MCMParametersWithIdentifier>



@property (readonly, nonatomic) NSUInteger command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int disposition;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) *container_client proxy;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;


@end


#endif