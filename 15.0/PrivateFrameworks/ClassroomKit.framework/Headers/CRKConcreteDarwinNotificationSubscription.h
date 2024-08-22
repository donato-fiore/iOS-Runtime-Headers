// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCONCRETEDARWINNOTIFICATIONSUBSCRIPTION_H
#define CRKCONCRETEDARWINNOTIFICATIONSUBSCRIPTION_H

@protocol CRKCancelable;

#import <Foundation/Foundation.h>


@interface CRKConcreteDarwinNotificationSubscription : NSObject <CRKCancelable>



@property (nonatomic) int notificationToken; // ivar: _notificationToken


+(id)subscriptionWithNotificationName:(id)arg0 handler:(id)arg1 ;
-(id)initWithNotificationToken:(int)arg0 ;
-(void)cancel;
-(void)dealloc;


@end


#endif