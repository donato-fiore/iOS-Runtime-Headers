// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPNOTIFICATIONMANAGER_H
#define PPNOTIFICATIONMANAGER_H

@class _PASLock, NSNotificationCenter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPNotificationManager : NSObject {
    _PASLock *_lockedData;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSNotificationCenter *_notificationCenter;
}




+(id)addCalendarVisibilityObserverForLifetimeOfObject:(id)arg0 block:(id)arg1 ;
+(id)new;
+(id)sharedInstance;
+(void)addContactsObserverForLifetimeOfObject:(id)arg0 block:(id)arg1 ;
+(void)addEventKitObserverForLifetimeOfObject:(id)arg0 block:(id)arg1 ;
+(void)addMeCardObserverForLifetimeOfObject:(id)arg0 block:(id)arg1 ;
+(void)addPortraitChangeObserverForLifetimeOfObject:(id)arg0 block:(id)arg1 ;
+(void)addPortraitInvalidationObserverForLifetimeOfObject:(id)arg0 block:(id)arg1 ;
+(void)addSuggestionsObserverForLifetimeOfObject:(id)arg0 block:(id)arg1 ;
// -(id)addCalendarVisibilityChangeBlock:(id)arg0 forLifetimeOfObject:(unk)arg1  ;
-(id)init;
-(id)initWithQueueName:(char *)arg0 notificationCenter:(id)arg1 ;
-(void)_registerForEventKitChangeTrackingWithGuardedData:(id)arg0 ;
// -(void)addContactsChangeBlock:(id)arg0 forLifetimeOfObject:(unk)arg1  ;
// -(void)addEventKitChangeBlock:(id)arg0 forLifetimeOfObject:(unk)arg1  ;
// -(void)addMeCardChangeBlock:(id)arg0 forLifetimeOfObject:(unk)arg1  ;
// -(void)addPortraitChangeBlock:(id)arg0 forLifetimeOfObject:(unk)arg1  ;
// -(void)addPortraitInvalidationBlock:(id)arg0 forLifetimeOfObject:(unk)arg1  ;
// -(void)addSuggestionsChangeBlock:(id)arg0 forLifetimeOfObject:(unk)arg1  ;
-(void)dealloc;
-(void)fetchObjectChangesFromStore:(id)arg0 usingBlock:(id)arg1 ;
-(void)setEKStore:(id)arg0 ;
-(void)simulatePortraitChange;
-(void)simulatePortraitInvalidation;
-(void)stopListening;
-(void)waitOnQueueToDrain;


@end


#endif