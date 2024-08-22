// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMICROBLOGSOCIALCREDENTIAL_H
#define SAMICROBLOGSOCIALCREDENTIAL_H

@class NSString;
@protocol SABackgroundContextObject;


#import "AceObject.h"

@interface SAMicroblogSocialCredential : AceObject <SABackgroundContextObject>



@property (copy, nonatomic) NSString *accessToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *personalizationPermission;
@property (copy, nonatomic) NSString *socialNetwork;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tokenSecret;


+(id)socialCredential;
+(id)socialCredentialWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif