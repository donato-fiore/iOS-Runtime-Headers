// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCHARACTERISTICNOTIFICATIONREGISTRATION_H
#define HMDCHARACTERISTICNOTIFICATIONREGISTRATION_H

@class HMFObject, NSUUID, NSNumber, NSString, NSDate;



@interface HMDCharacteristicNotificationRegistration : HMFObject

@property (readonly) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly) NSNumber *characteristicInstanceID; // ivar: _characteristicInstanceID
@property (readonly, copy) NSString *deviceIdsDestination; // ivar: _deviceIdsDestination
@property (readonly) NSDate *lastModified; // ivar: _lastModified
@property (readonly) NSUUID *userUUID; // ivar: _userUUID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessoryUUID:(id)arg0 characteristicInstanceID:(id)arg1 deviceIdsDestination:(id)arg2 userUUID:(id)arg3 lastModified:(id)arg4 ;


@end


#endif