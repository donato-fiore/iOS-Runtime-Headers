// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ANIMATIONMANAGERRUNNER_H
#define _ANIMATIONMANAGERRUNNER_H

@class NSString;
@protocol VKAnimationRunner;

#import <Foundation/Foundation.h>


@interface _AnimationManagerRunner : NSObject <VKAnimationRunner>

 {
    *void _animationManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAnimationManager:(*void)arg0 ;
-(void)animationDidResume:(id)arg0 ;
-(void)animationDidStop:(id)arg0 ;


@end


#endif