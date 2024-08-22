// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMOVIEV2THEATERLISTSNIPPET_H
#define SAMOVIEV2THEATERLISTSNIPPET_H

@class NSArray;


#import "SAUISnippet.h"

@interface SAMovieV2TheaterListSnippet : SAUISnippet

@property (copy, nonatomic) NSArray *theaterListCells;


+(id)theaterListSnippet;
+(id)theaterListSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif