// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSUASSERTIONHANDLER_H
#define OITSUASSERTIONHANDLER_H


#import <Foundation/Foundation.h>


@interface OITSUAssertionHandler : NSObject



// +(id)p_performBlockIgnoringAssertions:(id)arg0 onlyFatal:(unk)arg1  ;
+(id)performBlockIgnoringAssertions:(id)arg0 ;
+(id)performBlockIgnoringFatalAssertions:(id)arg0 ;
+(int)_atomicIncrementAssertCount;
+(void)handleFailureInFunction:(id)arg0 file:(id)arg1 lineNumber:(NSInteger)arg2 isFatal:(BOOL)arg3 description:(char *)arg4 ;
+(void)logBacktrace;
+(void)logBacktraceThrottled;
+(void)logBacktraceWithCallStackSymbols:(id)arg0 ;
+(void)simulateCrashWithMessage:(id)arg0 ;


@end


#endif