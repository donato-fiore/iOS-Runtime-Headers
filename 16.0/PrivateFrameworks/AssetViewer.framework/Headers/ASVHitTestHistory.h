// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVHITTESTHISTORY_H
#define ASVHITTESTHISTORY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ASVHitTestHistory : NSObject

@property (readonly, nonatomic) NSUInteger decisionCapacity; // ivar: _decisionCapacity
@property (readonly, nonatomic) NSMutableArray *decisions; // ivar: _decisions
@property (readonly, nonatomic) NSUInteger resultCapacity; // ivar: _resultCapacity
@property (readonly, nonatomic) NSMutableArray *results; // ivar: _results


-(id)initWithResultCapacity:(NSUInteger)arg0 decisionCapacity:(NSUInteger)arg1 ;
-(id)recentDecisionsForCount:(NSUInteger)arg0 ;
-(id)recentResultsForCount:(NSUInteger)arg0 ;
-(void)addDecision:(id)arg0 ;
-(void)addResult:(id)arg0 ;
-(void)clearHistory;
-(void)reinitializeDecisionHistoryWithDecision:(id)arg0 ;


@end


#endif