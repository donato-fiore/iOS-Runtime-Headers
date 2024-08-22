// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTDEVICEDATAUSAGE_H
#define CTDEVICEDATAUSAGE_H

@class NSMutableDictionary, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDeviceDataUsage : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSMutableDictionary *apps; // ivar: _apps
@property NSUInteger periods; // ivar: _periods
@property (retain) NSMutableDictionary *proxiedOnlyApps; // ivar: _proxiedOnlyApps
@property (retain) NSMutableDictionary *systemServices; // ivar: _systemServices
@property (retain) NSMutableDictionary *uninstalledApps; // ivar: _uninstalledApps
@property (retain) NSArray *wifiAssist; // ivar: _wifiAssist


+(BOOL)supportsSecureCoding;
-(id)appDataUsageForPeriod:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataUsage:(id)arg0 forPeriod:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)proxiedOnlyAppDataUsageForPeriod:(NSUInteger)arg0 ;
-(id)systemServiceDataUsageForPeriod:(NSUInteger)arg0 ;
-(id)totalAppDataUsedForPeriod:(NSUInteger)arg0 ;
-(id)totalDataUsage:(id)arg0 forPeriod:(NSUInteger)arg1 ;
-(id)totalDataUsedForPeriod:(NSUInteger)arg0 ;
-(id)totalProxiedOnlyAppDataUsedForPeriod:(NSUInteger)arg0 ;
-(id)totalSystemServiceDataUsedForPeriod:(NSUInteger)arg0 ;
-(id)totalUninstalledAppDataUsedForPeriod:(NSUInteger)arg0 ;
-(id)totalWifiAssistUsageForPeriod:(NSUInteger)arg0 ;
-(id)uninstalledAppDataUsageForPeriod:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif