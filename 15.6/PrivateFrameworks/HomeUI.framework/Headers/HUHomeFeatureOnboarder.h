// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUHOMEFEATUREONBOARDER_H
#define HUHOMEFEATUREONBOARDER_H

@class HMHome;


#import "HUFeatureOnboarder.h"

@interface HUHomeFeatureOnboarder : HUFeatureOnboarder

@property (retain, nonatomic) HMHome *home; // ivar: _home


-(id)_subclass_buildAllFlowGroupsFromFeatureGroups:(id)arg0 usageOptions:(id)arg1 ;
-(id)getPostProcessingFlowsForResults:(id)arg0 ;
-(id)initWithFeatures:(id)arg0 home:(id)arg1 usageOptions:(id)arg2 ;
-(id)initWithGroupedFeatures:(id)arg0 home:(id)arg1 usageOptions:(id)arg2 ;


@end


#endif