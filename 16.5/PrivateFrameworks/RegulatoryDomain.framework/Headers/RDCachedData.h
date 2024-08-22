// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RDCACHEDDATA_H
#define RDCACHEDDATA_H

@class NSString, NSArray, NSMutableDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RDEstimate.h"

@interface RDCachedData : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_countryFromLocation;
    NSString *_countryFromMCC;
    NSString *_countryFromWiFiAPs;
    RDEstimate *_localOnlyEstimate;
    NSArray *_combinedEstimate;
    NSArray *_lastKnownCombinedEstimate;
    NSMutableDictionary *_peerDeviceLocalEstimates;
}




+(BOOL)supportsSecureCoding;
+(id)getCacheDirPath;
+(id)getCacheDirPathForUnitTest;
+(id)getCacheDirPathLegacy;
+(id)getUserPath:(id)arg0 ;
+(id)loadCache;
+(id)loadCache:(BOOL)arg0 ;
+(id)loadCacheForUnitTest;
+(id)sortPreferredOrder:(id)arg0 ;
+(void)createCacheAtPath:(id)arg0 ;
+(void)createCacheDirectoryIfNeeded:(BOOL)arg0 ;
-(BOOL)saveCache;
-(BOOL)saveCache:(BOOL)arg0 ;
-(BOOL)saveCacheForUnitTest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)countryCodeForPriority:(unsigned int)arg0 ;
-(id)description;
-(id)getCombinedEstimate;
-(id)getEstimateForPeerDeviceWithID:(id)arg0 ;
-(id)getLastKnownCombinedEstimate;
-(id)getLocalOnlyEstimate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCountryCodeFromLocation:(id)arg0 fromMCC:(id)arg1 fromWiFi:(id)arg2 localEstimate:(id)arg3 combinedEstimate:(id)arg4 lastKnownCombinedEstimate:(id)arg5 peerEstimates:(id)arg6 ;
-(void)computeLocalCountryCode;
-(void)encodeWithCoder:(id)arg0 ;
-(void)recompute;
-(void)recompute:(BOOL)arg0 ;
-(void)removeEstimateForPeerDeviceWithID:(id)arg0 ;
-(void)removeEstimateForPeerDeviceWithIDForUnitTest:(id)arg0 ;
-(void)setCountryFromLocation:(id)arg0 ;
-(void)setCountryFromLocation:(id)arg0 forUnitTest:(BOOL)arg1 ;
-(void)setCountryFromLocationForUnitTest:(id)arg0 ;
-(void)setCountryFromMCC:(id)arg0 ;
-(void)setCountryFromMCC:(id)arg0 forUnitTest:(BOOL)arg1 ;
-(void)setCountryFromMCCForUnitTest:(id)arg0 ;
-(void)setCountryFromWiFiAPs:(id)arg0 ;
-(void)setCountryFromWiFiAPs:(id)arg0 forUnitTest:(BOOL)arg1 ;
-(void)setCountryFromWiFiAPsForUnitTest:(id)arg0 ;
-(void)setEstimate:(id)arg0 forPeerDeviceWithID:(id)arg1 ;
-(void)setEstimateForUnitTest:(id)arg0 forPeerDeviceWithID:(id)arg1 ;


@end


#endif