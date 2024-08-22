// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCALGOSSTREAMINGSCOREAGGREGATOR_H
#define VCALGOSSTREAMINGSCOREAGGREGATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VCAlgosStreamingScoreAggregator : NSObject {
    NSMutableDictionary *_participantAlgosScorers;
    os_unfair_lock_s _blockAlgosScorersDictionaryLock;
}


@property (readonly, nonatomic) CGFloat score; // ivar: _score


-(CGFloat)aggregateScores;
-(CGFloat)aggregateScoresWithDictionaryLogging:(BOOL)arg0 time:(CGFloat)arg1 ;
-(id)algosScorerWithParticipantID:(id)arg0 ;
-(id)init;
-(void)addParticipantWithTime:(CGFloat)arg0 participantID:(id)arg1 ;
-(void)dealloc;


@end


#endif