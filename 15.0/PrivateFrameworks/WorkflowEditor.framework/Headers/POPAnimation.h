// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPANIMATION_H
#define POPANIMATION_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "POPAnimationTracer.h"

@interface POPAnimation : NSObject <NSCopying>

 {
    *_POPAnimationState _state;
}


@property (copy, nonatomic) id *animationDidApplyBlock;
@property (copy, nonatomic) id *animationDidReachToValueBlock;
@property (copy, nonatomic) id *animationDidStartBlock;
@property (nonatomic) BOOL autoreverses;
@property (nonatomic) CGFloat beginTime;
@property (copy, nonatomic) id *completionBlock;
@property (readonly, copy, nonatomic) id *currentValue; // ivar: _currentValue
@property (weak, nonatomic) id *delegate;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (copy, nonatomic) NSArray *progressMarkers; // ivar: _progressMarkers
@property (nonatomic) BOOL removedOnCompletion;
@property (nonatomic) NSInteger repeatCount;
@property (nonatomic) BOOL repeatForever;
@property (nonatomic) *void solver; // ivar: _solver
@property (readonly, nonatomic) POPAnimationTracer *tracer;
@property (readonly, nonatomic) int type;


-(BOOL)_advance:(id)arg0 currentTime:(CGFloat)arg1 elapsedTime:(CGFloat)arg2 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)_appendDescription:(id)arg0 debug:(BOOL)arg1 ;
-(void)_initState;
-(void)dealloc;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif