// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSROUTINESOURCE_H
#define MAPSSUGGESTIONSROUTINESOURCE_H

@class NSString;
@protocol MapsSuggestionsParkedCarObserver, MapsSuggestionsSource, MapsSuggestionsPreloadableSource, MapsSuggestionsSourceDelegate;


#import "MapsSuggestionsBaseSource.h"
#import "MapsSuggestionsRoutine.h"

@interface MapsSuggestionsRoutineSource : MapsSuggestionsBaseSource <MapsSuggestionsParkedCarObserver, MapsSuggestionsSource, MapsSuggestionsPreloadableSource>

 {
    MapsSuggestionsRoutine *_routine;
    Queue _queue;
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
-(char)suggestionsEntriesAtLocation:(id)arg0 period:(id)arg1 handler:(id)arg2 ;
-(id)initFromResourceDepot:(id)arg0 name:(id)arg1 ;
-(id)initWithRoutine:(id)arg0 delegate:(id)arg1 name:(id)arg2 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)updatedParkedCar;


@end


#endif