// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTSATISFACTIONOVERRIDESDATASOURCE_H
#define HKFEATUREAVAILABILITYREQUIREMENTSATISFACTIONOVERRIDESDATASOURCE_H



#import "HKUserDefaultsDataSource.h"

@interface HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource : HKUserDefaultsDataSource



-(void)registerObserver:(id)arg0 forFeature:(id)arg1 requirement:(id)arg2 newValueHandler:(id)arg3 ;
-(void)unregisterObserver:(id)arg0 forFeature:(id)arg1 requirement:(id)arg2 ;


@end


#endif