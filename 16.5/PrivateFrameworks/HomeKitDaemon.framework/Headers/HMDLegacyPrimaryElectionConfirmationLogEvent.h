// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLEGACYPRIMARYELECTIONCONFIRMATIONLOGEVENT_H
#define HMDLEGACYPRIMARYELECTIONCONFIRMATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDLegacyPrimaryElectionConfirmationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property NSUInteger availableResidentCount; // ivar: _availableResidentCount
@property BOOL changedPrimary; // ivar: _changedPrimary
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (copy) NSString *criteria; // ivar: _criteria
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSUInteger residentsRespondedCount; // ivar: _residentsRespondedCount
@property (readonly) Class superclass;


-(id)init;


@end


#endif