// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPRESENTATIONCONFIGURATION_H
#define AVPRESENTATIONCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface AVPresentationConfiguration : NSObject

@property (readonly, nonatomic) CGFloat transitionDuration; // ivar: _transitionDuration
@property (readonly, nonatomic) NSUInteger transitionStyle; // ivar: _transitionStyle


+(id)configurationWithTransitionStyle:(NSUInteger)arg0 transitionDuration:(CGFloat)arg1 ;


@end


#endif