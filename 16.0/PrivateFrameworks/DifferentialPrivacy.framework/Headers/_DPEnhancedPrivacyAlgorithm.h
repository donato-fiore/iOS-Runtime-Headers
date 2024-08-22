// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPENHANCEDPRIVACYALGORITHM_H
#define _DPENHANCEDPRIVACYALGORITHM_H


#import <Foundation/Foundation.h>


@interface _DPEnhancedPrivacyAlgorithm : NSObject



+(BOOL)isEnhancedPrivacyAlgorithm:(id)arg0 ;
+(BOOL)isMetadataValid:(id)arg0 ;
+(BOOL)verifyEnhancedDPParamsForKey:(id)arg0 withMetadata:(id)arg1 ;
+(id)allowedDataTypesForKey:(id)arg0 withMetadata:(id)arg1 ;
+(id)findMultipleDonationForKey:(id)arg0 inRecords:(id)arg1 ;


@end


#endif