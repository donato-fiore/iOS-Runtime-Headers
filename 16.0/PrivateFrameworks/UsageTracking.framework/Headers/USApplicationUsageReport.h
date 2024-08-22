// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USAPPLICATIONUSAGEREPORT_H
#define USAPPLICATIONUSAGEREPORT_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USApplicationUsageReport : NSObject <NSSecureCoding>



@property (readonly, copy) NSDictionary *applicationUsageByBundleIdentifier; // ivar: _applicationUsageByBundleIdentifier
@property (readonly) CGFloat applicationUsageTime;
@property (readonly) BOOL applicationUsageTrusted; // ivar: _applicationUsageTrusted
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *canonicalBundleIdentifier; // ivar: _canonicalBundleIdentifier
@property (copy) NSDictionary *pickupsByBundleIdentifier; // ivar: _pickupsByBundleIdentifier
@property (readonly) NSUInteger totalPickups;
@property (readonly) CGFloat totalUsageTime; // ivar: _totalUsageTime
@property (readonly) NSUInteger totalUserNotifications;
@property (copy) NSDictionary *userNotificationsByBundleIdentifier; // ivar: _userNotificationsByBundleIdentifier
@property (readonly, copy) NSDictionary *webUsageByDomain; // ivar: _webUsageByDomain


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 totalUsageTime:(CGFloat)arg1 applicationUsageTime:(CGFloat)arg2 webUsageByDomain:(id)arg3 ;
-(id)initWithCanonicalBundleIdentifier:(id)arg0 applicationUsageTrusted:(BOOL)arg1 totalUsageTime:(CGFloat)arg2 applicationUsageByBundleIdentifier:(id)arg3 webUsageByDomain:(id)arg4 userNotificationsByBundleIdentifier:(id)arg5 pickupsByBundleIdentifier:(id)arg6 ;
-(id)initWithCanonicalBundleIdentifier:(id)arg0 totalUsageTime:(CGFloat)arg1 applicationUsageByBundleIdentifier:(id)arg2 webUsageByDomain:(id)arg3 userNotificationsByBundleIdentifier:(id)arg4 pickupsByBundleIdentifier:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_usApplicationUsageReportCommonInitWithCanonicalBundleIdentifier:(id)arg0 applicationUsageTrusted:(BOOL)arg1 totalUsageTime:(CGFloat)arg2 applicationUsageByBundleIdentifier:(id)arg3 webUsageByDomain:(id)arg4 userNotificationsByBundleIdentifier:(id)arg5 pickupsByBundleIdentifier:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif