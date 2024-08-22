// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSREGIONEVALUATOR_H
#define _UIFOCUSREGIONEVALUATOR_H


#import <Foundation/Foundation.h>


@interface _UIFocusRegionEvaluator : NSObject



+(id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)arg0 occludingRegions:(id)arg1 baseRegionsCanOccludeEachOther:(BOOL)arg2 inSnapshot:(id)arg3 ;
+(id)_visibleSubregionsWhenRegion:(id)arg0 occludedByRegion:(id)arg1 inSnapshot:(id)arg2 ;
+(id)regionsByEvaluatingOcclusionsForRegions:(id)arg0 inSnapshot:(id)arg1 ;
+(id)regionsByOccludingRegions:(id)arg0 beneathRegions:(id)arg1 inSnapshot:(id)arg2 ;
+(id)subregionFromRegion:(id)arg0 withSnapshotFrame:(struct CGRect )arg1 inSnapshot:(id)arg2 ;
+(struct CGRect )frameForRegion:(id)arg0 inCoordinateSpace:(id)arg1 ;


@end


#endif