// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIADESTINATIONCONTROLLERFAILURELOGEVENT_H
#define HMDMEDIADESTINATIONCONTROLLERFAILURELOGEVENT_H

@class NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;


#import "HMDMediaDestinationControllerLogEvent.h"

@interface HMDMediaDestinationControllerFailureLogEvent : HMDMediaDestinationControllerLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *destinationControllerErrorCode; // ivar: _destinationControllerErrorCode
@property (readonly, copy) NSString *errorCode; // ivar: _errorCode
@property (readonly, copy) NSString *errorDomain; // ivar: _errorDomain
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;


-(id)initWithDestinationControllerErrorCode:(id)arg0 errorCode:(id)arg1 errorDomain:(id)arg2 isTriggeredOnControllerDevice:(id)arg3 userPrivilege:(id)arg4 ;


@end


#endif