// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSSHORTCUTSOURCE_H
#define MAPSSUGGESTIONSSHORTCUTSOURCE_H

@class NSString;
@protocol MapsSuggestionsMeCardObserver, MapsSuggestionsSource, OS_dispatch_queue, MapsSuggestionsSourceDelegate;


#import "MapsSuggestionsBaseSource.h"
#import "MapsSuggestionsShortcutManager.h"
#import "MapsSuggestionsCanKicker.h"

@interface MapsSuggestionsShortcutSource : MapsSuggestionsBaseSource <MapsSuggestionsMeCardObserver, MapsSuggestionsSource>

 {
    NSObject<OS_dispatch_queue> *_queue;
    MapsSuggestionsShortcutManager *_shortcutManager;
    MapsSuggestionsCanKicker *_updateForcer;
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
-(id)initWithShortcutManager:(id)arg0 delegate:(id)arg1 name:(id)arg2 ;
-(void)_renameDuplicateMeCardTypes:(id)arg0 ;
-(void)meCardReader:(id)arg0 didUpdateMeCard:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif