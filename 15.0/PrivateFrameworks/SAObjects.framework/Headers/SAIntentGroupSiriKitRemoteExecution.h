// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPSIRIKITREMOTEEXECUTION_H
#define SAINTENTGROUPSIRIKITREMOTEEXECUTION_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAIntentGroupSiriKitRemoteExecution : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *executionDeviceAssistantId;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *invocationDeviceAssistantId;
@property (copy, nonatomic) NSString *personalDomainAuthenticationMode;
@property (copy, nonatomic) NSString *runLocation;
@property (readonly) Class superclass;


+(id)siriKitRemoteExecution;
+(id)siriKitRemoteExecutionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif