// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSCOMPOSITESOURCE_H
#define MAPSSUGGESTIONSCOMPOSITESOURCE_H

@class NSMutableSet, NSMutableDictionary, NSString;
@protocol MapsSuggestionsSource, MapsSuggestionsSourceDelegate, OS_dispatch_source;


#import "MapsSuggestionsBaseSource.h"
#import "MapsSuggestionsSuppressor.h"

@interface MapsSuggestionsCompositeSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegate>

 {
    NSMutableSet *_sources;
    NSMutableDictionary *_nextUpdateTimes;
    Queue _queue;
    NSObject<OS_dispatch_source> *_updateTimer;
    MapsSuggestionsSuppressor *_suppressor;
    NSMutableDictionary *_hasStarted;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL running; // ivar: _running
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)isEnabled;
+(NSUInteger)disposition;
-(BOOL)addChildSource:(id)arg0 ;
-(BOOL)attachSource:(id)arg0 ;
-(BOOL)canProduceEntriesOfType:(NSInteger)arg0 ;
-(BOOL)detachSource:(id)arg0 ;
-(BOOL)removeChildSource:(id)arg0 ;
-(CGFloat)test_suppressionDurationForBehavior:(NSInteger)arg0 type:(NSInteger)arg1 ;
-(CGFloat)updateSuggestionEntriesOfType:(NSInteger)arg0 handler:(id)arg1 ;
-(CGFloat)updateSuggestionEntriesWithHandler:(id)arg0 ;
-(NSUInteger)addOrUpdateSuggestionEntries:(id)arg0 source:(id)arg1 ;
-(char)removeEntry:(id)arg0 behavior:(NSInteger)arg1 handler:(id)arg2 ;
-(id)children;
-(id)initFromResourceDepot:(id)arg0 name:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 name:(id)arg1 ;
-(id)sources;
-(id)test_dateUntilSuppressedEntry:(id)arg0 ;
-(void)dealloc;
-(void)feedbackForContact:(id)arg0 action:(NSInteger)arg1 ;
-(void)feedbackForEntry:(id)arg0 action:(NSInteger)arg1 ;
-(void)feedbackForMapItem:(id)arg0 action:(NSInteger)arg1 ;
-(void)start;
-(void)stop;
-(void)test_awaitQueue;
-(void)test_resetSuppressions;
-(void)test_sync;


@end


#endif