// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WIFIUSAGEACCESSPOINTPROFILE_H
#define WIFIUSAGEACCESSPOINTPROFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WiFiUsageAccessPointProfile : NSObject

@property (retain, nonatomic) NSString *apProfile; // ivar: _apProfile
@property (retain, nonatomic) NSString *bssid; // ivar: _bssid


+(BOOL)_compareBytes:(id)arg0 FromStart:(NSUInteger)arg1 WithLen:(NSUInteger)arg2 With:(id)arg3 ;
+(BOOL)_isProfileValidForStorage:(id)arg0 ;
+(BOOL)_isProfileValidForUse:(id)arg0 withCachedDict:(id)arg1 ;
+(id)_cachedProfile:(id)arg0 ;
+(id)_config;
+(id)_getBinTimeInterval:(CGFloat)arg0 As:(NSUInteger)arg1 ;
+(id)_getDefaults;
+(id)_loadFromUserDefaults:(id)arg0 withKey:(id)arg1 withCachedData:(id)arg2 ;
+(id)_toMobileAssetsProfile:(id)arg0 ;
+(id)apNameForBSSID:(id)arg0 ;
+(id)beacons;
+(id)longProfileForBSSID:(id)arg0 ;
+(id)prefixForCA;
+(id)profileForBSSID:(id)arg0 ;
+(id)profileFromBeaconData:(id)arg0 andParsedIE:(id)arg1 ;
+(id)shortProfileForBSSID:(id)arg0 ;
+(void)_applyMask:(id)arg0 FromStart:(NSUInteger)arg1 WithLen:(NSUInteger)arg2 WithMask:(id)arg3 AppendTo:(id)arg4 ;
+(void)_cleanUpStaleProfiles;
+(void)_defaults;
+(void)_endPrevAssoc;
+(void)_extractFieldsFor:(id)arg0 From:(id)arg1 Into:(id)arg2 ;
+(void)_saveToUserDefaults:(id)arg0 withKey:(id)arg1 andValue:(id)arg2 ;
+(void)_submitProfileFor:(id)arg0 withCachedDict:(id)arg1 AndEraseWithLog:(id)arg2 ;
+(void)initialize;
+(void)setMaxProfiles:(NSUInteger)arg0 ;
+(void)updateConfig;
+(void)updateWithAssocTime:(CGFloat)arg0 forBssid:(id)arg1 ;
+(void)updateWithWPS:(id)arg0 ;


@end


#endif