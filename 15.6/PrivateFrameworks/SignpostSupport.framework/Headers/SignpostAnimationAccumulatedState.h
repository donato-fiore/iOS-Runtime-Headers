// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNPOSTANIMATIONACCUMULATEDSTATE_H
#define SIGNPOSTANIMATIONACCUMULATEDSTATE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "SignpostEvent.h"

@interface SignpostAnimationAccumulatedState : NSObject

@property (readonly, nonatomic) NSMutableArray *allCommitIntervals; // ivar: _allCommitIntervals
@property (readonly, nonatomic) NSMutableArray *allContributedFrameLifetimes; // ivar: _allContributedFrameLifetimes
@property (readonly, nonatomic) NSMutableArray *allFrameLatencies; // ivar: _allFrameLatencies
@property (readonly, nonatomic) NSMutableArray *allFrameLifetimes; // ivar: _allFrameLifetimes
@property (readonly, nonatomic) NSMutableArray *allHIDLatencies; // ivar: _allHIDLatencies
@property (readonly, nonatomic) NSMutableArray *allRenders; // ivar: _allRenders
@property (readonly, nonatomic) NSMutableArray *allSystemwideCommitIntervals; // ivar: _allSystemwideCommitIntervals
@property (readonly, nonatomic) NSMutableArray *allTransactionLifetimes; // ivar: _allTransactionLifetimes
@property (readonly, nonatomic) SignpostEvent *animationBeginEvent; // ivar: _animationBeginEvent
@property (readonly, nonatomic) NSMutableArray *compositorIntervals; // ivar: _compositorIntervals
@property (readonly, nonatomic) NSMutableArray *longCommitIntervals; // ivar: _longCommitIntervals
@property (readonly, nonatomic) NSMutableArray *longContributedFrameLifetimes; // ivar: _longContributedFrameLifetimes
@property (readonly, nonatomic) NSMutableArray *longFrameLatencies; // ivar: _longFrameLatencies
@property (readonly, nonatomic) NSMutableArray *longFrameLifetimes; // ivar: _longFrameLifetimes
@property (readonly, nonatomic) NSMutableArray *longHIDLatencies; // ivar: _longHIDLatencies
@property (readonly, nonatomic) NSMutableArray *longRenders; // ivar: _longRenders
@property (readonly, nonatomic) NSMutableArray *longSystemwideCommitIntervals; // ivar: _longSystemwideCommitIntervals
@property (readonly, nonatomic) NSMutableArray *longTransactionLifetimes; // ivar: _longTransactionLifetimes


-(id)initWithAnimationBeginEvent:(id)arg0 shouldTrackComposites:(BOOL)arg1 ;
-(void)_handleCommitInterval:(id)arg0 isLong:(BOOL)arg1 isConcise:(BOOL)arg2 ;
-(void)_handleFrameLatency:(id)arg0 isLong:(BOOL)arg1 isConcise:(BOOL)arg2 ;
-(void)_handleFrameLifetime:(id)arg0 isLong:(BOOL)arg1 isConcise:(BOOL)arg2 ;
-(void)_handleHIDLatency:(id)arg0 isLong:(BOOL)arg1 isConcise:(BOOL)arg2 ;
-(void)_handleRenderServerRender:(id)arg0 isLong:(BOOL)arg1 isConcise:(BOOL)arg2 ;
-(void)_handleTransactionLifetimeInterval:(id)arg0 isLong:(BOOL)arg1 isConcise:(BOOL)arg2 ;
-(void)addCompositorInterval:(id)arg0 ;


@end


#endif