// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOANALYZER_H
#define VCPVIDEOANALYZER_H


#import <Foundation/Foundation.h>


@interface VCPVideoAnalyzer : NSObject



+(NSUInteger)dependencies;
-(id)results;
-(int)analyzeFrame:(struct __CVBuffer *)arg0 withTimestamp:(struct ? )arg1 andDuration:(struct ? )arg2 flags:(*NSUInteger)arg3 ;
-(int)finishAnalysisPass:(struct ? )arg0 ;


@end


#endif