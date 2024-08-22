// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSMAPSSYNCSHORTCUTSTORAGE_H
#define MAPSSUGGESTIONSMAPSSYNCSHORTCUTSTORAGE_H

@class NSArray, NSLock, geo_isolater, NSString, _TtC8MapsSync25MapsSyncFavoriteItemQuery;
@protocol _TtP8MapsSync25MapsSyncDataQueryDelegate_, MapsSuggestionsShortcutStorage, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MapsSuggestionsMapsSyncShortcutStorage : NSObject <_TtP8MapsSync25MapsSyncDataQueryDelegate_, MapsSuggestionsShortcutStorage>

 {
    id *_changeHandler;
    NSArray *_queryContents;
    NSLock *_lock;
    BOOL _willNotify;
    BOOL _editing;
    geo_isolater *_queryIsolator;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing;
@property (nonatomic) BOOL hasAttemptedLoadingContents; // ivar: _hasAttemptedLoadingContents
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _TtC8MapsSync25MapsSyncFavoriteItemQuery *query; // ivar: _query
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;
@property (nonatomic) BOOL willNotify;


-(BOOL)addOrUpdateShortcuts:(id)arg0 handler:(id)arg1 ;
-(BOOL)loadAllShortcutsWithHandler:(id)arg0 ;
-(BOOL)moveShortcut:(id)arg0 afterShortcut:(id)arg1 handler:(id)arg2 ;
-(BOOL)moveShortcut:(id)arg0 beforeShortcut:(id)arg1 handler:(id)arg2 ;
-(BOOL)moveShortcut:(id)arg0 toIndex:(NSInteger)arg1 handler:(id)arg2 ;
-(BOOL)moveShortcutToBack:(id)arg0 handler:(id)arg1 ;
-(BOOL)moveShortcutToFront:(id)arg0 handler:(id)arg1 ;
-(BOOL)removeShortcuts:(id)arg0 handler:(id)arg1 ;
-(id)init;
-(void)queryContentsDidChangeWithQuery:(id)arg0 ;
-(void)setChangeHandler:(id)arg0 ;


@end


#endif