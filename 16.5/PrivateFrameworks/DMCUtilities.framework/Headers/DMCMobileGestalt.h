// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCMOBILEGESTALT_H
#define DMCMOBILEGESTALT_H


#import <Foundation/Foundation.h>


@interface DMCMobileGestalt : NSObject



+(BOOL)hasCellularDataCapability;
+(BOOL)hasInternetTetheringCapability;
+(BOOL)hasTelephonyCapability;
+(BOOL)isAppleTV;
+(BOOL)isHomePod;
+(BOOL)isPad;
+(BOOL)isPhone;
+(BOOL)isWatch;
+(id)_overridableGestaltForKey:(struct __CFString *)arg0 expectedClass:(Class)arg1 ;
+(id)availableCapacity;
+(id)buildVersion;
+(id)deviceCapacity;
+(id)deviceClass;
+(id)deviceColor;
+(id)deviceUDID;
+(id)diskCapacity;
+(id)diskUsage;
+(id)marketingVersion;
+(id)modelNumber;
+(id)productName;
+(id)productType;
+(id)regionCode;
+(id)regionInfo;
+(id)serialNumber;
+(id)supplementalBuildVersion;
+(id)supplementalMarketingVersion;
+(id)supplementalMarketingVersionExtra;


@end


#endif