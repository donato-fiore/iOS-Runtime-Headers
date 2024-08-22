// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFSPRINGANIMATION_H
#define MFSPRINGANIMATION_H

@class CASpringAnimation;


#import "MFSpringAnimationDelegate.h"

@interface MFSpringAnimation : CASpringAnimation

@property (retain, nonatomic) MFSpringAnimationDelegate *delegate;


+(id)springAnimationWithKeyPath:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 ;
-(id)init;
-(void)addCompletionBlock:(id)arg0 ;


@end


#endif