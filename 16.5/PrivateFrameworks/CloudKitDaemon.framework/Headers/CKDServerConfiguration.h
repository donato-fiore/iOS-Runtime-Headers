// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDSERVERCONFIGURATION_H
#define CKDSERVERCONFIGURATION_H

@class NSMutableDictionary, NSString, NSDate;
@protocol CKPropertyCoding;

#import <Foundation/Foundation.h>


@interface CKDServerConfiguration : NSObject <CKPropertyCoding>



@property (retain, nonatomic) NSMutableDictionary *allowedAppVersionsCache; // ivar: _allowedAppVersionsCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *expiry; // ivar: _expiry
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *values; // ivar: _values


-(BOOL)allowCloudMediaProcessingOffloadForGM:(id)arg0 ;
-(BOOL)allowCloudMediaProcessingOffloadForSeed:(id)arg0 ;
-(BOOL)allowExpiredDNSBehavior:(id)arg0 ;
-(BOOL)applicationWithBundleID:(id)arg0 canSyncUsingVersion:(id)arg1 forContainerID:(id)arg2 ;
-(BOOL)isExpired;
-(CGFloat)publicIdentitiesExpirationTimeout:(id)arg0 ;
-(NSInteger)tokenRegisterDays:(id)arg0 ;
-(NSUInteger)c2AllOperationGroupMetricsReportFrequency:(id)arg0 ;
-(NSUInteger)c2AllOperationGroupMetricsReportFrequencyBase:(id)arg0 ;
-(NSUInteger)c2AllOperationMetricsReportFrequency:(id)arg0 ;
-(NSUInteger)c2AllOperationMetricsReportFrequencyBase:(id)arg0 ;
-(NSUInteger)c2ClientApplicationMetricsReportFrequency:(id)arg0 ;
-(NSUInteger)c2ClientApplicationMetricsReportFrequencyBase:(id)arg0 ;
-(NSUInteger)c2ClientOperationMetricsReportFrequency:(id)arg0 ;
-(NSUInteger)c2ClientOperationMetricsReportFrequencyBase:(id)arg0 ;
-(NSUInteger)c2NetworkMetricsReportFrequency:(id)arg0 ;
-(NSUInteger)c2NetworkMetricsReportFrequencyBase:(id)arg0 ;
-(NSUInteger)maxBatchSize:(id)arg0 ;
-(NSUInteger)maxInlineMergeableDeltaSize:(id)arg0 ;
-(id)chunkProfileConfigurationDefaultProfilePolicy:(id)arg0 ;
-(id)chunkProfileConfigurationFileExtensionToProfileMap:(id)arg0 ;
-(id)chunkProfileConfigurationVersion:(id)arg0 ;
-(id)cloudMediaProcessingPublicKeyURLString:(id)arg0 ;
-(id)dictionaryPropertyEncoding;
-(id)iCloudAppSiteAssociationData;
-(id)initWithPropertyDictionary:(id)arg0 ;
-(id)initWithValues:(id)arg0 ;
-(id)suggestedMergeableDeltaSize:(id)arg0 ;
-(id)transcodeServerPublicKeyURLs:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 forContainerID:(id)arg1 ;
-(id)valuesForContainerID:(id)arg0 ;


@end


#endif