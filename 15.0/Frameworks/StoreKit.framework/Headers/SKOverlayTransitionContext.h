// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKOVERLAYTRANSITIONCONTEXT_H
#define SKOVERLAYTRANSITIONCONTEXT_H

@class ASOOverlayTransitionContext;

#import <Foundation/Foundation.h>


@interface SKOverlayTransitionContext : NSObject

@property (retain, nonatomic) ASOOverlayTransitionContext *backing; // ivar: _backing
@property (readonly, nonatomic) CGRect endFrame;
@property (readonly, nonatomic) CGRect startFrame;


-(id)initWithASOOverlayTransitionContext:(id)arg0 ;
-(void)addAnimationBlock:(id)arg0 ;


@end


#endif