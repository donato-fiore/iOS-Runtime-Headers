// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKDARWINNOTIFICATIONCENTER_H
#define NTKDARWINNOTIFICATIONCENTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NTKDarwinNotificationCenter : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSMutableDictionary *observersByNotificationName; // ivar: _observersByNotificationName


+(id)defaultCenter;
+(void)postNotification:(id)arg0 ;
-(id)init;
-(void)_addObserver:(id)arg0 ;
-(void)_registerForNotificationName:(id)arg0 ;
-(void)_unregisterForNotificationNameIfNeeded:(id)arg0 ;
-(void)addObserver:(id)arg0 notificationName:(id)arg1 selector:(SEL)arg2 ;
-(void)addObserver:(id)arg0 notificationName:(id)arg1 usingBlock:(id)arg2 ;
-(void)handleDarwinNotification:(id)arg0 ;
-(void)removeObserver:(id)arg0 notificationName:(id)arg1 ;


@end


#endif