// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHPARSECANALYTICSSESSION_H
#define PXSEARCHPARSECANALYTICSSESSION_H

@class SFStartLocalSearchFeedback, PARSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXSearchParsecAnalyticsSession : NSObject

@property (nonatomic) NSInteger currentQueryId; // ivar: _currentQueryId
@property (retain, nonatomic) SFStartLocalSearchFeedback *currentStartSearchFeedback; // ivar: _currentStartSearchFeedback
@property (retain, nonatomic) SFStartLocalSearchFeedback *currentStartZeroKeywordLoadFeedback; // ivar: _currentStartZeroKeywordLoadFeedback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reportingQueue; // ivar: _reportingQueue
@property (readonly, nonatomic) PARSession *session; // ivar: _session


+(id)sharedSession;
-(id)init;
-(void)_reportFeedback:(id)arg0 ;
-(void)_reportPhotosAppLaunchedOrEnteredForegroundEventWithFeedback:(id)arg0 ;
-(void)reportPhotosAppEnteredBackground;
-(void)reportPhotosAppLaunchedOrEnteredForegroundWithPreviousSearchText:(id)arg0 previousSearchTokens:(id)arg1 ;
-(void)reportPhotosAppLaunchedOrEnteredForegroundWithSpotlightSearchActivity;
-(void)reportPhotosAppQuit;
-(void)reportRecentSearchSelectedWithSearchText:(id)arg0 searchTokens:(id)arg1 ;
-(void)reportSearchFieldCancelButtonSelected;
-(void)reportSearchFieldContentChanged:(id)arg0 searchTokens:(id)arg1 ;
-(void)reportSearchFieldContentCleared;
-(void)reportSearchQueryExecutionCompleted;
-(void)reportSearchResultSelected:(id)arg0 ;
-(void)reportSearchSuggestionSelected:(id)arg0 ;
-(void)reportSearchSuggestions:(id)arg0 searchResultSections:(id)arg1 visibleIndexPaths:(id)arg2 reportVisibleResultChangesOnly:(BOOL)arg3 ;
-(void)reportSearchTabDeselected;
-(void)reportSearchTabSelected;
-(void)reportShowMoreResultsSelected:(BOOL)arg0 searchResultsSection:(id)arg1 ;
-(void)reportZeroKeywordLoadBegan;
-(void)reportZeroKeywordLoadFinished;
-(void)reportZeroKeywordSections:(id)arg0 visibleIndexPaths:(id)arg1 reportVisibleResultChangesOnly:(BOOL)arg2 ;
-(void)reportZeroKeywordSelected:(id)arg0 ;


@end


#endif