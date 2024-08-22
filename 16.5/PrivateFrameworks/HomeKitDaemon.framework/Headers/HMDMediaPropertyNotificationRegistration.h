// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMEDIAPROPERTYNOTIFICATIONREGISTRATION_H
#define HMDMEDIAPROPERTYNOTIFICATIONREGISTRATION_H

@class HMFObject, NSString, NSDate, NSUUID;



@interface HMDMediaPropertyNotificationRegistration : HMFObject

@property (readonly, copy) NSString *deviceIdsDestination; // ivar: _deviceIdsDestination
@property (readonly) NSDate *lastModified; // ivar: _lastModified
@property (readonly) NSUUID *mediaProfileUniqueIdentifier; // ivar: _mediaProfileUniqueIdentifier
@property (readonly, copy) NSString *mediaProperty; // ivar: _mediaProperty
@property (readonly) NSUUID *userUUID; // ivar: _userUUID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMediaProfileUniqueIdentifier:(id)arg0 mediaProperty:(id)arg1 deviceIdsDestination:(id)arg2 userUUID:(id)arg3 lastModified:(id)arg4 ;


@end


#endif