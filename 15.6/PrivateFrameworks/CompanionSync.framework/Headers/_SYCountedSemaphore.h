// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SYCOUNTEDSEMAPHORE_H
#define _SYCOUNTEDSEMAPHORE_H


#import <Foundation/Foundation.h>


@interface _SYCountedSemaphore : NSObject {
    uint8_t _sem_port;
    uint8_t _count;
    uint8_t _signals;
    uint8_t _invalidated;
}




-(BOOL)_waitSemaphoreWithTimeout:(CGFloat)arg0 ;
-(BOOL)waitWithTimeout:(CGFloat)arg0 ;
-(id)init;
-(id)initWithCount:(NSInteger)arg0 ;
-(void)_ensureSemaphore;
-(void)_signalSemaphore;
-(void)invalidate;
-(void)signal;


@end


#endif