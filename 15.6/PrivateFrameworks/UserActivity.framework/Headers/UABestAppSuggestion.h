// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UABESTAPPSUGGESTION_H
#define UABESTAPPSUGGESTION_H

@class NSString, NSDate, NSDictionary, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UABestAppSuggestion : NSObject <NSSecureCoding>



@property (copy) NSString *activityType; // ivar: _activityType
@property (readonly, copy) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly) CGFloat confidence; // ivar: _confidence
@property (readonly, copy) NSString *dynamicIdentifier; // ivar: _dynamicIdentifier
@property (readonly) BOOL isActive; // ivar: _isActive
@property (readonly, copy) NSDate *lastActiveTime; // ivar: _lastActiveTime
@property (readonly, copy) NSDate *lastUpdateTime; // ivar: _lastUpdateTime
@property (readonly, copy) NSDictionary *options; // ivar: _options
@property (readonly, copy) NSString *originatingDeviceIdentifier; // ivar: _originatingDeviceIdentifier
@property (readonly, copy) NSString *originatingDeviceName; // ivar: _originatingDeviceName
@property (readonly, copy) NSString *originatingDeviceType; // ivar: _originatingDeviceType
@property (readonly) NSUInteger type; // ivar: _type
@property (copy) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, copy) NSString *userActivityTypeIdentifier;
@property (readonly, copy) NSDate *when;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 uuid:(id)arg1 activityType:(id)arg2 dynamicIdentifier:(id)arg3 lastUpdateTime:(id)arg4 lastActiveTime:(id)arg5 type:(NSUInteger)arg6 deviceName:(id)arg7 deviceIdentifier:(id)arg8 deviceType:(id)arg9 options:(id)arg10 isActive:(BOOL)arg11 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif