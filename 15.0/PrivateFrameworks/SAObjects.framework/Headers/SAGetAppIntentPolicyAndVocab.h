// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAGETAPPINTENTPOLICYANDVOCAB_H
#define SAGETAPPINTENTPOLICYANDVOCAB_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAGetAppIntentPolicyAndVocab : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientIdentifiers;


+(id)getAppIntentPolicyAndVocab;
+(id)getAppIntentPolicyAndVocabWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif