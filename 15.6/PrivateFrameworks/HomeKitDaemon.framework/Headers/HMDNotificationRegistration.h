// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNOTIFICATIONREGISTRATION_H
#define HMDNOTIFICATIONREGISTRATION_H

@class HMFObject, NSString, NSMutableSet;
@protocol HMFLogging;



@interface HMDNotificationRegistration : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableSet *registeredNotifications; // ivar: _registeredNotifications
@property (readonly, weak, nonatomic) NSObject<HMFLogging> *registerer; // ivar: _registerer
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithRegisterer:(id)arg0 ;
-(id)logIdentifier;
-(void)addObserver:(SEL)arg0 name:(id)arg1 object:(id)arg2 ;


@end


#endif