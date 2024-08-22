// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASPOSIXPIPECONTEXT_H
#define _PASPOSIXPIPECONTEXT_H

@class NSFileHandle;
@protocol OS_dispatch_queue, OS_dispatch_io;

#import <Foundation/Foundation.h>


@interface _PASPosixPipeContext : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_io> *_readChannel;
    NSFileHandle *_writeHandle;
    BOOL _stop;
}




-(int)setupWithSubprocessFd:(int)arg0 fileActions:(**void)arg1 queue:(id)arg2 group:(id)arg3 readErrno:(*int)arg4 ;
-(void)startReadWithHandler:(id)arg0 ;


@end


#endif