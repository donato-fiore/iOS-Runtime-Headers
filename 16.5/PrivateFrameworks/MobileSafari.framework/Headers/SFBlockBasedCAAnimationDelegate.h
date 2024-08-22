// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFBLOCKBASEDCAANIMATIONDELEGATE_H
#define SFBLOCKBASEDCAANIMATIONDELEGATE_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface SFBlockBasedCAAnimationDelegate : NSObject <CAAnimationDelegate>



@property (copy, nonatomic) id *animationDidStopBlock; // ivar: _animationDidStopBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)animationDelegateWithDidStopBlock:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)associateLifetimeWithAnimation:(id)arg0 ;


@end


#endif