// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMSECURITYIDENTITYPREFERENCEDECLARATION_STATUS_H
#define CEMSECURITYIDENTITYPREFERENCEDECLARATION_STATUS_H



#import "CEMPayloadBase.h"

@interface CEMSecurityIdentityPreferenceDeclaration_Status : CEMPayloadBase



+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)build;
+(id)buildRequiredOnly;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif