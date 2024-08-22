// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDHEARTBEATSEQUENCEDISPLAYTYPE_H
#define WDHEARTBEATSEQUENCEDISPLAYTYPE_H

@class HKDisplayType;



@interface WDHeartbeatSequenceDisplayType : HKDisplayType



+(id)sharedDisplayType;
-(NSInteger)categoryIdentifier;
-(id)sampleType;
-(id)wd_listViewControllerDataProviderWithProfile:(id)arg0 unitController:(id)arg1 isHierarchical:(BOOL)arg2 ;


@end


#endif