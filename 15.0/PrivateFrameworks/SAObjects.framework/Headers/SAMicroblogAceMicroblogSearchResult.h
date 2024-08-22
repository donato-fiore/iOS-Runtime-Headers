// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMICROBLOGACEMICROBLOGSEARCHRESULT_H
#define SAMICROBLOGACEMICROBLOGSEARCHRESULT_H

@class NSString, NSArray, NSURL;


#import "SADomainObject.h"
#import "SAMicroblogTwitterPostAuthor.h"
#import "SAUIAppPunchOut.h"
#import "SADecoratedString.h"

@interface SAMicroblogAceMicroblogSearchResult : SADomainObject

@property (retain, nonatomic) SAMicroblogTwitterPostAuthor *globalAuthor;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSArray *resultNews;
@property (copy, nonatomic) NSArray *resultPosts;
@property (copy, nonatomic) NSArray *resultUsers;
@property (retain, nonatomic) SADecoratedString *summary;
@property (copy, nonatomic) NSURL *webAddress;


+(id)aceMicroblogSearchResult;
+(id)aceMicroblogSearchResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif