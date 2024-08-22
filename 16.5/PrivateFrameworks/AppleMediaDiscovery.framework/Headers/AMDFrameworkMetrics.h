// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMDFRAMEWORKMETRICS_H
#define AMDFRAMEWORKMETRICS_H


#import <Foundation/Foundation.h>


@interface AMDFrameworkMetrics : NSObject



+(void)flush;
+(void)log:(id)arg0 withKey:(id)arg1 atVerbosity:(char)arg2 ;
+(void)provisionInstanceAtVerbosity:(char)arg0 andAction:(id)arg1 andVersion:(id)arg2 andBuild:(id)arg3 andStorefrontId:(id)arg4 withLoggingProbability:(id)arg5 ;


@end


#endif