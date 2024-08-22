// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPMETRICSUTILS_H
#define PPMETRICSUTILS_H


#import <Foundation/Foundation.h>


@interface PPMetricsUtils : NSObject



+(id)filterBundleId:(id)arg0 ;
+(id)filterGroupIdAllowance:(id)arg0 ;
+(id)loggingQueue;
+(id)stringifyDomain:(unsigned char)arg0 ;
+(id)stringifyFeedbackDomainStatus:(unsigned char)arg0 ;
+(id)stringifyFeedbackType:(unsigned int)arg0 ;
+(id)truncatedClientBundleId:(id)arg0 ;
+(id)truncatedClientBundleIdOrCurrentBundleId:(id)arg0 ;
+(int)mapDomainForPET2:(unsigned char)arg0 ;
+(int)mapLocationAlgorithmForPET2:(unsigned short)arg0 ;
+(int)mapNamedEntityAlgorithmForPET2:(NSUInteger)arg0 ;
+(int)mapNamedEntityCategory:(NSUInteger)arg0 ;
+(int)mapTopicAlgorithmForPET2:(NSUInteger)arg0 ;
+(int)mapTopicDonationErrorForPET2:(NSInteger)arg0 ;
+(int)sourceForBundleId:(id)arg0 ;


@end


#endif