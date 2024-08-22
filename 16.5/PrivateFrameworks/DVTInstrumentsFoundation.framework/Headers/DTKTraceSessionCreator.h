// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTKTRACESESSIONCREATOR_H
#define DTKTRACESESSIONCREATOR_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface DTKTraceSessionCreator : NSObject {
    *ktrace_session _ktraceSession;
    NSObject<OS_dispatch_semaphore> *_stoppingSemaphore;
}




+(BOOL)shouldKeepFile;
+(id)getDefaultedRemotePath:(*int)arg0 ;
-(id)initWithFD:(int)arg0 bitmap:(char *)arg1 useExisting:(BOOL)arg2 error:(*id)arg3 ;
-(void)stop;


@end


#endif