// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMICROBLOGGETSOCIALCREDENTIAL_H
#define SAMICROBLOGGETSOCIALCREDENTIAL_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *explicitUserPermission;
@property (copy, nonatomic) NSString *socialNetwork;


+(id)getSocialCredential;
+(id)getSocialCredentialWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif