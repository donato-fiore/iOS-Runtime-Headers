// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMOVIEREVIEWSSNIPPET_H
#define SAMOVIEREVIEWSSNIPPET_H



#import "SAUISnippet.h"
#import "SAMovieMovie.h"

@interface SAMovieReviewsSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieMovie *movie;


+(id)reviewsSnippet;
+(id)reviewsSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif