// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXSTORYPACINGCONTROLLERDECISIONLIST_H
#define _PXSTORYPACINGCONTROLLERDECISIONLIST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PXStoryPacingControllerDecisionList : NSObject {
    NSInteger _capacity;
}


@property (readonly, nonatomic) *? decisions; // ivar: _decisions
@property (readonly, nonatomic) NSInteger decisionsCount; // ivar: _decisionsCount
@property (readonly, nonatomic) NSString *resetReason; // ivar: _resetReason
@property (readonly, nonatomic) ? targetRemainingDuration; // ivar: _targetRemainingDuration


-(id)initWithResetReason:(id)arg0 targetRemainingDuration:(struct ? )arg1 ;
-(void)appendDecision:(struct ? )arg0 ;
-(void)dealloc;
-(void)enumerateDecisionsWithBlock:(id)arg0 ;


@end


#endif