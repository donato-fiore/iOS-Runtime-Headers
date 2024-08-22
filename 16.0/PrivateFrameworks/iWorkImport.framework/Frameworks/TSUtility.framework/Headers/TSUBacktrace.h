// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUBACKTRACE_H
#define TSUBACKTRACE_H


#import <Foundation/Foundation.h>


@interface TSUBacktrace : NSObject {
    **void _callstack;
    int _frames;
    int _initAdjustment;
}




+(id)backtrace;
+(id)callee;
+(id)caller;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)backtraceString;
-(id)callee;
-(id)caller;
-(id)callerAtIndex:(NSInteger)arg0 ;
-(id)init;
-(id)initWithAdjustment:(int)arg0 ;
-(void)dealloc;


@end


#endif