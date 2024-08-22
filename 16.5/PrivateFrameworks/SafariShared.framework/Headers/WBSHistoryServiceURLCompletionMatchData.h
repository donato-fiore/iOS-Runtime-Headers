// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYSERVICEURLCOMPLETIONMATCHDATA_H
#define WBSHISTORYSERVICEURLCOMPLETIONMATCHDATA_H

@class NSArray, NSString;
@protocol WBSURLCompletionMatchData;

#import <Foundation/Foundation.h>


@interface WBSHistoryServiceURLCompletionMatchData : NSObject <WBSURLCompletionMatchData>

 {
    unique_ptr<SafariShared::_HistoryStreamedMatchData, std::default_delete<SafariShared::_HistoryStreamedMatchData>> _streamData;
    NSArray *_autocompleteTriggersAsStringArray;
}


@property (readonly, nonatomic) BOOL containsBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *entries; // ivar: _entries
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL lastVisitWasFailure;
@property (nonatomic) CGFloat lastVisitedTimeInterval;
@property (readonly, nonatomic) NSString *originalURLString;
@property (readonly, nonatomic) BOOL shouldPreload;
@property (readonly, nonatomic) *_HistoryStreamedMatchData streamData;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger visitCount;
@property (nonatomic) NSInteger visitCountScore;
@property (readonly, nonatomic) BOOL visitWasClientError;


-(BOOL)matchesAutocompleteTrigger:(id)arg0 isStrengthened:(BOOL)arg1 ;
-(NSInteger)visitCountScoreForURLStringAtIndex:(NSUInteger)arg0 ;
-(float)topSitesScoreForPageTitleAtTime:(CGFloat)arg0 ;
-(float)topSitesScoreForURLStringAtIndex:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(id)init;
-(id)initWithLastVisitWasFailure:(BOOL)arg0 visitWasFromThisDevice:(BOOL)arg1 visitWasClientError:(BOOL)arg2 ;
-(id)initWithStreamData:(*void)arg0 entries:(id)arg1 ;
-(id)matchDataByMergingWithMatchData:(id)arg0 ;
-(id)pageTitleAtIndex:(NSUInteger)arg0 ;
-(id)pageTitleForUserVisibleURLStringAtIndex:(NSUInteger)arg0 ;
-(id)userVisibleURLStringAtIndex:(NSUInteger)arg0 ;
-(id)userVisibleURLStringForPageTitleAtIndex:(NSUInteger)arg0 ;
-(void)enumeratePageTitlesUsingBlock:(id)arg0 ;
-(void)enumerateUserVisibleURLsUsingBlock:(id)arg0 ;
-(void)setAutocompleteTriggers:(*void)arg0 length:(NSUInteger)arg1 ;


@end


#endif