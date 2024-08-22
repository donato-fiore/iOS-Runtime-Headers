// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCDISPATCHTIMER_H
#define PCDISPATCHTIMER_H

@class NSDate, CUTWeakReference;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PCDispatchTimer : NSObject {
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _fireTime;
    NSDate *_fireDate;
    CUTWeakReference *_target;
    SEL _selector;
    BOOL _isValid;
}


@property (retain, nonatomic) NSDate *fireDate;
@property (readonly, nonatomic) BOOL isValid;


-(id)initWithQueue:(id)arg0 target:(id)arg1 selector:(SEL)arg2 fireTime:(NSUInteger)arg3 ;
-(void)_callTarget;
-(void)_cleanupTimer;
-(void)dealloc;
-(void)invalidate;
-(void)start;


@end


#endif