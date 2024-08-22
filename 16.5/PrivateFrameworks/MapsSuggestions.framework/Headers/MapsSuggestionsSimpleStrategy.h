// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSSIMPLESTRATEGY_H
#define MAPSSUGGESTIONSSIMPLESTRATEGY_H

@class NSMutableSet, NSMutableArray, NSString;
@protocol MapsSuggestionsStrategy;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsManager.h"

@interface MapsSuggestionsSimpleStrategy : NSObject <MapsSuggestionsStrategy>

 {
    NSMutableSet *_preFilters;
    NSMutableArray *_improvers;
    NSMutableArray *_dedupers;
    NSMutableSet *_postFilters;
    NSMutableArray *_previousResults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MapsSuggestionsManager *manager; // ivar: _manager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)postFiltersKept:(id)arg0 ;
-(BOOL)preFiltersKept:(id)arg0 ;
-(id)init;
-(id)topSuggestionsWithSourceEntries:(id)arg0 error:(*id)arg1 ;
-(void)addDeduper:(id)arg0 ;
-(void)addImprover:(id)arg0 ;
-(void)addPostFilter:(id)arg0 ;
-(void)addPreFilter:(id)arg0 ;
-(void)clearData;
-(void)removeAllDedupers;
-(void)removeAllFilters;
-(void)removeAllImprovers;
-(void)removeFilter:(id)arg0 ;


@end


#endif