// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASIGNIFICANTEVENTNOTIFICATIONFILTER_H
#define HMDCAMERASIGNIFICANTEVENTNOTIFICATIONFILTER_H

@class HMFObject, NSMutableDictionary;



@interface HMDCameraSignificantEventNotificationFilter : HMFObject

@property (readonly, nonatomic) NSMutableDictionary *cloudSignificantEventsByUUID; // ivar: _cloudSignificantEventsByUUID
@property (readonly, nonatomic) NSMutableDictionary *primaryResidentSignificantEventDatesByUUID; // ivar: _primaryResidentSignificantEventDatesByUUID


+(BOOL)isRelevantSignificantEventDate:(id)arg0 ;
-(BOOL)_isSignificantEventRelevantWithUUID:(id)arg0 isFromPrimary:(BOOL)arg1 ;
-(BOOL)consumePrimaryResidentSignificantEventWithUUID:(id)arg0 ;
-(id)consumeCloudSignificantEventWithUUID:(id)arg0 ;
-(id)init;
-(void)_pruneCloudSignificantEvents;
-(void)_prunePrimaryResidentSignificantEvents;
-(void)addIncomingCloudSignificantEvent:(id)arg0 ;
-(void)addIncomingPrimaryResidentSignificantEventNotificationWithUUID:(id)arg0 date:(id)arg1 ;


@end


#endif