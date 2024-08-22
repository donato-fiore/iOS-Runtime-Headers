// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKRUNLOOPTICKET_H
#define TSKRUNLOOPTICKET_H


#import <Foundation/Foundation.h>


@interface TSKRunLoopTicket : NSObject {
    NSInteger _qualityOfService;
    *_opaque_pthread_t _threadId;
    *__CFRunLoop _runLoop;
}


@property (readonly) NSInteger qualityOfService;


-(BOOL)hasRunLoop:(struct __CFRunLoop *)arg0 ;
-(id)initWithQualityOfService:(NSInteger)arg0 ;
-(struct __CFRunLoop *)runLoop;
-(struct _opaque_pthread_t *)threadId;
-(void)setRunLoop:(struct __CFRunLoop *)arg0 ;
-(void)setThreadId:(struct _opaque_pthread_t *)arg0 ;


@end


#endif