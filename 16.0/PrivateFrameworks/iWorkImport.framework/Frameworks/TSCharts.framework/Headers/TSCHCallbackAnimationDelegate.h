// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCALLBACKANIMATIONDELEGATE_H
#define TSCHCALLBACKANIMATIONDELEGATE_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface TSCHCallbackAnimationDelegate : NSObject <CAAnimationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) SEL selector; // ivar: selector
@property (readonly) Class superclass;
@property (retain, nonatomic) id *target; // ivar: target


-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif