// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSTOPWATCH_H
#define ARSTOPWATCH_H


#import <Foundation/Foundation.h>


@interface ARStopwatch : NSObject {
    CGFloat _startTime;
    BOOL _started;
}




-(CGFloat)stop;
-(void)start;


@end


#endif