// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMOVIEV2REVIEWLISTSNIPPET_H
#define SAMOVIEV2REVIEWLISTSNIPPET_H

@class NSString;


#import "SAUISnippet.h"
#import "SALocalSearchReviewList.h"

@interface SAMovieV2ReviewListSnippet : SAUISnippet

@property (copy, nonatomic) NSString *movieName;
@property (retain, nonatomic) SALocalSearchReviewList *reviewList;


+(id)reviewListSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif