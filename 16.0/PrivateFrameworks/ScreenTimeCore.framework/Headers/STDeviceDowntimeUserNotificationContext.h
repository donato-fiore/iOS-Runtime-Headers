// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STDEVICEDOWNTIMEUSERNOTIFICATIONCONTEXT_H
#define STDEVICEDOWNTIMEUSERNOTIFICATIONCONTEXT_H

@class NSString;


#import "STUserNotificationContext.h"

@interface STDeviceDowntimeUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *localizedUserNotificationBodyKey; // ivar: _localizedUserNotificationBodyKey


+(BOOL)supportsSecureCoding;
-(id)destinations;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)notificationBundleIdentifier;
-(void)customizeNotificationContent:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setEndDateComponents:(id)arg0 referenceDate:(id)arg1 ;
-(void)setEndDateComponents:(id)arg0 referenceDate:(id)arg1 locale:(id)arg2 ;


@end


#endif