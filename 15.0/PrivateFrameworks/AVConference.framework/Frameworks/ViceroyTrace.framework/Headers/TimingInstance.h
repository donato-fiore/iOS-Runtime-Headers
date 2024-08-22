// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIMINGINSTANCE_H
#define TIMINGINSTANCE_H


#import <Foundation/Foundation.h>


@interface TimingInstance : NSObject

@property (nonatomic) BOOL isRunning; // ivar: isRunning
@property (nonatomic) float startTiming; // ivar: startTiming
@property (nonatomic) float stopTiming; // ivar: stopTiming
@property (nonatomic) float totalTime; // ivar: totalTime


+(id)createTimingInstanceWithStartTime:(float)arg0 ;
-(id)description;


@end


#endif