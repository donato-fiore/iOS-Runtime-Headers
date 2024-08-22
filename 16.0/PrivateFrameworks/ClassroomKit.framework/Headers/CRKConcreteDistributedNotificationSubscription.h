// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETEDISTRIBUTEDNOTIFICATIONSUBSCRIPTION_H
#define CRKCONCRETEDISTRIBUTEDNOTIFICATIONSUBSCRIPTION_H

@class NSString;
@protocol CRKCancelable;

#import <Foundation/Foundation.h>


@interface CRKConcreteDistributedNotificationSubscription : NSObject <CRKCancelable>



@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


-(id)initWithNotificationName:(id)arg0 handler:(id)arg1 ;
-(struct __CFNotificationCenter *)center;
-(void)cancel;
-(void)dealloc;
-(void)notificationDidFire:(id)arg0 ;
-(void)resume;


@end


#endif