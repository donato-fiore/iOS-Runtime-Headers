// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPFEEDBACKMANAGER_H
#define SPFEEDBACKMANAGER_H

@class NSString, NSUserDefaults, PARSession;
@protocol SFFeedbackListener, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPFeedbackManager : NSObject <SFFeedbackListener>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUserDefaults *defaultsCenter; // ivar: _defaultsCenter
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *feedbackQueue; // ivar: _feedbackQueue
@property (readonly) NSUInteger hash;
@property BOOL isParsecEnabled; // ivar: _isParsecEnabled
@property BOOL needsToDisplayFirstTimeView; // ivar: _needsToDisplayFirstTimeView
@property (retain, nonatomic) PARSession *parsecFeedbackListener; // ivar: _parsecFeedbackListener
@property (readonly) Class superclass;


+(id)sharedManager;
+(void)bumpPriorityOnQueue:(id)arg0 withCompletion:(id)arg1 ;
+(void)flushFeedbackWithCompletion:(id)arg0 ;
-(BOOL)isParsecFeedbackEnabled;
-(id)init;
-(void)_sendFeedback:(id)arg0 type:(NSInteger)arg1 ;
-(void)_sendFeedback:(id)arg0 type:(NSInteger)arg1 queryId:(NSUInteger)arg2 ;
-(void)cardViewDidAppear:(id)arg0 ;
-(void)cardViewDidDisappear:(id)arg0 ;
-(void)didAppendLateSections:(id)arg0 ;
-(void)didClearInput:(id)arg0 ;
-(void)didEndSearch:(id)arg0 ;
-(void)didEngageCardSection:(id)arg0 ;
-(void)didEngageResult:(id)arg0 ;
-(void)didEngageSection:(id)arg0 ;
-(void)didEngageSuggestion:(id)arg0 ;
-(void)didErrorOccur:(id)arg0 ;
-(void)didGradeResultRelevancy:(id)arg0 ;
-(void)didPerformCommand:(id)arg0 ;
-(void)didRankSections:(id)arg0 ;
-(void)didReceiveResultsAfterTimeout:(id)arg0 ;
-(void)didReportUserResponseFeedback:(id)arg0 ;
-(void)didStartSearch:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reportFeedback:(id)arg0 queryId:(NSInteger)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg0 ;
-(void)searchViewDidAppear:(id)arg0 ;
-(void)searchViewDidDisappear:(id)arg0 ;
-(void)sectionHeaderDidBecomeVisible:(id)arg0 ;
-(void)sendCustomFeedback:(id)arg0 ;
-(void)suggestionsDidBecomeVisible:(id)arg0 ;
-(void)updateNeedsToDisplayFirstTimeView;
-(void)updateParsecEnabled;


@end


#endif