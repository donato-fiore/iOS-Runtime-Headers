// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCAANIMATIONBLOCKDELEGATE_H
#define SBCAANIMATIONBLOCKDELEGATE_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface SBCAAnimationBlockDelegate : NSObject <CAAnimationDelegate>



@property (copy, nonatomic) id *animationDidStartHandler; // ivar: _animationDidStartHandler
@property (copy, nonatomic) id *animationDidStopHandler; // ivar: _animationDidStopHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif