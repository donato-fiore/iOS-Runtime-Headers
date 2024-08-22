// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVIEWANIMATIONDELEGATE_H
#define _UIVIEWANIMATIONDELEGATE_H

@class NSString;
@protocol CAAnimationDelegate;

#import <Foundation/Foundation.h>


@interface _UIViewAnimationDelegate : NSObject <CAAnimationDelegate>

 {
    id *_completionBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCompletionBlock:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif