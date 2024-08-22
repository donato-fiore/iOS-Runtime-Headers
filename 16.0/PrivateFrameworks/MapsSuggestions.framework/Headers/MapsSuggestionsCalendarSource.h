// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSCALENDARSOURCE_H
#define MAPSSUGGESTIONSCALENDARSOURCE_H

@class NSString;
@protocol MapsSuggestionsEventKitObserver, MapsSuggestionsPreloadableSource, OS_dispatch_queue, MapsSuggestionsSourceDelegate;


#import "MapsSuggestionsBaseSource.h"
#import "MapsSuggestionsEventKit.h"

@interface MapsSuggestionsCalendarSource : MapsSuggestionsBaseSource <MapsSuggestionsEventKitObserver, MapsSuggestionsPreloadableSource>

 {
    MapsSuggestionsEventKit *_eventKit;
    NSObject<OS_dispatch_queue> *_queue;
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
-(BOOL)removeEntry:(id)arg0 behavior:(NSInteger)arg1 handler:(id)arg2 ;
-(BOOL)suggestionsEntriesAtLocation:(id)arg0 period:(id)arg1 handler:(id)arg2 ;
-(CGFloat)updateSuggestionEntriesWithHandler:(id)arg0 ;
-(id)initFromResourceDepot:(id)arg0 name:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 eventKit:(id)arg1 name:(id)arg2 ;
-(void)eventKitDidChange:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif