// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC6KTRACE14KTRACERECORDER_H
#define _TTC6KTRACE14KTRACERECORDER_H


#import <Foundation/Foundation.h>


@interface _TtC6ktrace14KTraceRecorder : NSObject



+(BOOL)ktraceRecord:(struct ktrace_recording *)arg0 args:(id)arg1 error:(*id)arg2 ;
+(BOOL)listPlansToFile:(struct __sFILE *)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif