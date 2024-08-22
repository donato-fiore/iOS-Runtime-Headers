// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFOCUSEFFECTSCONTROLLER_H
#define _UIFOCUSEFFECTSCONTROLLER_H

@class NSHashTable;

#import <Foundation/Foundation.h>

#import "_UIDynamicValueConvergenceAnimation.h"

@interface _UIFocusEffectsController : NSObject {
    _UIDynamicValueConvergenceAnimation *_rollbackAnimation;
    NSHashTable *_observers;
    CGPoint _displayOffset;
    CGFloat _displayMovementAdjustment;
}


@property (readonly, nonatomic) CGPoint currentOffset; // ivar: _currentOffset
@property (readonly, nonatomic) CGPoint displayOffset;
@property (nonatomic) BOOL displayOffsetAccumulatorEnabled; // ivar: _displayOffsetAccumulatorEnabled


-(id)init;
-(void)_notifyObserversForMovementDirection:(struct CGVector )arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)adjustDisplayOffsetAccumulationFactorForFocusTransfer;
-(void)cancelRollbackAnimation;
-(void)removeObserver:(id)arg0 ;
-(void)reset;
-(void)startRollbackAnimation;
-(void)updateCurrentOffset:(struct CGPoint )arg0 ;
-(void)updateCurrentOffset:(struct CGPoint )arg0 overrideDisplayOffset:(id)arg1 ;


@end


#endif