// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDOBSERVATIONCENTER_H
#define _CDOBSERVATIONCENTER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface _CDObservationCenter : NSObject {
    NSMapTable *_senderToNotificationObservers;
    NSMapTable *_senderToNotificationObserverObservers;
}




+(id)sharedInstance;
-(NSUInteger)observerCountOnName:(id)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 name:(id)arg1 sender:(id)arg2 queue:(id)arg3 usingBlock:(id)arg4 ;
-(void)addObserver:(id)arg0 name:(id)arg1 sender:(id)arg2 queue:(id)arg3 usingSelector:(SEL)arg4 ;
-(void)addObserverChangesObserver:(id)arg0 onName:(id)arg1 queue:(id)arg2 usingBlock:(id)arg3 ;
-(void)addObserverChangesObserver:(id)arg0 onName:(id)arg1 queue:(id)arg2 usingSelector:(SEL)arg3 ;
-(void)postNotificationName:(id)arg0 userInfo:(id)arg1 sender:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 name:(id)arg1 ;
-(void)removeObserver:(id)arg0 name:(id)arg1 sender:(id)arg2 ;
-(void)removeObserverChangesObserver:(id)arg0 onName:(id)arg1 ;


@end


#endif