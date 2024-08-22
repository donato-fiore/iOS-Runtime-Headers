// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRISTOPWATCH_H
#define TRISTOPWATCH_H


#import <Foundation/Foundation.h>


@interface TRIStopwatch : NSObject {
    NSUInteger _start_time;
}




+(id)start;
-(NSUInteger)elapsed_ms;
-(id)init;


@end


#endif