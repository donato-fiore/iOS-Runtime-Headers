// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMDELAYTESTHARNESS_H
#define CAMDELAYTESTHARNESS_H



#import "CAMPerformanceTestHarness.h"

@interface CAMDelayTestHarness : CAMPerformanceTestHarness

@property NSInteger _delay; // ivar: __delay


-(id)initWithTestName:(id)arg0 secondsDelay:(NSInteger)arg1 ;
-(void)startTesting;


@end


#endif