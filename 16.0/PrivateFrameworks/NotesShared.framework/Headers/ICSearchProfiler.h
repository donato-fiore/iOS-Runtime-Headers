// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSEARCHPROFILER_H
#define ICSEARCHPROFILER_H


#import <Foundation/Foundation.h>


@interface ICSearchProfiler : NSObject



+(void)logProfilingWithMessage:(id)arg0 ;
+(void)logProfilingWithMessage:(id)arg0 searchQueryOperation:(id)arg1 ;
+(void)resetProfileTimer;


@end


#endif