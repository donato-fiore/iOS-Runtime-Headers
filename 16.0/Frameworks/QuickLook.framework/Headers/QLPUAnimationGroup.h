// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLPUANIMATIONGROUP_H
#define QLPUANIMATIONGROUP_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "QLPUAnimationGroup.h"

@interface QLPUAnimationGroup : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) CGFloat elapsedTime;
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly, nonatomic, getter=isReadyToComplete) BOOL readyToComplete;
@property (readonly, nonatomic) NSMutableArray *subAnimationGroups; // ivar: _subAnimationGroups
@property (weak, nonatomic) QLPUAnimationGroup *superAnimationGroup; // ivar: _superAnimationGroup


+(id)animationGroupWithAnimations:(id)arg0 ;
+(void)popAnimationGroup:(id)arg0 ;
+(void)pushAnimationGroup:(id)arg0 ;
-(id)description;
-(void)addSubAnimationGroup:(id)arg0 ;
-(void)complete;
-(void)completeIfNeeded;
-(void)dealloc;
-(void)finishImmediately;
-(void)pauseAnimations;
-(void)resumeAnimations;


@end


#endif