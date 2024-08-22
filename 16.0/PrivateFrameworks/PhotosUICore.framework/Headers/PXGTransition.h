// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGTRANSITION_H
#define PXGTRANSITION_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "PXGLayout.h"

@interface PXGTransition : NSObject

@property (readonly, nonatomic) BOOL animatingTowardsFinalState; // ivar: _animatingTowardsFinalState
@property (readonly, nonatomic) BOOL animatingTowardsInitialState; // ivar: _animatingTowardsInitialState
@property (readonly, nonatomic) NSSet *animations; // ivar: _animations
@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) float fractionCompleted; // ivar: _fractionCompleted
@property (readonly, nonatomic) BOOL invalid; // ivar: _invalid
@property (nonatomic) BOOL isIntercative; // ivar: _isIntercative
@property (readonly, nonatomic) PXGLayout *layout; // ivar: _layout


-(id)initWithAnimations:(id)arg0 layout:(id)arg1 ;
-(void)animateToFinalStateWithCompletionBlock:(id)arg0 ;
-(void)animateToInitialStateWithCompletionBlock:(id)arg0 ;


@end


#endif