// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMOVIEMOVIESNIPPET_H
#define SAMOVIEMOVIESNIPPET_H



#import "SAUISnippet.h"
#import "SAMovieMovie.h"

@interface SAMovieMovieSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieMovie *movie;
@property (nonatomic) BOOL playTrailer;


+(id)movieSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif