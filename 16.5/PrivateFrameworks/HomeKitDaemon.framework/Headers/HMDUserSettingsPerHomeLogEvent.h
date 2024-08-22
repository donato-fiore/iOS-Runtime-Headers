// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERSETTINGSPERHOMELOGEVENT_H
#define HMDUSERSETTINGSPERHOMELOGEVENT_H

@class HMMHomeLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDUserSettingsPerHomeLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) NSUInteger camerasAccessLevel; // ivar: _camerasAccessLevel
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isAdmin; // ivar: _isAdmin
@property (readonly) BOOL isAnnounceAccessAllowed; // ivar: _isAnnounceAccessAllowed
@property (readonly) BOOL isOwner; // ivar: _isOwner
@property (readonly) BOOL isPersonalRequestsEnabled; // ivar: _isPersonalRequestsEnabled
@property (readonly) BOOL isRecognizeMyVoiceEnabled; // ivar: _isRecognizeMyVoiceEnabled
@property (readonly) BOOL isRemoteAccessAllowed; // ivar: _isRemoteAccessAllowed
@property (readonly) Class superclass;


-(id)initWithUser:(id)arg0 ;
-(id)initWithUser:(id)arg0 userDataController:(id)arg1 homeUUID:(id)arg2 ;
-(id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;


@end


#endif