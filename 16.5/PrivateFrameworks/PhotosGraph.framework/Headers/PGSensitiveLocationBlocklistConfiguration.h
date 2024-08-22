// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSENSITIVELOCATIONBLOCKLISTCONFIGURATION_H
#define PGSENSITIVELOCATIONBLOCKLISTCONFIGURATION_H

@class NSArray;


#import "PGConfiguration.h"

@interface PGSensitiveLocationBlocklistConfiguration : PGConfiguration

@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius
@property (readonly, nonatomic) NSArray *sensitiveDateIntervals; // ivar: _sensitiveDateIntervals


+(BOOL)dateInterval:(id)arg0 intersectsSensitiveDateIntervals:(id)arg1 ;
+(BOOL)isAssetAtSensitiveLocationAndDate:(id)arg0 ;
+(BOOL)isSensitiveLocation:(id)arg0 duringDateInterval:(id)arg1 ;
+(id)dateFormatter;
+(id)obfuscatedBlocklistFromUnobfuscatedBlocklist:(id)arg0 ;
+(id)resolveConfigurationDictionary:(id)arg0 ;
+(id)sensitiveLocationBlocklist;
+(id)sensitiveLocationBlocklistConfigurations;
+(id)sensitiveLocationBlocklistConfigurationsLocal;
+(id)sensitiveLocationBlocklistLocal;
+(id)unobfuscatedBlocklistFromObfuscatedBlocklist:(id)arg0 ;
-(id)initWithConfigurationDictionary:(id)arg0 ;


@end


#endif