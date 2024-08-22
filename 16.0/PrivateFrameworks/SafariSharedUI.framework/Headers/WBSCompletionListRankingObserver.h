// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCOMPLETIONLISTRANKINGOBSERVER_H
#define WBSCOMPLETIONLISTRANKINGOBSERVER_H

@class NSString, SFRankingFeedback;
@protocol _CompletionListRankingObserverFeedbackGeneratorDelegate, _CompletionListRankingObserverFeedbackGenerator, WBSCompletionListRankingObserverDelegate;

#import <Foundation/Foundation.h>


@interface WBSCompletionListRankingObserver : NSObject <_CompletionListRankingObserverFeedbackGeneratorDelegate>

 {
    id<_CompletionListRankingObserverFeedbackGenerator> *_feedbackGenerator;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WBSCompletionListRankingObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SFRankingFeedback *rankingFeedback;
@property (readonly) Class superclass;


-(Class)_feedbackGeneratorClass;
-(NSUInteger)completionListRankingObserverFeedbackGenerator:(id)arg0 frequentlyVisitedSitesIndexOfItem:(id)arg1 hidingItem:(id)arg2 ;
-(id)_createFeedbackGenerator;
-(void)didAddItem:(id)arg0 ;
-(void)didAddItem:(id)arg0 hidingOutrankedResults:(id)arg1 hidingDuplicateResults:(id)arg2 ;
-(void)didBeginRanking;
-(void)didBeginSectionWithBundleIdentifier:(id)arg0 ;
-(void)didEndRanking;
-(void)removeAllSectionsAndItems;


@end


#endif