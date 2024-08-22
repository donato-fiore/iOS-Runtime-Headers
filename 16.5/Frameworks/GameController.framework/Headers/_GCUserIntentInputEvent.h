// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCUSERINTENTINPUTEVENT_H
#define _GCUSERINTENTINPUTEVENT_H


#import <Foundation/Foundation.h>


@interface _GCUserIntentInputEvent : NSObject

@property (readonly, nonatomic) NSInteger octant; // ivar: _octant
@property (readonly, nonatomic) CGFloat timestampInSeconds; // ivar: _timestampInSeconds


-(id)initWithXValue:(float)arg0 yValue:(float)arg1 timestamp:(NSUInteger)arg2 deadzoneSquared:(CGFloat)arg3 ;


@end


#endif