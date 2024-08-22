// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIMINGINSTANCE_H
#define TIMINGINSTANCE_H


#import <Foundation/Foundation.h>


@interface TimingInstance : NSObject

@property (nonatomic) BOOL isRunning; // ivar: isRunning
@property (nonatomic) CGFloat startTiming; // ivar: startTiming
@property (nonatomic) CGFloat stopTiming; // ivar: stopTiming
@property (nonatomic) CGFloat totalTime; // ivar: totalTime


+(id)createTimingInstanceWithStartTime:(CGFloat)arg0 ;
-(id)description;


@end


#endif