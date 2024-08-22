// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFTRANSITIONCOORDINATORBASICANIMATION_H
#define SFTRANSITIONCOORDINATORBASICANIMATION_H

@class NSString;
@protocol SFTransitionCoordinatorAnimation;

#import <Foundation/Foundation.h>


@interface SFTransitionCoordinatorBasicAnimation : NSObject <SFTransitionCoordinatorAnimation>

 {
    id *_animations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)invokeInContext:(id)arg0 ;


@end


#endif