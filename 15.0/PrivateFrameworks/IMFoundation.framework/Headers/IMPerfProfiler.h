// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMPERFPROFILER_H
#define IMPERFPROFILER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface IMPerfProfiler : NSObject {
    NSMutableArray *_sinks;
}




+(id)instance;
-(?)logMeasurement;
-(id)init;
-(void)addSink:(id)arg0 withBehavior:(id)arg1 ;


@end


#endif