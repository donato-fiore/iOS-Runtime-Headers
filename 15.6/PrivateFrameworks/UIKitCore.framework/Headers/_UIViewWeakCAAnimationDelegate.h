// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWWEAKCAANIMATIONDELEGATE_H
#define _UIVIEWWEAKCAANIMATIONDELEGATE_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface _UIViewWeakCAAnimationDelegate : NSObject <CAAnimationDelegate>

 {
    ? _flags;
}


@property (readonly, weak, nonatomic) NSObject<CAAnimationDelegate> *animationDelegate; // ivar: _animationDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)weakAnimationDelegate:(id)arg0 ;
-(id)initWithAnimationDelegate:(id)arg0 ;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif