// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSENGINE_H
#define MAPSSUGGESTIONSENGINE_H

@class GEOAutomobileOptions, NSString;
@protocol MapsSuggestionsObject, MapsSuggestionsResourceDepot, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MapsSuggestionsManager.h"

@interface MapsSuggestionsEngine : NSObject <MapsSuggestionsObject, MapsSuggestionsResourceDepot>

 {
    id<MapsSuggestionsResourceDepot> *_resourceDepot;
    MapsSuggestionsManager *_entryManager;
    NSObject<OS_dispatch_queue> *_optionsSerialQueue;
}


@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions; // ivar: _automobileOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int mapType; // ivar: _mapType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


-(BOOL)loadStorageFromFile:(id)arg0 ;
// -(BOOL)loadStorageFromFile:(id)arg0 callback:(id)arg1 callbackQueue:(unk)arg2  ;
// -(BOOL)oneShotTopSuggestionsForSink:(id)arg0 count:(NSUInteger)arg1 transportType:(int)arg2 callback:(id)arg3 onQueue:(unk)arg4  ;
-(BOOL)removeEntry:(id)arg0 behavior:(NSInteger)arg1 handler:(id)arg2 ;
-(BOOL)saveStorageToFile:(id)arg0 callback:(id)arg1 ;
// -(BOOL)topSuggestionsForSink:(id)arg0 count:(NSUInteger)arg1 transportType:(int)arg2 callback:(id)arg3 onQueue:(unk)arg4  ;
// -(BOOL)topSuggestionsFromStorageFile:(id)arg0 sink:(id)arg1 count:(NSUInteger)arg2 transportType:(int)arg3 callback:(id)arg4 onQueue:(unk)arg5  ;
-(id)initWithEntryManager:(id)arg0 resourceDepot:(id)arg1 ;
-(id)manager;
-(id)oneContacts;
-(id)oneEventKit;
-(id)oneFavorites;
-(id)oneFlightUpdater;
-(id)oneInsights;
-(id)oneMapsSync;
-(id)oneNetworkRequester;
-(id)onePortrait;
-(id)oneRoutine;
-(id)oneSourceDelegate;
-(id)oneUser;
-(id)oneVirtualGarage;
-(id)strategy;
-(id)topSuggestionsForSink:(id)arg0 count:(NSUInteger)arg1 transportType:(int)arg2 ;
-(id)topSuggestionsFromStorageFile:(id)arg0 sink:(id)arg1 count:(NSUInteger)arg2 transportType:(int)arg3 ;
-(void)addAdditionalFilter:(id)arg0 forSink:(id)arg1 ;
-(void)attachSink:(id)arg0 ;
-(void)detachSink:(id)arg0 ;
-(void)feedbackForContact:(id)arg0 action:(NSInteger)arg1 ;
-(void)feedbackForEntry:(id)arg0 action:(NSInteger)arg1 ;
-(void)feedbackForMapItem:(id)arg0 action:(NSInteger)arg1 ;
-(void)hintRefreshOfType:(NSInteger)arg0 ;
-(void)removeAdditionalFilter:(id)arg0 forSink:(id)arg1 ;


@end


#endif