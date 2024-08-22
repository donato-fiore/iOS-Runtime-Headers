// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXDISCOVERYCONTROLLER_H
#define _EXDISCOVERYCONTROLLER_H

@class NSMutableDictionary, NSString, LSObserver;
@protocol LSObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _EXDiscoveryController : NSObject <LSObserverDelegate>



@property (retain) NSMutableDictionary *activeQueries; // ivar: _activeQueries
@property os_unfair_lock_s activeQueriesLock; // ivar: _activeQueriesLock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) LSObserver *observer; // ivar: _observer
@property (retain) NSObject<OS_dispatch_queue> *queryQueue; // ivar: _queryQueue
@property (retain) id *settingsStoreToken; // ivar: _settingsStoreToken
@property (readonly) Class superclass;


+(BOOL)canRunQuery:(id)arg0 error:(*id)arg1 ;
+(id)sharedInstance;
-(id)extensionsMatchingQueries:(id)arg0 ;
-(id)extensionsMatchingQuery:(id)arg0 ;
-(id)init;
-(void)addActiveQueryObserver:(id)arg0 query:(id)arg1 ;
-(void)observerDidObserveDatabaseChange:(id)arg0 ;
-(void)removeActiveQueryObserver:(id)arg0 query:(id)arg1 ;


@end


#endif