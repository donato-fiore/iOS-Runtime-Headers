// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPKPERFORMANCETESTINTERMEDIARY_H
#define LPKPERFORMANCETESTINTERMEDIARY_H


#import <Foundation/Foundation.h>


@interface LPKPerformanceTestIntermediary : NSObject



+(BOOL)_startUserSwitchTestForType:(NSUInteger)arg0 count:(NSInteger)arg1 username:(id)arg2 password:(id)arg3 isPerformanceTest:(BOOL)arg4 ;
+(BOOL)endUserSwitchTest;
+(BOOL)startPerformanceTestForType:(NSUInteger)arg0 count:(NSInteger)arg1 username:(id)arg2 password:(id)arg3 ;
+(BOOL)startUserSwitchTestForType:(NSUInteger)arg0 count:(NSInteger)arg1 username:(id)arg2 password:(id)arg3 ;
+(NSInteger)_disableKtrace;
+(NSInteger)_dumpKtraceResult;
+(NSInteger)_enableKtrace;
+(id)_generateSharedipadTraceHelperCommand;
+(id)endPerformanceTestAndDumpResults;
+(void)_removeStoredValues;
+(void)disableRestrictionlessLoginWithCompletionHandler:(id)arg0 ;
+(void)enableRestrictionlessLoginWithCompletionHandler:(id)arg0 ;


@end


#endif