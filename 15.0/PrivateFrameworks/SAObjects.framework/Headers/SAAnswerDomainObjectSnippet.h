// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAANSWERDOMAINOBJECTSNIPPET_H
#define SAANSWERDOMAINOBJECTSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"
#import "SAUIAppPunchOut.h"

@interface SAAnswerDomainObjectSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *answerPunchOut;
@property (copy, nonatomic) NSArray *answers;


+(id)domainObjectSnippet;
+(id)domainObjectSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif