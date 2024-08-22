// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDNOTIFICATIONCENTER_H
#define ASDNOTIFICATIONCENTER_H

@class NSMutableDictionary, NSHashTable, NSString;
@protocol ASDServiceProvider, ASDNotificationServiceProtocol, OS_dispatch_queue, ASDNotificationCenterDialogObserver;

#import <Foundation/Foundation.h>


@interface ASDNotificationCenter : NSObject <ASDServiceProvider, ASDNotificationServiceProtocol>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_notificationObservers;
    os_unfair_lock_s _observerLock;
    NSHashTable *_progressObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) NSObject<ASDNotificationCenterDialogObserver> *dialogObserver; // ivar: _dialogObserver
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultCenter;
+(id)interface;
-(id)init;
-(void)addNotificationObserver:(id)arg0 forName:(id)arg1 ;
-(void)addProgressObserver:(id)arg0 ;
-(void)deliverAuthenticateRequest:(id)arg0 withResultHandler:(id)arg1 ;
-(void)deliverDialogRequest:(id)arg0 withResultHandler:(id)arg1 ;
-(void)deliverEngagementRequest:(id)arg0 withResultHandler:(id)arg1 ;
-(void)deliverNotifications:(id)arg0 ;
-(void)deliverProgress:(id)arg0 ;
-(void)deliverViewPresentationRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)isDialogObserverAvailableWithReplyHandler:(id)arg0 ;
-(void)removeNotificationObserver:(id)arg0 forName:(id)arg1 ;
-(void)removeProgressObserver:(id)arg0 ;


@end


#endif