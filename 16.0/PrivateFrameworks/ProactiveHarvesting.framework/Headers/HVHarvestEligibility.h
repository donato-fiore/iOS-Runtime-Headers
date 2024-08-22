// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HVHARVESTELIGIBILITY_H
#define HVHARVESTELIGIBILITY_H


#import <Foundation/Foundation.h>


@interface HVHarvestEligibility : NSObject



+(BOOL)searchableItemIsEligibleForDeferredHarvesting:(id)arg0 ;
+(BOOL)searchableItemIsEligibleForDissectorPipeline:(id)arg0 targetPluginsCustomAttributeName:(id)arg1 ;
+(BOOL)searchableItemIsEligibleForHarvesting:(id)arg0 eligibleExceptForAge:(*BOOL)arg1 ;
// +(BOOL)searchableItemIsEligibleForHarvestingWithGetterBlock:(id)arg0 bundleIdentifier:(unk)arg1 eligibleExceptForAge:(id)arg2  ;
// +(BOOL)searchableItemIsStoredEncryptedWithGetterBlock:(id)arg0 bundleIdentifier:(unk)arg1  ;


@end


#endif