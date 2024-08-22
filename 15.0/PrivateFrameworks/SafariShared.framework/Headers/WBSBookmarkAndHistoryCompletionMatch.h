// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSBOOKMARKANDHISTORYCOMPLETIONMATCH_H
#define WBSBOOKMARKANDHISTORYCOMPLETIONMATCH_H

@protocol WBSURLCompletionMatchData;


#import "WBSURLCompletionMatch.h"

@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch {
    RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> _match;
}


@property (readonly, nonatomic) NSObject<WBSURLCompletionMatchData> *data;
@property (readonly, nonatomic) float weight;


-(BOOL)containsBookmark;
-(NSInteger)visitCountScore;
-(float)topSitesScore;
-(id)initWithBookmarkAndHistoryCompletionMatch:(*void)arg0 userInput:(id)arg1 forQueryID:(NSInteger)arg2 ;
-(id)originalURLString;
-(id)parsecDomainIdentifier;
-(id)title;
-(id)userVisibleURLString;


@end


#endif