// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDOORBELLBULLETINUTILITIES_H
#define HMDDOORBELLBULLETINUTILITIES_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDDoorbellBulletinUtilities;



@interface HMDDoorbellBulletinUtilities : HMFObject <HMFLogging, HMDDoorbellBulletinUtilities>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_localizedDoorbellMessageForSignificantEvents:(id)arg0 forAudioAccessory:(BOOL)arg1 ;
+(id)_significantEventsWithinTimeWindowOfDoorbellPress:(id)arg0 forCameraProfile:(id)arg1 ;
+(id)clipUUIDsForCoalesceableSignificantEvents:(id)arg0 ;
+(id)faceClassificationsNearDateOfDoorbellPress:(id)arg0 forCameraProfile:(id)arg1 ;
+(id)localizedAudioAccessoryAnnounceMessageForSignificantEvents:(id)arg0 ;
+(id)localizedDoorbellMessageForSignificantEvents:(id)arg0 ;
+(id)localizedMessageForCharacteristic:(id)arg0 ;
+(id)logCategory;
+(id)significantEventsRelevantToDoorbellPress:(id)arg0 forCameraProfile:(id)arg1 ;


@end


#endif