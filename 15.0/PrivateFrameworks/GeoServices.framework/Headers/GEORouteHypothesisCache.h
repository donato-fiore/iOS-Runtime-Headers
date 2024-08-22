// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOROUTEHYPOTHESISCACHE_H
#define GEOROUTEHYPOTHESISCACHE_H

@class NSString;
@protocol GEOKeyBagProtectedDataDidBecomeAvailableObserver;

#import <Foundation/Foundation.h>

#import "GEONavdCachePersistenceManager.h"

@interface GEORouteHypothesisCache : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver>

 {
    GEONavdCachePersistenceManager *_persistenceManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)nextRefreshTimeStamp;
-(NSInteger)numberOfEntriesOnDisk;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)loadEntryForRowId:(NSInteger)arg0 ;
-(id)loadValueForKey:(id)arg0 ;
-(id)rowIdsOfEntriesBeforeTimeStamp:(CGFloat)arg0 ;
-(void)_removeAllEntries;
-(void)dealloc;
-(void)enumerateAllForCacheEntriesWithHandler:(id)arg0 ;
-(void)protectedDataDidBecomeAvailable:(id)arg0 ;
-(void)removeKey:(id)arg0 value:(id)arg1 ;
-(void)saveValue:(id)arg0 forKey:(id)arg1 ;
-(void)tearDown;


@end


#endif