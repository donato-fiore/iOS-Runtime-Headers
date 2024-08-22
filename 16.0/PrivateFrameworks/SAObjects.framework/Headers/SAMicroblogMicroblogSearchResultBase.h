// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMICROBLOGMICROBLOGSEARCHRESULTBASE_H
#define SAMICROBLOGMICROBLOGSEARCHRESULTBASE_H



#import "SADomainObject.h"
#import "SAMicroblogTwitterPostAuthor.h"

@interface SAMicroblogMicroblogSearchResultBase : SADomainObject

@property (retain, nonatomic) SAMicroblogTwitterPostAuthor *author;


+(id)microblogSearchResultBase;
+(id)microblogSearchResultBaseWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif