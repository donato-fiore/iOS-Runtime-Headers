// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSUSAGEDATA_H
#define NSSUSAGEDATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface NSSUsageData : NSObject

@property (readonly, retain, nonatomic) NSArray *appBundleUsage; // ivar: _appBundleUsage
@property (readonly, nonatomic) NSUInteger availableStorageInBytes; // ivar: _availableStorageInBytes
@property (readonly, nonatomic) NSUInteger capacityInBytes; // ivar: _capacityInBytes
@property (readonly, retain, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, nonatomic) BOOL partiallyCharged; // ivar: _partiallyCharged
@property (readonly, nonatomic) float standbyTimeInSeconds; // ivar: _standbyTimeInSeconds
@property (readonly, nonatomic) BOOL trusted; // ivar: _trusted
@property (readonly, nonatomic) float usageTimeInSeconds; // ivar: _usageTimeInSeconds
@property (readonly, nonatomic) NSUInteger usedStorageInBytes; // ivar: _usedStorageInBytes


+(id)createLegacyUsageDictionary:(id)arg0 ;
+(id)createNSSUsageApp:(id)arg0 ;
+(id)createNSSUsageBundle:(id)arg0 ;
+(id)dedupeBundles:(id)arg0 ;
+(id)newAppBundleFromAppBundleMsg:(id)arg0 ;
+(id)newAppBundleFromAppUsageMsg:(id)arg0 ;
+(id)newAppBundleFromBundleUsageMsg:(id)arg0 ;
+(id)newAppBundleMsgFrom:(id)arg0 ;
+(id)newMsgFromSize:(id)arg0 ;
+(id)newSizeCategoryMsgFrom:(id)arg0 ;
+(id)newSizeFromMsg:(id)arg0 ;
+(id)newUsageDataFromUsageRespMsg:(id)arg0 ;
+(id)newUsageRespMsgFrom:(id)arg0 ;
+(id)setUsageRespMsgFrom:(id)arg0 usageRespMsg:(id)arg1 ;
-(id)initWithCapacity:(NSUInteger)arg0 usedStorageInBytes:(NSUInteger)arg1 available:(NSUInteger)arg2 usageTimeInSeconds:(float)arg3 standbyTimeInSeconds:(float)arg4 trusted:(BOOL)arg5 partiallyCharged:(BOOL)arg6 appBundleUsage:(id)arg7 categories:(id)arg8 ;
-(id)initWithUsed:(NSUInteger)arg0 available:(NSUInteger)arg1 usageTimeInSeconds:(float)arg2 standbyTimeInSeconds:(float)arg3 trusted:(BOOL)arg4 partiallyCharged:(BOOL)arg5 appBundleUsage:(id)arg6 categories:(id)arg7 ;


@end


#endif