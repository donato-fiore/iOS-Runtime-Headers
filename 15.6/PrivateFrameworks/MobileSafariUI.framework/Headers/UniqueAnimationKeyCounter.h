// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNIQUEANIMATIONKEYCOUNTER_H
#define UNIQUEANIMATIONKEYCOUNTER_H


#import <Foundation/Foundation.h>


@interface UniqueAnimationKeyCounter : NSObject {
    NSUInteger _nextAnimationKey;
    NSUInteger _finishedUsingKeys;
}


@property (readonly, nonatomic, getter=isFinishedUsingAllKeys) BOOL finishedUsingAllKeys;


-(NSUInteger)nextAnimationKey;
-(void)didFinishUsingAnimationKey;


@end


#endif