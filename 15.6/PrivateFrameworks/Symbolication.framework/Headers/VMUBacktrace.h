// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUBACKTRACE_H
#define VMUBACKTRACE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VMUBacktrace : NSObject <NSCopying, NSSecureCoding>

 {
    int _flavor;
    ? _callstack;
}




+(BOOL)supportsSecureCoding;
+(void)initialize;
-(*NSUInteger)backtrace;
-(*NSUInteger)stackFramePointers;
-(NSUInteger)dispatchQueueSerialNumber;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSamplingContext:(struct sampling_context_t *)arg0 thread:(unsigned int)arg1 recordFramePointers:(BOOL)arg2 ;
-(int)threadState;
-(struct _CSTypeRef )_symbolicator;
-(unsigned int)backtraceLength;
-(unsigned int)thread;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fixupStackWithSamplingContext:(struct sampling_context_t *)arg0 symbolicator:(struct _CSTypeRef )arg1 ;
-(void)setEndTime:(CGFloat)arg0 ;
-(void)setLengthTime:(CGFloat)arg0 ;
-(void)setStartTime:(CGFloat)arg0 ;
-(void)setThreadState:(int)arg0 ;


@end


#endif