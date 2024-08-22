// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSURLCOMPLETIONMATCH_H
#define WBSURLCOMPLETIONMATCH_H

@class NSString, SFSearchResult;
@protocol WBSCompletionListItem;

#import <Foundation/Foundation.h>

#import "WBSQuerySuggestion.h"

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem>

 {
    NSString *_userInput;
    SFSearchResult *_sfSearchResultValue;
}


@property (readonly, nonatomic) BOOL containsBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger engagementDestination;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (readonly, nonatomic) NSInteger matchLocation; // ivar: _matchLocation
@property (readonly, nonatomic) BOOL matchLocationIsInURL;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (nonatomic) NSInteger parsecQueryID; // ivar: _parsecQueryID
@property (readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property (readonly, nonatomic) BOOL shouldPreload;
@property (retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *titlePrefix;
@property (readonly, nonatomic, getter=isTopHit) BOOL topHit;


+(NSInteger)matchLocationForString:(id)arg0 inTitle:(id)arg1 ;
+(NSInteger)matchLocationForString:(id)arg0 inURLString:(id)arg1 ;
-(NSInteger)visitCountScore;
-(float)topSitesScore;
-(id)initWithMatchLocation:(NSInteger)arg0 userInput:(id)arg1 forQueryID:(NSInteger)arg2 ;
-(id)matchingStringWithUserTypedPrefix:(id)arg0 ;
-(id)originalURLString;
-(id)title;
-(id)userVisibleURLString;


@end


#endif