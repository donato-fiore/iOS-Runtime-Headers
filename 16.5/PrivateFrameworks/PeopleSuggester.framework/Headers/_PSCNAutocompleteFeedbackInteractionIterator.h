// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSCNAUTOCOMPLETEFEEDBACKINTERACTIONITERATOR_H
#define _PSCNAUTOCOMPLETEFEEDBACKINTERACTIONITERATOR_H

@class NSEnumerator, _CDInteractionStore, NSSet, NSDate, _CDInteraction, NSArray;



@interface _PSCNAutocompleteFeedbackInteractionIterator : NSEnumerator {
    _CDInteractionStore *_interactionStore;
    NSSet *_bundleIds;
    NSUInteger _batchSize;
    NSDate *_startDate;
    NSDate *_endDate;
    _CDInteraction *_lastItem;
    NSArray *_results;
    NSInteger _resultsIndex;
    NSInteger _resultsBatch;
    BOOL _isExhausted;
}




-(id)fastForwardToDate:(id)arg0 ;
-(id)initWithInteractionStore:(id)arg0 bundleIds:(id)arg1 startDate:(id)arg2 batchSize:(NSUInteger)arg3 ;
-(id)nextObject;
-(void)fetchResults;


@end


#endif