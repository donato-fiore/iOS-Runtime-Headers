// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUHOMEFEATUREONBOARDER_H
#define HUHOMEFEATUREONBOARDER_H

@class NSSet, HMHome;


#import "HUFeatureOnboarder.h"

@interface HUHomeFeatureOnboarder : HUFeatureOnboarder

@property (retain, nonatomic) NSSet *devices; // ivar: _devices
@property (retain, nonatomic) HMHome *home; // ivar: _home


-(id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg0 usageOptions:(id)arg1 ;
-(id)getPostProcessingFlowsForResults:(id)arg0 ;
-(id)initWithFeatures:(id)arg0 home:(id)arg1 devices:(id)arg2 usageOptions:(id)arg3 ;
-(id)initWithFeatures:(id)arg0 home:(id)arg1 usageOptions:(id)arg2 ;
-(id)initWithGroupedFeatures:(id)arg0 home:(id)arg1 usageOptions:(id)arg2 ;


@end


#endif