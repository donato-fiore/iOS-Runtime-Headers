// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIADESTINATIONCONTROLLERSTAGEDDESTINATIONIDENTIFIERCOMMITTEDEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERSTAGEDDESTINATIONIDENTIFIERCOMMITTEDEVENT_H

@class NSString, NSDictionary, NSUUID;
@protocol HMMCoreAnalyticsLogging;


#import "HMDMediaDestinationControllerLogEvent.h"

@interface HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent : HMDMediaDestinationControllerLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *stagedDestinationIdentifier; // ivar: _stagedDestinationIdentifier
@property (readonly) Class superclass;


-(id)initWithStagedDestinationIdentifier:(id)arg0 isTriggeredOnControllerDevice:(id)arg1 userPrivilege:(id)arg2 ;


@end


#endif