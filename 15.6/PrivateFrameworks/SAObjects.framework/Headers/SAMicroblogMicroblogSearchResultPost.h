// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMICROBLOGMICROBLOGSEARCHRESULTPOST_H
#define SAMICROBLOGMICROBLOGSEARCHRESULTPOST_H

@class NSDate, NSArray, NSString, NSURL;


#import "SAMicroblogMicroblogSearchResultBase.h"
#import "SADecoratedString.h"
#import "SAUIAppPunchOut.h"
#import "SAMicroblogTwitterPostAuthor.h"

@interface SAMicroblogMicroblogSearchResultPost : SAMicroblogMicroblogSearchResultBase

@property (copy, nonatomic) NSDate *creationTime;
@property (retain, nonatomic) SADecoratedString *decoratedContent;
@property (copy, nonatomic) NSArray *embeddedHashtags;
@property (copy, nonatomic) NSArray *embeddedImages;
@property (copy, nonatomic) NSArray *embeddedLinks;
@property (copy, nonatomic) NSArray *embeddedMentions;
@property (nonatomic) NSInteger favoritesCount;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (retain, nonatomic) SAMicroblogTwitterPostAuthor *retweetAuthor;
@property (nonatomic) NSInteger retweetCount;
@property (copy, nonatomic) NSURL *webAddress;


+(id)microblogSearchResultPost;
+(id)microblogSearchResultPostWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif