// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHAFFINITYGROUPQUERY_H
#define SHAFFINITYGROUPQUERY_H


#import <Foundation/Foundation.h>

#import "SHInsightsPersistenceController.h"

@interface SHAffinityGroupQuery : NSObject

@property (retain, nonatomic) SHInsightsPersistenceController *dataManager; // ivar: _dataManager


+(void)affinityGroupsForLocation:(id)arg0 atDate:(id)arg1 completionHandler:(id)arg2 ;
+(void)affinityGroupsFromReferenceProductIDs:(id)arg0 filteredByTasteProductIDs:(id)arg1 completionHandler:(id)arg2 ;
-(id)affinityGroupsAtCohesionLevel:(NSInteger)arg0 forQuery:(id)arg1 tracks:(id)arg2 filteredBy:(id)arg3 ;
-(id)filterQueryTracks:(id)arg0 byTracksWithinCluster:(id)arg1 ;
-(id)init;
-(id)initWithDataManager:(id)arg0 ;
-(void)affinityGroupsForLocation:(id)arg0 atDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)affinityGroupsFromReferenceProductIDs:(id)arg0 filteredByTasteProductIDs:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif