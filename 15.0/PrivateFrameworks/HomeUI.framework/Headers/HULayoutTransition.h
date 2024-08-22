// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULAYOUTTRANSITION_H
#define HULAYOUTTRANSITION_H

@class UIView;

#import <Foundation/Foundation.h>


@interface HULayoutTransition : NSObject

@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) id *fromState; // ivar: _fromState
@property (nonatomic) NSUInteger phase; // ivar: _phase
@property (readonly, copy, nonatomic) id *setupBlock; // ivar: _setupBlock
@property (retain, nonatomic) id *toState; // ivar: _toState
@property (readonly, copy, nonatomic) id *transitionBlock; // ivar: _transitionBlock
@property (readonly, nonatomic) UIView *view; // ivar: _view


-(id)init;
// -(id)initWithView:(id)arg0 setupBlock:(id)arg1 transitionBlock:(unk)arg2 completionBlock:(id)arg3  ;
-(void)completeTransition;
-(void)executeTransition;
-(void)setupTransitionWithFromState:(id)arg0 toState:(id)arg1 ;


@end


#endif