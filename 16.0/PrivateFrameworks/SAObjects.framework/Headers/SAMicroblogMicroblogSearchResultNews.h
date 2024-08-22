// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMICROBLOGMICROBLOGSEARCHRESULTNEWS_H
#define SAMICROBLOGMICROBLOGSEARCHRESULTNEWS_H

@class NSURL, NSString;


#import "SAMicroblogMicroblogSearchResultPost.h"

@interface SAMicroblogMicroblogSearchResultNews : SAMicroblogMicroblogSearchResultPost

@property (copy, nonatomic) NSURL *articleURL;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *title;


+(id)microblogSearchResultNews;
+(id)microblogSearchResultNewsWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif