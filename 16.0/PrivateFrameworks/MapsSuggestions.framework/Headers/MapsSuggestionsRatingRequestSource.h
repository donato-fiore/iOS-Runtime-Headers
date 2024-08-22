// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSRATINGREQUESTSOURCE_H
#define MAPSSUGGESTIONSRATINGREQUESTSOURCE_H

@class NSString;
@protocol MapsSuggestionsBudgetDelegate, MapsSuggestionsSource, OS_dispatch_queue, MapsSuggestionsSourceDelegate;


#import "MapsSuggestionsBaseSource.h"
#import "MapsSuggestionsMapsSync.h"
#import "MapsSuggestionsRoutine.h"
#import "MapsSuggestionsBudget.h"

@interface MapsSuggestionsRatingRequestSource : MapsSuggestionsBaseSource <MapsSuggestionsBudgetDelegate, MapsSuggestionsSource>

 {
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsMapsSync *_mapsSync;
    MapsSuggestionsRoutine *_routine;
    MapsSuggestionsBudget *_budget;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)isEnabled;
+(NSUInteger)disposition;
-(BOOL)canProduceEntriesOfType:(NSInteger)arg0 ;
-(CGFloat)updateSuggestionEntriesWithHandler:(id)arg0 ;
-(char)removeEntry:(id)arg0 behavior:(NSInteger)arg1 handler:(id)arg2 ;
-(id)initFromResourceDepot:(id)arg0 name:(id)arg1 ;
-(id)initWithMapsSync:(id)arg0 routine:(id)arg1 delegate:(id)arg2 name:(id)arg3 ;
-(id)readBudgetState;
-(void)start;
-(void)stop;
-(void)writeBudgetState:(id)arg0 ;


@end


#endif