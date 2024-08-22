// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPRESENCENOTIFICATIONCONDITIONHANDLER_H
#define HMDPRESENCENOTIFICATIONCONDITIONHANDLER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDNotificationConditionHandler, HMDPresenceNotificationConditionPresenceProvider;


#import "HMDHome.h"

@interface HMDPresenceNotificationConditionHandler : HMFObject <HMFLogging, HMDNotificationConditionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) NSObject<HMDPresenceNotificationConditionPresenceProvider> *presenceProvider; // ivar: _presenceProvider
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)canHandleCondition:(id)arg0 ;
-(BOOL)conditionPasses:(id)arg0 registrationUser:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 presenceProvider:(id)arg1 ;


@end


#endif