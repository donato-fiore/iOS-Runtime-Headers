// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASIGNIFICANTEVENTNOTIFICATIONRECORD_H
#define HMDCAMERASIGNIFICANTEVENTNOTIFICATIONRECORD_H

@class HMFObject, NSUUID, NSDate;
@protocol NSCopying;



@interface HMDCameraSignificantEventNotificationRecord : HMFObject <NSCopying>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSDate *date; // ivar: _date
@property (readonly) NSUInteger notificationReasons; // ivar: _notificationReasons


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithUUID:(id)arg0 notificationReasons:(NSUInteger)arg1 date:(id)arg2 ;


@end


#endif