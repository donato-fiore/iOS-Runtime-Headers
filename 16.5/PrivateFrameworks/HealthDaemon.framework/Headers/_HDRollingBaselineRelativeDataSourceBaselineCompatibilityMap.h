// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDROLLINGBASELINERELATIVEDATASOURCEBASELINECOMPATIBILITYMAP_H
#define _HDROLLINGBASELINERELATIVEDATASOURCEBASELINECOMPATIBILITYMAP_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface _HDRollingBaselineRelativeDataSourceBaselineCompatibilityMap : NSObject {
    HDProfile *_profile;
    NSDictionary *_canonicalBundleIDByBundleID;
    NSMutableDictionary *_bundleIDBySourceID;
}




+(id)_canonicalSleepingWristTemperatureBundleIDByBundleIDWithProfile:(id)arg0 ;
-(id)_bundleIDForSourceID:(NSInteger)arg0 error:(*id)arg1 ;
-(id)baselineCompatibilityIDForSourceID:(NSInteger)arg0 ;
-(id)initWithProfile:(id)arg0 quantityType:(id)arg1 ;
-(id)predicateForDataEntitiesWithSourceIDsCompatibleWithSourceID:(NSInteger)arg0 ;


@end


#endif