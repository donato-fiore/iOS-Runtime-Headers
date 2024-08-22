// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASVPOLICYACTION_H
#define SASVPOLICYACTION_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SASVPolicyActionNode.h"

@interface SASVPolicyAction : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SASVPolicyActionNode *policyActionRoot;
@property (readonly) Class superclass;


+(id)policyAction;
+(id)policyActionWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif