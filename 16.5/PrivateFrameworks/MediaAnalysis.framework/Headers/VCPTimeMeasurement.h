// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPTIMEMEASUREMENT_H
#define VCPTIMEMEASUREMENT_H


#import <Foundation/Foundation.h>


@interface VCPTimeMeasurement : NSObject {
    mach_timebase_info _timebase;
    NSUInteger _start;
}


@property (readonly) CGFloat elapsedTimeSeconds; // ivar: _elapsedTimeSeconds
@property (readonly) BOOL started; // ivar: _started


-(id)init;
-(int)start;
-(int)stop;
-(void)reset;


@end


#endif