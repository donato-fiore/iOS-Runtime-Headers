// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARUICOUNTDOWNTIMELINE_H
#define ARUICOUNTDOWNTIMELINE_H

@class NSArray;
@protocol ARUICountdownAnimation;

#import <Foundation/Foundation.h>


@interface ARUICountdownTimeline : NSObject

@property (retain, nonatomic) NSArray *animations; // ivar: _animations
@property (retain, nonatomic) NSArray *cancelAnimations; // ivar: _cancelAnimations
@property (retain, nonatomic) NSObject<ARUICountdownAnimation> *prepareToAnimate; // ivar: _prepareToAnimate
@property (retain, nonatomic) NSObject<ARUICountdownAnimation> *prepareToCancel; // ivar: _prepareToCancel




@end


#endif