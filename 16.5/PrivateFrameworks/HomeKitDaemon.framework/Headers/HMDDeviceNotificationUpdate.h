// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEVICENOTIFICATIONUPDATE_H
#define HMDDEVICENOTIFICATIONUPDATE_H

@class HMFObject, NSMutableArray, NSMapTable, NSMutableDictionary, NSArray, NSString;



@interface HMDDeviceNotificationUpdate : HMFObject {
    os_unfair_lock_s _lock;
    NSMutableArray *_notificationsCompletions;
    NSMapTable *_characteristicUpdateTuples;
    NSMutableDictionary *_updatedMediaPropertiesByMediaProfile;
}


@property (readonly, nonatomic) NSArray *characteristicUpdateTuples;
@property (readonly, nonatomic) NSArray *completions;
@property (readonly, nonatomic) NSArray *mediaProperties;
@property (readonly, nonatomic) NSString *notificationUpdateID; // ivar: _notificationUpdateID
@property (readonly, nonatomic) NSString *requestID; // ivar: _requestID


-(id)initWithRequestID:(id)arg0 ;
-(void)_updateWithNotificationUpdateID:(id)arg0 completion:(id)arg1 ;
-(void)updateWithCharacteristicUpdates:(id)arg0 notificationUpdateID:(id)arg1 completion:(id)arg2 ;
-(void)updateWithUpdatedMediaPropertiesByMediaResponses:(id)arg0 notificationUpdateID:(id)arg1 completion:(id)arg2 ;


@end


#endif