// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMOVIEV2THEATERSHOWTIMELISTSNIPPET_H
#define SAMOVIEV2THEATERSHOWTIMELISTSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"
#import "SAMovieV2MovieDetailSnippet.h"

@interface SAMovieV2TheaterShowtimeListSnippet : SAUISnippet

@property (retain, nonatomic) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
@property (copy, nonatomic) NSArray *theaterShowtimeListCells;


+(id)theaterShowtimeListSnippet;
+(id)theaterShowtimeListSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif