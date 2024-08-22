// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMICROBLOGGETTWITTERCREDENTIAL_H
#define SAMICROBLOGGETTWITTERCREDENTIAL_H

@class NSString;


#import "SAMicroblogGetSocialCredential.h"

@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential

@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *consumerSecret;


+(id)getTwitterCredential;
+(id)getTwitterCredentialWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif