// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTTRANSITIONCOORDINATOR_H
#define AVTTRANSITIONCOORDINATOR_H

@class NSMutableArray;
@protocol AVTTransitionScheduler;

#import <Foundation/Foundation.h>


@interface AVTTransitionCoordinator : NSObject

@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, nonatomic) NSMutableArray *pendingTransitions; // ivar: _pendingTransitions
@property (readonly, nonatomic) NSMutableArray *runningTransitions; // ivar: _runningTransitions
@property (retain, nonatomic) NSObject<AVTTransitionScheduler> *scheduler; // ivar: _scheduler


+(id)concurrentTransitionCoordinatorWithDelay:(CGFloat)arg0 ;
+(id)eventHandlerForCoordinator:(SEL)arg0 ;
+(id)synchronousTransitionCoordinator;
-(id)allTransitions;
-(id)init;
-(id)transitionsMatchingModel:(id)arg0 ;
-(void)addTransition:(id)arg0 ;
-(void)cancelAllTransitions;
-(void)cancelTransitionsMatchingModel:(id)arg0 ;
-(void)dealloc;
-(void)didCompleteRunningTransition:(id)arg0 ;
-(void)startNextTransition;


@end


#endif