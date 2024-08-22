// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSHISTORYURLCOMPLETIONMATCHDATA_H
#define WBSHISTORYURLCOMPLETIONMATCHDATA_H

@class NSString;
@protocol WBSURLCompletionMatchData;

#import <Foundation/Foundation.h>


@interface WBSHistoryURLCompletionMatchData : NSObject <WBSURLCompletionMatchData>

 {
    RefPtr<SafariShared::HistoryURLCompletionItem, WTF::RawPtrTraits<SafariShared::HistoryURLCompletionItem>, WTF::DefaultRefDerefTraits<SafariShared::HistoryURLCompletionItem>> _item;
}


@property (readonly, nonatomic) BOOL containsBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL lastVisitWasFailure;
@property (readonly, nonatomic) CGFloat lastVisitedTimeInterval;
@property (readonly, nonatomic) NSString *originalURLString;
@property (readonly, nonatomic) BOOL shouldPreload;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger visitCount;
@property (readonly, nonatomic) NSInteger visitCountScore;
@property (readonly, nonatomic) BOOL visitWasClientError;


-(BOOL)matchesAutocompleteTrigger:(id)arg0 isStrengthened:(BOOL)arg1 ;
-(NSInteger)visitCountScoreForURLStringAtIndex:(NSUInteger)arg0 ;
-(float)topSitesScoreForPageTitleAtTime:(CGFloat)arg0 ;
-(float)topSitesScoreForURLStringAtIndex:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(id)init;
-(id)initWithCompletionItem:(*void)arg0 ;
-(id)matchDataByMergingWithMatchData:(id)arg0 ;
-(id)pageTitleAtIndex:(NSUInteger)arg0 ;
-(id)pageTitleForUserVisibleURLStringAtIndex:(NSUInteger)arg0 ;
-(id)userVisibleURLStringAtIndex:(NSUInteger)arg0 ;
-(id)userVisibleURLStringForPageTitleAtIndex:(NSUInteger)arg0 ;
-(void)enumeratePageTitlesUsingBlock:(id)arg0 ;
-(void)enumerateUserVisibleURLsUsingBlock:(id)arg0 ;


@end


#endif