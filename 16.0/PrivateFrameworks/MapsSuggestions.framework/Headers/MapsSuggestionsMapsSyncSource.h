// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSMAPSSYNCSOURCE_H
#define MAPSSUGGESTIONSMAPSSYNCSOURCE_H

@class NSString;
@protocol MapsSuggestionsMapsSyncObserver, MapsSuggestionsSource, OS_dispatch_queue, MapsSuggestionsSourceDelegate;


#import "MapsSuggestionsBaseSource.h"
#import "MapsSuggestionsMapsSync.h"

@interface MapsSuggestionsMapsSyncSource : MapsSuggestionsBaseSource <MapsSuggestionsMapsSyncObserver, MapsSuggestionsSource>

 {
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsMapsSync *_mapsSync;
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
-(CGFloat)updateSuggestionEntriesWithHandler:(id)arg0 ;
-(id)initFromResourceDepot:(id)arg0 name:(id)arg1 ;
-(id)initWithMapsSync:(id)arg0 delegate:(id)arg1 name:(id)arg2 ;
-(void)awaitQueue;
-(void)mapsSync:(id)arg0 didChangeForContentType:(NSInteger)arg1 ;
-(void)start;
-(void)stop;


@end


#endif