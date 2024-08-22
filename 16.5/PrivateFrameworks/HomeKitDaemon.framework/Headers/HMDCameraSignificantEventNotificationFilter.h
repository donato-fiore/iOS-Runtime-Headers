// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASIGNIFICANTEVENTNOTIFICATIONFILTER_H
#define HMDCAMERASIGNIFICANTEVENTNOTIFICATIONFILTER_H

@class HMFObject, NSMutableDictionary;



@interface HMDCameraSignificantEventNotificationFilter : HMFObject

@property (readonly, nonatomic) NSMutableDictionary *cloudSignificantEventsByUUID; // ivar: _cloudSignificantEventsByUUID
@property (readonly, nonatomic) NSMutableDictionary *primaryResidentSignificantEventNotificationsByUUID; // ivar: _primaryResidentSignificantEventNotificationsByUUID


+(BOOL)isRelevantSignificantEventDate:(id)arg0 ;
-(BOOL)_isSignificantEventRelevantWithUUID:(id)arg0 isFromPrimary:(BOOL)arg1 ;
-(id)consumeCloudSignificantEventWithUUID:(id)arg0 ;
-(id)consumePrimaryResidentSignificantEventWithUUID:(id)arg0 ;
-(id)init;
-(void)_pruneCloudSignificantEvents;
-(void)_prunePrimaryResidentSignificantEvents;
-(void)addIncomingCloudSignificantEvent:(id)arg0 ;
-(void)addIncomingPrimaryResidentSignificantEventNotificationWithUUID:(id)arg0 notificationReasons:(NSUInteger)arg1 date:(id)arg2 ;


@end


#endif