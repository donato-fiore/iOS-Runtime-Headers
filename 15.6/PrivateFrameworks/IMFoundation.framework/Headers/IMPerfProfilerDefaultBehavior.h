// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMPERFPROFILERDEFAULTBEHAVIOR_H
#define IMPERFPROFILERDEFAULTBEHAVIOR_H

@class NSString;
@protocol IMPerfProfilerBehavior;

#import <Foundation/Foundation.h>


@interface IMPerfProfilerDefaultBehavior : NSObject <IMPerfProfilerBehavior>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)instance;
-(void)perfProfiler:(id)arg0 measurementDidFinish:(struct IMPerfMeasurement_t *)arg1 withSink:(id)arg2 ;


@end


#endif