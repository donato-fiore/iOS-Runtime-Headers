// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSRECOMMENDATIONMEDIAITEMGROUP_H
#define NMSRECOMMENDATIONMEDIAITEMGROUP_H



#import "NMSMediaItemGroup.h"

@interface NMSRecommendationMediaItemGroup : NMSMediaItemGroup



-(BOOL)isEstimate;
-(id)_fetchDownloadInfoForItems:(id)arg0 ;
-(id)identifiersForContainerType:(NSUInteger)arg0 ;
-(id)itemList;
-(id)recommendation;


@end


#endif