// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSDISTRIBUTEDNOTIFICATIONCENTER_H
#define NSDISTRIBUTEDNOTIFICATIONCENTER_H



#import "NSNotificationCenter.h"

@interface NSDistributedNotificationCenter : NSNotificationCenter

@property BOOL suspended;


+(id)defaultCenter;
+(id)notificationCenterForType:(id)arg0 ;
-(id)addObserverForName:(id)arg0 object:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3 ;
-(id)addObserverForName:(id)arg0 object:(id)arg1 suspensionBehavior:(NSUInteger)arg2 queue:(id)arg3 usingBlock:(id)arg4 ;
-(id)init;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2 object:(id)arg3 suspensionBehavior:(NSUInteger)arg4 ;
-(void)postNotification:(id)arg0 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 deliverImmediately:(BOOL)arg3 ;
-(void)postNotificationName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 options:(NSUInteger)arg3 ;
-(void)removeObserver:(id)arg0 name:(id)arg1 object:(id)arg2 ;


@end


#endif