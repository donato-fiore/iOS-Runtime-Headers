// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPRIVACYPRESERVINGLOCATIONHASH_H
#define ATXPRIVACYPRESERVINGLOCATIONHASH_H


#import <Foundation/Foundation.h>


@interface ATXPrivacyPreservingLocationHash : NSObject



+(NSInteger)dropLastTenBitsOfSHA256Hash:(NSInteger)arg0 ;
+(NSInteger)geohashCollidesWithKnownLocationTypeForGeohash:(NSInteger)arg0 ;
+(NSInteger)preservePrivacyForGeoHash:(NSInteger)arg0 ;
+(NSInteger)privacyPreservingCoarseGeohashForLocation:(id)arg0 locationEnabled:(BOOL)arg1 ;
+(NSInteger)privacyPreservingGeohashForLocation:(id)arg0 locationEnabled:(BOOL)arg1 ;
+(NSInteger)privacyPreservingGeohashForLocation:(id)arg0 locationHashLevel:(int)arg1 locationEnabled:(BOOL)arg2 ;
+(NSInteger)privacyPreservingZoom7GeohashForLocation:(id)arg0 locationEnabled:(BOOL)arg1 ;
+(NSInteger)sha256HashForGeohash:(NSInteger)arg0 salt:(id)arg1 ;
+(id)randomData;
+(id)readDeviceSpecificSalt;
+(id)setSaltToUserDefaults:(id)arg0 scheme:(id)arg1 ;


@end


#endif