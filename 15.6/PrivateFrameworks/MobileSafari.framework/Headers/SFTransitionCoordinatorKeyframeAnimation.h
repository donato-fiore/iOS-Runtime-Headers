// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFTRANSITIONCOORDINATORKEYFRAMEANIMATION_H
#define SFTRANSITIONCOORDINATORKEYFRAMEANIMATION_H

@class NSString;
@protocol SFTransitionCoordinatorAnimation;

#import <Foundation/Foundation.h>


@interface SFTransitionCoordinatorKeyframeAnimation : NSObject <SFTransitionCoordinatorAnimation>

 {
    id *_animations;
    CGFloat _duration;
    CGFloat _startTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)invokeInContext:(id)arg0 ;


@end


#endif