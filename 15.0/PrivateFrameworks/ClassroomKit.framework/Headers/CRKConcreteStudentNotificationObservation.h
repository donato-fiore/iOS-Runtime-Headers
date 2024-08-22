// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCONCRETESTUDENTNOTIFICATIONOBSERVATION_H
#define CRKCONCRETESTUDENTNOTIFICATIONOBSERVATION_H

@class NSString;
@protocol CRKObservation;

#import <Foundation/Foundation.h>


@interface CRKConcreteStudentNotificationObservation : NSObject <CRKObservation>



@property (copy, nonatomic) id *notificationHandler; // ivar: _notificationHandler
@property (readonly, copy, nonatomic) NSString *notificationName; // ivar: _notificationName


-(id)initWithNotificationName:(id)arg0 notificationHandler:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)receiveNotificationWithName:(id)arg0 userInfo:(id)arg1 ;


@end


#endif