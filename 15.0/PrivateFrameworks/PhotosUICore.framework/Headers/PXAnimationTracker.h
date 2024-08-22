// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXANIMATIONTRACKER_H
#define PXANIMATIONTRACKER_H


#import <Foundation/Foundation.h>


@interface PXAnimationTracker : NSObject



+(void)_scrollAnimationOccurred:(NSInteger)arg0 isBegin:(BOOL)arg1 ;
+(void)_transitionAnimationOccurred:(NSInteger)arg0 fromOrigin:(NSInteger)arg1 transitionObject:(id)arg2 isBegin:(BOOL)arg3 ;
+(void)_transitionPreparationOccurred:(NSInteger)arg0 fromOrigin:(NSInteger)arg1 transitionObject:(id)arg2 isBegin:(BOOL)arg3 ;
+(void)scrollAnimationDidBegin:(NSInteger)arg0 ;
+(void)scrollAnimationDidEnd:(NSInteger)arg0 ;
+(void)transitionAnimationDidBegin:(NSInteger)arg0 fromOrigin:(NSInteger)arg1 transitionObject:(id)arg2 ;
+(void)transitionAnimationDidEnd:(NSInteger)arg0 fromOrigin:(NSInteger)arg1 transitionObject:(id)arg2 ;
+(void)transitionPreparationDidBegin:(NSInteger)arg0 fromOrigin:(NSInteger)arg1 transitionObject:(id)arg2 ;


@end


#endif