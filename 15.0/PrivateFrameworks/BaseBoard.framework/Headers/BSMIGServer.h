// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSMIGSERVER_H
#define BSMIGSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BSMIGServer : NSObject {
    NSString *_portName;
    unsigned int _port;
    *_opaque_pthread_t _thread;
    *mig_subsystem _subsystem;
    *__CFRunLoopObserver _entryObserver;
    *__CFRunLoopObserver _exitObserver;
}


@property (readonly, copy, nonatomic) NSString *threadName;
@property (nonatomic) int threadPriority;


-(id)init;
-(id)initWithPortName:(id)arg0 subsystem:(struct mig_subsystem *)arg1 separateThread:(BOOL)arg2 ;


@end


#endif