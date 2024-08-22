// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WIFIUSAGEACCESSPOINTPROFILE_H
#define WIFIUSAGEACCESSPOINTPROFILE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WiFiUsageAccessPointProfile : NSObject

@property (retain, nonatomic) NSString *apProfile; // ivar: _apProfile
@property (retain, nonatomic) NSString *bssid; // ivar: _bssid


+(BOOL)compareBytes:(id)arg0 FromStart:(NSUInteger)arg1 WithLen:(NSUInteger)arg2 With:(id)arg3 ;
+(id)_cachedProfile:(id)arg0 ;
+(id)_loadFromUserDefaults:(id)arg0 withKey:(id)arg1 ;
+(id)config;
+(id)prefixForCA;
+(id)profileForBSSID:(id)arg0 ;
+(id)profileFromBeaconData:(id)arg0 andParsedIE:(id)arg1 ;
+(id)toMobileAssetsProfile:(id)arg0 ;
+(void)_saveToUserDefaults:(id)arg0 withKey:(id)arg1 andValue:(id)arg2 ;
+(void)applyMask:(id)arg0 FromStart:(NSUInteger)arg1 WithLen:(NSUInteger)arg2 WithMask:(id)arg3 AppendTo:(id)arg4 ;
+(void)defaults;
+(void)extractFieldsFor:(id)arg0 From:(id)arg1 Into:(id)arg2 ;
+(void)initialize;
+(void)updateConfig;


@end


#endif