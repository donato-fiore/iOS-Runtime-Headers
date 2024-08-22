// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDATABASERESULT_H
#define WFDATABASERESULT_H

@class NSNumber, NSArray, NSError, NSSet, NSHashTable, NSPredicate, WFCoreDataResultState;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFDatabase.h"
#import "WFDatabaseResultFetchOperation.h"

@interface WFDatabaseResult : NSObject

@property (retain, nonatomic) NSNumber *cachedCount; // ivar: _cachedCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, nonatomic) NSArray *descriptors; // ivar: _descriptors
@property (readonly, nonatomic) NSError *fetchError; // ivar: _fetchError
@property (readonly, nonatomic) WFDatabaseResultFetchOperation *fetchOperation; // ivar: _fetchOperation
@property (copy, nonatomic) NSSet *lastFetchedObjectIDs; // ivar: _lastFetchedObjectIDs
@property (readonly, nonatomic) NSArray *observers;
@property (readonly, nonatomic) NSHashTable *observersTable; // ivar: _observersTable
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, copy, nonatomic) NSSet *relationshipKeysAffectingDescriptors; // ivar: _relationshipKeysAffectingDescriptors
@property (copy, nonatomic) NSPredicate *searchPredicate; // ivar: _searchPredicate
@property (readonly, nonatomic) WFCoreDataResultState *state;
@property (readonly, nonatomic) NSArray *staticDescriptors; // ivar: _staticDescriptors


-(id)description;
-(id)initWithDatabase:(id)arg0 fetchOperation:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 fetchOperation:(id)arg1 relationshipKeysAffectingDescriptors:(id)arg2 ;
-(id)initWithDatabase:(id)arg0 fetchRequest:(id)arg1 ;
-(id)initWithDatabase:(id)arg0 fetchRequest:(id)arg1 relationshipKeysAffectingDescriptors:(id)arg2 ;
-(id)initWithStaticDescriptors:(id)arg0 ;
-(void)invalidateCacheWithCompletionHandler:(id)arg0 ;
-(void)notifyObserversAboutChange:(id)arg0 fromPreviousDescriptors:(id)arg1 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif