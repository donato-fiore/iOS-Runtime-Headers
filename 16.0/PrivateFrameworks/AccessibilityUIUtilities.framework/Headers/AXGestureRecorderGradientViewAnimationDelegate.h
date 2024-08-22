// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXGESTURERECORDERGRADIENTVIEWANIMATIONDELEGATE_H
#define AXGESTURERECORDERGRADIENTVIEWANIMATIONDELEGATE_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface AXGestureRecorderGradientViewAnimationDelegate : NSObject <CAAnimationDelegate>



@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif