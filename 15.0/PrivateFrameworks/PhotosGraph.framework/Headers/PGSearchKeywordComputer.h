// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGSEARCHKEYWORDCOMPUTER_H
#define PGSEARCHKEYWORDCOMPUTER_H

@class NSDictionary, NSLocale, CLSHolidayCalendarEventService;

#import <Foundation/Foundation.h>

#import "PGGraph.h"
#import "PGSearchComputationCache.h"

@interface PGSearchKeywordComputer : NSObject {
    PGGraph *_graph;
    NSDictionary *_personLocalIdentifiersBySocialGroupUUID;
    NSLocale *_userLocale;
    CLSHolidayCalendarEventService *_holidayService;
}


@property (readonly, nonatomic) PGSearchComputationCache *searchComputationCache; // ivar: _searchComputationCache


-(id)_holidayNodesForTimedEvent:(id)arg0 ;
-(id)_personLocalIdentifiersBySocialGroupUUIDWithPhotoLibrary:(id)arg0 graph:(id)arg1 ;
-(id)_personUUIDsInSocialGroupNode:(id)arg0 photoLibrary:(id)arg1 ;
-(id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)arg0 ofType:(NSUInteger)arg1 progressBlock:(id)arg2 ;
-(id)initWithGraph:(id)arg0 searchComputationCache:(id)arg1 ;
-(id)searchKeywordsByEventWithEventUUIDs:(id)arg0 ofType:(NSUInteger)arg1 photoLibrary:(id)arg2 progressBlock:(id)arg3 ;
-(id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)arg0 ofType:(NSUInteger)arg1 inPhotoLibrary:(id)arg2 isFullAnalysis:(BOOL)arg3 progressBlock:(id)arg4 ;
-(void)_enumerateBusinessAndPublicEventKeywordsForEvent:(id)arg0 usingBlock:(id)arg1 ;
-(void)_enumerateEventNodesForUUIDs:(id)arg0 ofType:(NSUInteger)arg1 usingBlock:(id)arg2 ;


@end


#endif