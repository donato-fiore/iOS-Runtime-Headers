// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSRUNLOOP_H
#define NSRUNLOOP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSRunLoop : NSObject {
    id *_rl;
    id *_dperf;
    id *_perft;
    id *_info;
    id *_ports;
    *void _reserved;
}


@property (readonly, copy) NSString *currentMode; // ivar: _currentMode


-(id)_dperf;
-(id)_info;
-(id)_initWithRl:(id)arg0 dperf:(id)arg1 perft:(id)arg2 info:(id)arg3 ports:(id)arg4 ;
-(id)_perft;
-(id)_ports;
-(struct __CFRunLoop *)getCFRunLoop;
-(void)_deallocHelper;


@end


#endif