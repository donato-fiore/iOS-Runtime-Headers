// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMOVIEV2MOVIELISTSNIPPET_H
#define SAMOVIEV2MOVIELISTSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"
#import "SALocalSearchBusiness2.h"

@interface SAMovieV2MovieListSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *movieListCells;
@property (retain, nonatomic) SALocalSearchBusiness2 *theater;


+(id)movieListSnippet;
+(id)movieListSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif