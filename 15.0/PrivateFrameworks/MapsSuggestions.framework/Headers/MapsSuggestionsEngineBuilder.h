// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSENGINEBUILDER_H
#define MAPSSUGGESTIONSENGINEBUILDER_H

@class NSString, NSMutableArray, NSMutableSet, NSMutableDictionary;
@protocol MapsSuggestionsObject, MapsSuggestionsLocationUpdater, MapsSuggestionsFullResourceDepot, MapsSuggestionsStrategy;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsEngineBuilder : NSObject <MapsSuggestionsObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *excludeDedupers; // ivar: _excludeDedupers
@property (retain, nonatomic) NSMutableArray *excludeImprovers; // ivar: _excludeImprovers
@property (retain, nonatomic) NSMutableSet *excludePostFilters; // ivar: _excludePostFilters
@property (retain, nonatomic) NSMutableSet *excludePreFilters; // ivar: _excludePreFilters
@property (nonatomic) BOOL hasTracker; // ivar: _hasTracker
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *includeDedupers; // ivar: _includeDedupers
@property (retain, nonatomic) NSMutableArray *includeImprovers; // ivar: _includeImprovers
@property (retain, nonatomic) NSMutableSet *includePostFilters; // ivar: _includePostFilters
@property (retain, nonatomic) NSMutableSet *includePreFilters; // ivar: _includePreFilters
@property (retain, nonatomic) NSObject<MapsSuggestionsLocationUpdater> *locationUpdater; // ivar: _locationUpdater
@property (retain, nonatomic) NSObject<MapsSuggestionsFullResourceDepot> *resourceDepot; // ivar: _resourceDepot
@property (retain, nonatomic) NSMutableArray *sourceClasses; // ivar: _sourceClasses
@property (retain, nonatomic) NSObject<MapsSuggestionsStrategy> *strategy; // ivar: _strategy
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *titleFormatters; // ivar: _titleFormatters
@property (readonly, nonatomic) NSString *uniqueName;


+(id)forDevice;
+(id)simpleStrategy;
-(id)build;
-(id)init;
-(id)withDedupers:(id)arg0 ;
-(id)withFavorites;
-(id)withImprovers:(id)arg0 ;
-(id)withLocationUpdater:(id)arg0 ;
-(id)withPostFilters:(id)arg0 ;
-(id)withPreFilters:(id)arg0 ;
-(id)withResourceDepot:(id)arg0 ;
-(id)withSourceClasses:(id)arg0 ;
-(id)withTitleFormatter:(id)arg0 forType:(NSInteger)arg1 ;
-(id)withoutTracker;


@end


#endif