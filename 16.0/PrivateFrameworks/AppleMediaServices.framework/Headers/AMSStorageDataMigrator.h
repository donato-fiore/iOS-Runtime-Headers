// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSSTORAGEDATAMIGRATOR_H
#define AMSSTORAGEDATAMIGRATOR_H


#import <Foundation/Foundation.h>


@interface AMSStorageDataMigrator : NSObject



+(void)_migrateDeviceOfferEligibilityWithDatabase:(id)arg0 ;
+(void)_migrateSharedStoreReviewWithDatabase:(id)arg0 ;
+(void)migrateStorageToDefaultsForNonAMSInternal:(id)arg0 ;


@end


#endif