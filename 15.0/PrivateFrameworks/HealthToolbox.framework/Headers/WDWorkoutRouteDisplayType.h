// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDWORKOUTROUTEDISPLAYTYPE_H
#define WDWORKOUTROUTEDISPLAYTYPE_H

@class HKDisplayType;



@interface WDWorkoutRouteDisplayType : HKDisplayType



+(id)sharedDisplayType;
-(NSInteger)categoryIdentifier;
-(id)sampleType;
-(id)wd_listViewControllerDataProviderWithProfile:(id)arg0 unitController:(id)arg1 isHierarchical:(BOOL)arg2 ;


@end


#endif