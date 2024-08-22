// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERCLOUDSHAREPARTICIPANTADOPTIONDAILYEVENT_H
#define HMDUSERCLOUDSHAREPARTICIPANTADOPTIONDAILYEVENT_H

@class NSString, NSNumber, NSDictionary;
@protocol HMMCoreAnalyticsLogging;


#import "HMDCloudShareTrustManagerLogEvent.h"

@interface HMDUserCloudShareParticipantAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *configureState; // ivar: _configureState
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSNumber *hasOwnerCloudShareID; // ivar: _hasOwnerCloudShareID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfigureState:(NSInteger)arg0 hasOwnerCloudShareID:(BOOL)arg1 ;


@end


#endif