// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAUSERADJUSTMENT_H
#define CAUSERADJUSTMENT_H


#import <Foundation/Foundation.h>


@interface CAUserAdjustment : NSObject

@property (readonly) CGFloat luminanceScale; // ivar: _luminanceScale
@property (readonly) CGFloat timestamp; // ivar: _timestamp
@property (readonly) CGFloat xDelta; // ivar: _xDelta
@property (readonly) CGFloat yDelta; // ivar: _yDelta


-(id)initWithXDelta:(CGFloat)arg0 yDelta:(CGFloat)arg1 luminanceScale:(CGFloat)arg2 ;
-(id)initWithXDelta:(CGFloat)arg0 yDelta:(CGFloat)arg1 luminanceScale:(CGFloat)arg2 timestamp:(CGFloat)arg3 ;


@end


#endif