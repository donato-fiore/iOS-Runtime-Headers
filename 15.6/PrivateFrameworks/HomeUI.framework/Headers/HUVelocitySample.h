// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUVELOCITYSAMPLE_H
#define HUVELOCITYSAMPLE_H


#import <Foundation/Foundation.h>


@interface HUVelocitySample : NSObject

@property (readonly, nonatomic) CGFloat dt;
@property (nonatomic) CGPoint end; // ivar: _end
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (nonatomic) CGPoint start; // ivar: _start
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) CGVector translation;
@property (readonly, nonatomic) CGVector velocity;


+(id)sampleWithStart:(struct CGPoint )arg0 end:(struct CGPoint )arg1 startTime:(CGFloat)arg2 endTime:(CGFloat)arg3 ;
-(BOOL)isSampleDistinctFromPoint:(struct CGPoint )arg0 ;


@end


#endif