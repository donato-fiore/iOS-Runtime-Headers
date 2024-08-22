// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUASSERTIONHANDLER_H
#define TSUASSERTIONHANDLER_H


#import <Foundation/Foundation.h>


@interface TSUAssertionHandler : NSObject



+(BOOL)isQAFatalAssertionsEnabled;
// +(id)p_performBlockIgnoringAssertions:(id)arg0 onlyFatal:(unk)arg1  ;
+(id)packedBacktraceString;
+(id)packedBacktraceStringWithReturnAddresses:(id)arg0 ;
+(id)performBlockIgnoringAssertions:(id)arg0 ;
+(id)performBlockIgnoringAssertionsAndReturnList:(id)arg0 ;
+(id)performBlockIgnoringFatalAssertions:(id)arg0 ;
+(id)performBlockIgnoringQAFatalAssertions:(id)arg0 ;
+(int)_atomicIncrementAssertCount;
+(void)_logBacktraceWithCallStackSymbols:(id)arg0 ;
+(void)handleFailureInFunction:(id)arg0 file:(id)arg1 lineNumber:(NSInteger)arg2 isFatal:(BOOL)arg3 description:(char *)arg4 ;
+(void)handleFailureInFunction:(id)arg0 file:(id)arg1 lineNumber:(NSInteger)arg2 isFatal:(BOOL)arg3 format:(id)arg4 args:(char *)arg5 ;
+(void)initialize;
+(void)logBacktraceThrottled;
+(void)logFullBacktrace;
+(void)setDelegate:(id)arg0 ;
+(void)simulateCrashWithMessage:(id)arg0 ;


@end


#endif