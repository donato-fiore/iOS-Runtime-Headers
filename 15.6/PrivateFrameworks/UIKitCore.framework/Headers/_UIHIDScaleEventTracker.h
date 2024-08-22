// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIHIDSCALEEVENTTRACKER_H
#define _UIHIDSCALEEVENTTRACKER_H


#import <Foundation/Foundation.h>


@interface _UIHIDScaleEventTracker : NSObject

@property (readonly, nonatomic) NSUInteger compositePhase; // ivar: _compositePhase
@property (readonly, nonatomic) CGFloat scaleZ; // ivar: _scaleZ


-(void)reset;
-(void)updateWithHIDEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif