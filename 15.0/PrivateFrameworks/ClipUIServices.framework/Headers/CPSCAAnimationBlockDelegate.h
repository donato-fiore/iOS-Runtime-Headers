// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSCAANIMATIONBLOCKDELEGATE_H
#define CPSCAANIMATIONBLOCKDELEGATE_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface CPSCAAnimationBlockDelegate : NSObject <CAAnimationDelegate>

 {
    id *_referenceToSelf;
    id *_didStartHandler;
    id *_didStopHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// +(void)attachToAnimation:(id)arg0 didStartHandler:(id)arg1 didStopHandler:(unk)arg2  ;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif