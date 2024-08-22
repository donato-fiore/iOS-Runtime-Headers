// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPPRIVACYPOLICY_H
#define SAINTENTGROUPPRIVACYPOLICY_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAIntentGroupPrivacyPolicy : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *privacyCategory;
@property (copy, nonatomic) NSString *redactionTarget;
@property (readonly) Class superclass;


+(id)privacyPolicy;
+(id)privacyPolicyWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif