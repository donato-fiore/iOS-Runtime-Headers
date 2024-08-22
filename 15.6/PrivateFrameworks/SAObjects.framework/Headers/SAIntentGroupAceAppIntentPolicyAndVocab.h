// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPACEAPPINTENTPOLICYANDVOCAB_H
#define SAINTENTGROUPACEAPPINTENTPOLICYANDVOCAB_H



#import "SADomainObject.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupAceAppIntentPolicyAndVocab : SADomainObject

@property (retain, nonatomic) SAIntentGroupProtobufMessage *aceAppBundleInfo;


+(id)aceAppIntentPolicyAndVocab;
+(id)aceAppIntentPolicyAndVocabWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif