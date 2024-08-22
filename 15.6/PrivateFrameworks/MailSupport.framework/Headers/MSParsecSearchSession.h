// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPARSECSEARCHSESSION_H
#define MSPARSECSEARCHSESSION_H

@class NSMutableArray, SFStartLocalSearchFeedback, NSString, PARSession;
@protocol EFLoggable;

#import <Foundation/Foundation.h>

#import "MSParsecSearchIndexState.h"

@interface MSParsecSearchSession : NSObject <EFLoggable>



@property (readonly, nonatomic) NSMutableArray *currentFeedback; // ivar: _currentFeedback
@property (retain, nonatomic) SFStartLocalSearchFeedback *currentLocalSearchFeedback; // ivar: _currentLocalSearchFeedback
@property (nonatomic) NSInteger currentQueryID; // ivar: _currentQueryID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) MSParsecSearchIndexState *indexState; // ivar: _indexState
@property (readonly, nonatomic) PARSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)log;
+(id)sharedSession;
-(id)_categoryOrder;
-(id)_sectionFeedbackForBundleIdentifier:(id)arg0 results:(id)arg1 ;
-(id)init;
-(void)reportDidGoToCommittedSearch;
-(void)reportFeedback:(id)arg0 ;
-(void)reportLocalSearchEnded;
-(void)reportMessageListResultEngaged:(id)arg0 engagementAction:(NSInteger)arg1 ;
-(void)reportMessageListResultsFetched:(id)arg0 isFinished:(BOOL)arg1 ;
-(void)reportMessageListResultsVisible:(id)arg0 ;
-(void)reportQueryClearedEvent:(NSInteger)arg0 ;
-(void)reportQueryWithRestrictedComponents:(id)arg0 triggerEvent:(NSUInteger)arg1 searchType:(NSUInteger)arg2 hasCurrentMailboxScope:(BOOL)arg3 languages:(id)arg4 ;
-(void)reportQueryWithRestrictedComponents:(id)arg0 triggerEvent:(NSUInteger)arg1 searchType:(NSUInteger)arg2 hasCurrentMailboxScope:(BOOL)arg3 searchViewAppeared:(BOOL)arg4 languages:(id)arg5 ;
-(void)reportSearchEndedEvent:(NSInteger)arg0 ;
-(void)reportSearchViewAppeared:(BOOL)arg0 currentMailboxScope:(BOOL)arg1 languages:(id)arg2 ;
-(void)reportSuggestionSelected:(id)arg0 ;
-(void)reportSuggestionsFetched:(id)arg0 ;
-(void)reportSuggestionsVisible:(id)arg0 ;
-(void)reportTopHitSelected:(id)arg0 ;
-(void)sendLogsToSettings;


@end


#endif