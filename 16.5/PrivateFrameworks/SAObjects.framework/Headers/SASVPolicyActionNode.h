// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASVPOLICYACTIONNODE_H
#define SASVPOLICYACTIONNODE_H

@class NSArray, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SASVSpeechMetadata.h"

@interface SASVPolicyActionNode : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *children;
@property (copy, nonatomic) NSString *confirmationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SASVSpeechMetadata *speechMetadata;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type;


+(id)policyActionNode;
+(id)policyActionNodeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif