// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIADESTINATIONCONTROLLERSTAGEDDESTINATIONIDENTIFIERCOMMITTEDEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERSTAGEDDESTINATIONIDENTIFIERCOMMITTEDEVENT_H

@class NSString, NSDictionary, NSUUID;
@protocol HMMCoreAnalyticsLogging;


#import "HMDMediaDestinationControllerLogEvent.h"

@interface HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent : HMDMediaDestinationControllerLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, copy) NSUUID *stagedDestinationIdentifier; // ivar: _stagedDestinationIdentifier


-(id)initWithStagedDestinationIdentifier:(id)arg0 isTriggeredOnControllerDevice:(id)arg1 userPrivilege:(id)arg2 ;


@end


#endif