// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERCLOUDSHAREOWNERADOPTIONDAILYEVENT_H
#define HMDUSERCLOUDSHAREOWNERADOPTIONDAILYEVENT_H

@class NSString, NSNumber;
@protocol HMMCoreAnalyticsLogging;


#import "HMDCloudShareTrustManagerLogEvent.h"

@interface HMDUserCloudShareOwnerAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSNumber *configureState; // ivar: _configureState
@property (readonly, copy) NSNumber *hasSharedUser; // ivar: _hasSharedUser
@property (readonly, copy) NSNumber *isPrimaryResident; // ivar: _isPrimaryResident
@property (readonly, copy) NSNumber *percentageOfAcceptedParticipantsWithoutCloudShareID; // ivar: _percentageOfAcceptedParticipantsWithoutCloudShareID
@property (readonly, copy) NSNumber *percentageOfNonAcceptedParticipantsWithKnownCapability; // ivar: _percentageOfNonAcceptedParticipantsWithKnownCapability
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveAccepted; // ivar: _percentageOfParticipantsHaveAccepted
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDAndHaveAccepted; // ivar: _percentageOfParticipantsHaveCloudShareIDAndHaveAccepted
@property (readonly, copy) NSNumber *percentageOfParticipantsHaveCloudShareIDButNotAccepted; // ivar: _percentageOfParticipantsHaveCloudShareIDButNotAccepted
@property (readonly, copy) NSNumber *percentageOfParticipatingUsersThatNotAccepted; // ivar: _percentageOfParticipatingUsersThatNotAccepted
@property (readonly, copy) NSNumber *percentageOfUsersThatAreNotParticipant; // ivar: _percentageOfUsersThatAreNotParticipant


-(id)eventName;
-(id)initWithConfigureState:(NSInteger)arg0 isPrimaryResident:(BOOL)arg1 trustStatusCounts:(struct CloudShareTrustManagerTrustStatusCounts )arg2 ;
-(id)serializedEvent;


@end


#endif