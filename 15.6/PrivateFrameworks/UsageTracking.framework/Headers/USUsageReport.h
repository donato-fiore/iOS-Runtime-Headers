// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef USUSAGEREPORT_H
#define USUSAGEREPORT_H

@class NSArray, NSDate, NSDateInterval, NSDictionary, NSTimeZone;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USUsageReport : NSObject <NSSecureCoding>



@property (readonly, copy) NSArray *categoryUsage; // ivar: _categoryUsage
@property (readonly, copy) NSDate *firstPickup; // ivar: _firstPickup
@property (readonly, copy) NSDateInterval *interval; // ivar: _interval
@property (readonly, copy) NSDate *lastEventDate; // ivar: _lastEventDate
@property (readonly, copy) NSDateInterval *longestSession; // ivar: _longestSession
@property (readonly, copy) NSDictionary *pickupsByBundleIdentifier;
@property (readonly) NSUInteger pickupsWithoutApplicationUsage; // ivar: _pickupsWithoutApplicationUsage
@property (readonly) CGFloat screenTime; // ivar: _screenTime
@property (readonly, copy) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly, copy) NSDictionary *userNotificationsByBundleIdentifier;


+(BOOL)supportsSecureCoding;
-(id)_addNotifications:(id)arg0 andPickups:(id)arg1 toApplicationUsageInCategoryUsage:(id)arg2 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScreenTime:(CGFloat)arg0 longestSession:(id)arg1 categoryUsage:(id)arg2 notifications:(id)arg3 pickupsByBundleIdentifier:(id)arg4 pickupsWithoutApplicationUsage:(NSUInteger)arg5 firstPickup:(id)arg6 interval:(id)arg7 timeZone:(id)arg8 lastEventDate:(id)arg9 ;
-(id)initWithScreenTime:(CGFloat)arg0 longestSession:(id)arg1 categoryUsage:(id)arg2 pickupsWithoutApplicationUsage:(NSUInteger)arg3 firstPickup:(id)arg4 interval:(id)arg5 timeZone:(id)arg6 lastEventDate:(id)arg7 ;
-(void)_usUsageReportCommonInitWithScreenTime:(CGFloat)arg0 longestSession:(id)arg1 categoryUsage:(id)arg2 pickupsWithoutApplicationUsage:(NSUInteger)arg3 firstPickup:(id)arg4 interval:(id)arg5 timeZone:(id)arg6 lastEventDate:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif