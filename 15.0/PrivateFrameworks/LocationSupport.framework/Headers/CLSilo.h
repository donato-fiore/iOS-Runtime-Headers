// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSILO_H
#define CLSILO_H

@class NSMutableSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CLSilo : NSObject <NSCopying>

 {
    BOOL _isIdle;
    CGFloat _lastIdleCheck;
    NSMutableSet *_idleHandlers;
    os_unfair_lock_s _idleHandlersLock;
    CGFloat _currentLatchedAbsoluteTimestamp;
}


@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


+(id)globalConfiguration;
+(id)main;
+(void)setGlobalConfiguration:(id)arg0 ;
-(BOOL)isSuspended;
-(BOOL)shouldBeIdled;
-(CGFloat)currentLatchedAbsoluteTimestamp;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithIdentifier:(id)arg0 ;
-(id)newTimer;
// -(id)registerForIdleNotifications:(id)arg0 onResume:(unk)arg1  ;
-(void)afterInterval:(CGFloat)arg0 async:(id)arg1 ;
-(void)assertInside;
-(void)assertOutside;
-(void)async:(id)arg0 ;
-(void)heartBeat:(id)arg0 ;
-(void)prepareAndRunBlock:(id)arg0 ;
-(void)resume;
-(void)runIdleHandlers;
-(void)runResumeHandlers;
-(void)suspend;
-(void)sync:(id)arg0 ;
-(void)unregisterForIdleNotifications:(id)arg0 ;


@end


#endif