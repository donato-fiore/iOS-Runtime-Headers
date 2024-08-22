// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WBSSEARCHFOUNDATIONFEEDBACKGENERATOR_H
#define _WBSSEARCHFOUNDATIONFEEDBACKGENERATOR_H

@class NSDate, NSMutableArray, NSString, SFRankingFeedback;
@protocol _CompletionListRankingObserverFeedbackGenerator, _CompletionListRankingObserverFeedbackGeneratorDelegate;

#import <Foundation/Foundation.h>


@interface _WBSSearchFoundationFeedbackGenerator : NSObject <_CompletionListRankingObserverFeedbackGenerator>

 {
    NSDate *_rankingStartDate;
    NSMutableArray *_sectionRankingFeedbackObjects;
    NSString *_currentSectionBundleIdentifier;
    NSMutableArray *_currentSectionResultRankingFeedbackObjects;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_CompletionListRankingObserverFeedbackGeneratorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SFRankingFeedback *rankingFeedback; // ivar: _rankingFeedback
@property (readonly) Class superclass;


-(id)init;
-(void)_commitPreviousSectionIfNecessary;
-(void)didAddItem:(id)arg0 hidingOutrankedResults:(id)arg1 hidingDuplicateResults:(id)arg2 ;
-(void)didBeginRanking;
-(void)didBeginSectionWithBundleIdentifier:(id)arg0 ;
-(void)didEndRanking;
-(void)removeAllSectionsAndItems;


@end


#endif