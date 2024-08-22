// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMICROBLOGTWITTERPOSTAUTHOR_H
#define SAMICROBLOGTWITTERPOSTAUTHOR_H

@class NSString, NSURL, NSNumber;


#import "SADomainObject.h"

@interface SAMicroblogTwitterPostAuthor : SADomainObject

@property (nonatomic) NSInteger followersCount;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSURL *profileImageUrl;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSNumber *userId;
@property (nonatomic) BOOL verified;


+(id)twitterPostAuthor;
+(id)twitterPostAuthorWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif