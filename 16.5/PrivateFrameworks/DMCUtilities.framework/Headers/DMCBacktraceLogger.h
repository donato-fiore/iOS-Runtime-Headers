// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCBACKTRACELOGGER_H
#define DMCBACKTRACELOGGER_H


#import <Foundation/Foundation.h>


@interface DMCBacktraceLogger : NSObject

@property (nonatomic) unsigned int trackedThread; // ivar: _trackedThread


+(BOOL)_copyFrameInformation:(NSUInteger)arg0 destination:(NSUInteger)arg1 size:(NSUInteger)arg2 ;
+(BOOL)dumpStackshotToPath:(id)arg0 fileName:(id)arg1 ;
+(NSUInteger)_getFPFromThreadState:(struct __darwin_arm_thread_state64 )arg0 ;
+(NSUInteger)_getLRFromThreadState:(struct __darwin_arm_thread_state64 )arg0 ;
+(NSUInteger)_getPCFromThreadState:(struct __darwin_arm_thread_state64 )arg0 ;
+(id)_getBacktraceFromThread:(unsigned int)arg0 bufferSize:(int)arg1 ;
+(id)_logWithSymbol:(struct dl_info *)arg0 address:(NSUInteger)arg1 index:(int)arg2 ;
+(id)callerOfCurrentMethod;
+(struct __darwin_arm_thread_state64 )_getThreadStateForThread:(unsigned int)arg0 ;
+(void)_symbolicateBuffer:(*NSUInteger)arg0 symbolsBuffer:(struct dl_info *)arg1 count:(int)arg2 ;
-(id)getBacktraceFromTrackedThread;
-(void)trackCurrentThread;


@end


#endif