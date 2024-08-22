// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTIMEREFERENCEKERNEL_H
#define PLTIMEREFERENCEKERNEL_H

@class NSDate;


#import "PLTimeReference.h"

@interface PLTimeReferenceKernel : PLTimeReference

@property (retain) NSDate *lastKernelTimeRecalibrated; // ivar: _lastKernelTimeRecalibrated
@property (retain) NSDate *lastSystemTimeRecalibrated; // ivar: _lastSystemTimeRecalibrated
@property BOOL rebootOccurred; // ivar: _rebootOccurred


-(CGFloat)resolution;
-(NSUInteger)continuousTimeToAbsoluteNs:(NSUInteger)arg0 ;
-(id)currentTime;
-(struct mach_timebase_info *)getTimebaseInfo;
-(void)initializeOffsetWithEntries:(id)arg0 ;
-(void)setSystemReboot:(BOOL)arg0 ;


@end


#endif