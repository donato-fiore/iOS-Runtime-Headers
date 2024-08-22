// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCONCRETENOTIFICATIONCENTERSUBSCRIPTION_H
#define CRKCONCRETENOTIFICATIONCENTERSUBSCRIPTION_H

@class NSNotificationCenter;
@protocol CRKCancelable;

#import <Foundation/Foundation.h>


@interface CRKConcreteNotificationCenterSubscription : NSObject <CRKCancelable>



@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (copy) id *notificationHandler; // ivar: _notificationHandler
@property (retain, nonatomic) id *object; // ivar: _object


+(id)subscriptionWithNotificationCenter:(id)arg0 notificationName:(id)arg1 object:(id)arg2 notificationHandler:(id)arg3 ;
-(id)initWithNotificationCenter:(id)arg0 object:(id)arg1 notificationHandler:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)notificationDidFire:(id)arg0 ;


@end


#endif