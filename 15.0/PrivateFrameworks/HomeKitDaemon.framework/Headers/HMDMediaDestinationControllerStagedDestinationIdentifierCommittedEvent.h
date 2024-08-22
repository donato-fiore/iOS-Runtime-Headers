// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMEDIADESTINATIONCONTROLLERSTAGEDDESTINATIONIDENTIFIERCOMMITTEDEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERSTAGEDDESTINATIONIDENTIFIERCOMMITTEDEVENT_H

@class NSString, NSUUID;
@protocol HMMCoreAnalyticsLogging;


#import "HMDMediaDestinationControllerLogEvent.h"

@interface HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent : HMDMediaDestinationControllerLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSUUID *stagedDestinationIdentifier; // ivar: _stagedDestinationIdentifier


-(id)eventName;
-(id)initWithStagedDestinationIdentifier:(id)arg0 isTriggeredOnControllerDevice:(id)arg1 userPrivilege:(id)arg2 ;
-(id)serializedEvent;


@end


#endif