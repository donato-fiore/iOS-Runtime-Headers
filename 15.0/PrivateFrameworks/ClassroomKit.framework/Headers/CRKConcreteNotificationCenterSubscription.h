// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCONCRETENOTIFICATIONCENTERSUBSCRIPTION_H
#define CRKCONCRETENOTIFICATIONCENTERSUBSCRIPTION_H

@class NSNotificationCenter;
@protocol CRKCancelable;

#import <Foundation/Foundation.h>


@interface CRKConcreteNotificationCenterSubscription : NSObject <CRKCancelable>



@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (copy) id *notificationHandler; // ivar: _notificationHandler


+(id)subscriptionWithNotificationCenter:(id)arg0 notificationName:(id)arg1 notificationHandler:(id)arg2 ;
-(id)initWithNotificationCenter:(id)arg0 notificationHandler:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)notificationDidFire:(id)arg0 ;


@end


#endif