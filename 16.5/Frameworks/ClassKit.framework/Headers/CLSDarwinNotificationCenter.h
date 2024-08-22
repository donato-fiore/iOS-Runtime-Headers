// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSDARWINNOTIFICATIONCENTER_H
#define CLSDARWINNOTIFICATIONCENTER_H

@class NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CLSDarwinNotificationCenter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_notificationsByName;
    NSMapTable *_notificationsByObserver;
    NSMapTable *_tokenByName;
    NSMapTable *_observerByHash;
}




+(id)defaultCenter;
-(id)init;
-(void)addObserver:(id)arg0 notificationName:(id)arg1 block:(id)arg2 ;
-(void)handleObserverRemoval;
-(void)postLocalNotificationName:(id)arg0 ;
-(void)postNotificationName:(id)arg0 ;
-(void)removeObserver:(id)arg0 notificationName:(id)arg1 ;
-(void)unregisterFromDarwinNotification:(id)arg0 ;


@end


#endif