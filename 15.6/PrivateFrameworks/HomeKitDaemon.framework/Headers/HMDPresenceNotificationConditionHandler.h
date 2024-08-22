// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPRESENCENOTIFICATIONCONDITIONHANDLER_H
#define HMDPRESENCENOTIFICATIONCONDITIONHANDLER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDNotificationConditionHandler;


#import "HMDHome.h"

@interface HMDPresenceNotificationConditionHandler : HMFObject <HMFLogging, HMDNotificationConditionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)canHandleCondition:(id)arg0 ;
-(BOOL)conditionPasses:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;


@end


#endif