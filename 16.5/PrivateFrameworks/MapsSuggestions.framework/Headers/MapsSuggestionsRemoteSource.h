// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSREMOTESOURCE_H
#define MAPSSUGGESTIONSREMOTESOURCE_H

@class NSXPCConnection, NSString;
@protocol MapsSuggestionsSourceDelegateProxy, MapsSuggestionsSource, OS_dispatch_queue, MapsSuggestionsSourceDelegate;


#import "MapsSuggestionsBaseSource.h"

@interface MapsSuggestionsRemoteSource : MapsSuggestionsBaseSource <MapsSuggestionsSourceDelegateProxy, MapsSuggestionsSource>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
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
-(CGFloat)updateSuggestionEntriesOfType:(NSInteger)arg0 handler:(id)arg1 ;
-(CGFloat)updateSuggestionEntriesWithHandler:(id)arg0 ;
-(id)initFromResourceDepot:(id)arg0 name:(id)arg1 ;
-(void)Debug_updateGraph;
-(void)addOrUpdateSuggestionEntriesData:(id)arg0 sourceNameData:(id)arg1 handler:(id)arg2 ;
-(void)dealloc;
-(void)feedbackForContact:(id)arg0 action:(NSInteger)arg1 ;
-(void)feedbackForEntry:(id)arg0 action:(NSInteger)arg1 ;
-(void)feedbackForMapItem:(id)arg0 action:(NSInteger)arg1 ;
-(void)start;
-(void)stop;


@end


#endif