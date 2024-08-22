// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUIMANUALANIMATIONSEQUENCER_H
#define ARUIMANUALANIMATIONSEQUENCER_H

@class NSString;
@protocol ARUIAnimationSequencing;

#import <Foundation/Foundation.h>

#import "ARUIObserverStore.h"

@interface ARUIManualAnimationSequencer : NSObject <ARUIAnimationSequencing>

 {
    ARUIObserverStore *_observers;
    id *_completion;
    CGFloat _timeUntilCompletion;
}


@property (readonly, nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)performAfter:(CGFloat)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)tick;


@end


#endif