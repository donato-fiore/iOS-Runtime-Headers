// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMTIMER_H
#define IMTIMER_H

@class NSString, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMTimer : NSObject {
    id *_timer;
    id *_target;
    NSString *_name;
    CGFloat _timeInterval;
    NSObject<OS_dispatch_queue> *_queue;
    SEL _selector;
    BOOL _wakeDevice;
    BOOL _useCurrentRunLoop;
}


@property (readonly, retain, nonatomic) NSDate *fireDate;
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


-(id)_initWithTimeInterval:(CGFloat)arg0 name:(id)arg1 shouldWake:(BOOL)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 useCurrentRunLoop:(BOOL)arg6 queue:(id)arg7 ;
-(id)initWithTimeInterval:(CGFloat)arg0 name:(id)arg1 shouldWake:(BOOL)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 ;
-(id)initWithTimeInterval:(CGFloat)arg0 name:(id)arg1 shouldWake:(BOOL)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 queue:(id)arg6 ;
-(id)initWithTimeInterval:(CGFloat)arg0 name:(id)arg1 shouldWake:(BOOL)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 useCurrentRunLoop:(BOOL)arg6 ;
-(void)_reschedulePCPersistentTimer;
-(void)dealloc;
-(void)invalidate;
-(void)setFireTimeInterval:(CGFloat)arg0 ;


@end


#endif