// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCWATCHLIST_H
#define SCWATCHLIST_H

@class NSHashTable;
@protocol SCKDatabaseObserver, OS_dispatch_queue, SCWatchlistDefaultsProviding, SCWatchlistMetadataProviding;

#import <Foundation/Foundation.h>

#import "SCKDatabase.h"
#import "SCKStartupQueue.h"

@interface SCWatchlist : NSObject <SCKDatabaseObserver>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) SCKDatabase *database; // ivar: _database
@property (retain, nonatomic) NSObject<SCWatchlistDefaultsProviding> *defaultsProvider; // ivar: _defaultsProvider
@property (retain, nonatomic) NSObject<SCWatchlistMetadataProviding> *metadataProvider; // ivar: _metadataProvider
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) SCKStartupQueue *startupQueue; // ivar: _startupQueue


+(id)supportedCommands;
+(id)zoneMergeHandler;
+(id)zoneSchema;
-(id)_sortedStocks:(id)arg0 withSymbolOrder:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 metadataProvider:(id)arg1 defaults:(id)arg2 ;
-(id)initWithDatabase:(id)arg0 metadataProvider:(id)arg1 defaultsProvider:(id)arg2 ;
-(void)_enqueueStartupSequence;
-(void)addObserver:(id)arg0 ;
-(void)addStock:(id)arg0 completion:(id)arg1 ;
-(void)database:(id)arg0 didChangeZone:(id)arg1 from:(id)arg2 to:(id)arg3 ;
-(void)fetchStocksWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeStock:(id)arg0 completion:(id)arg1 ;
-(void)removeSymbol:(id)arg0 completion:(id)arg1 ;
-(void)reorderStock:(id)arg0 toIndex:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)reorderSymbol:(id)arg0 afterSymbol:(id)arg1 completion:(id)arg2 ;
-(void)replaceSymbol:(id)arg0 withSymbol:(id)arg1 completion:(id)arg2 ;
-(void)synchronize;


@end


#endif