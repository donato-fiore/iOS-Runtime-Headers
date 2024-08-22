// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMDACHANGETRACKINGHELPER_H
#define REMDACHANGETRACKINGHELPER_H

@class NSMutableDictionary, NSString, NSArray;
@protocol REMDAAccountProviding;

#import <Foundation/Foundation.h>

#import "REMChangeSet.h"
#import "REMChangeToken.h"
#import "REMChangeTrackingState.h"
#import "REMObjectID.h"
#import "REMChangeTracking.h"
#import "REMStore.h"

@interface REMDAChangeTrackingHelper : NSObject

@property (retain, nonatomic) REMChangeSet *_debug_mockChangeSet; // ivar: __debug_mockChangeSet
@property (readonly, nonatomic) NSObject<REMDAAccountProviding> *account; // ivar: _account
@property (retain, nonatomic) REMChangeToken *cached_currentChangeToken; // ivar: _cached_currentChangeToken
@property (retain, nonatomic) REMChangeTrackingState *cached_currentTrackingState; // ivar: _cached_currentTrackingState
@property (retain, nonatomic) NSMutableDictionary *cached_insertedModelObjectResultsByModelClassName; // ivar: _cached_insertedModelObjectResultsByModelClassName
@property (retain, nonatomic) REMObjectID *cached_remAccountObjectID; // ivar: _cached_remAccountObjectID
@property (retain, nonatomic) NSMutableDictionary *cached_updatedModelObjectResultsByModelClassName; // ivar: _cached_updatedModelObjectResultsByModelClassName
@property (retain, nonatomic) REMChangeSet *changeSet; // ivar: _changeSet
@property (retain, nonatomic) REMChangeTracking *changeTracking; // ivar: _changeTracking
@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (retain, nonatomic) NSArray *entityNames; // ivar: _entityNames
@property (retain, nonatomic) REMStore *remStore; // ivar: _remStore
@property (retain, nonatomic) REMChangeToken *sinceToken; // ivar: _sinceToken
@property (retain, nonatomic) REMChangeToken *upToToken; // ivar: _upToToken


+(BOOL)shouldIgnoreChangeOfModelClassProperties:(Class)arg0 withChangeObject:(id)arg1 ;
-(BOOL)compareCurrentChangeTokenToLastConsumedWithResult:(*NSInteger)arg0 error:(*id)arg1 ;
-(NSInteger)_changeTypeMaskFromChangeType:(NSInteger)arg0 ;
-(id)_cachedModeObjectResultsForModelClass:(Class)arg0 changeType:(NSInteger)arg1 ;
-(id)_changedModelObjectsOfClass:(Class)arg0 ofChangeTypes:(NSInteger)arg1 shouldOutputFetchedModels:(BOOL)arg2 ;
-(id)_debug_currentChangeTokenWithError:(*id)arg0 ;
-(id)_fetchModelObjectOfClass:(Class)arg0 withObjectID:(id)arg1 includeConcealedObjects:(BOOL)arg2 ;
-(id)_fetchModelObjectsOfClass:(Class)arg0 withObjectIDs:(id)arg1 ;
-(id)_rem_changeTracking:(id)arg0 ;
-(id)changedIdentifiersOfModelClass:(Class)arg0 ofChangeType:(NSInteger)arg1 ;
-(id)changedModelObjectsOfModelClass:(Class)arg0 ofChangeType:(NSInteger)arg1 ;
-(id)currentChangeTokenWithError:(*id)arg0 ;
-(id)fetchAndInitializeChangeTrackingStateIfNeeded;
-(id)fetchChangesSinceLastConsumed;
-(id)initWithREMDAAccount:(id)arg0 clientName:(id)arg1 withREMStore:(id)arg2 ;
-(id)initWithREMDAAccount:(id)arg0 clientName:(id)arg1 withREMStore:(id)arg2 entityNames:(id)arg3 ;
-(void)_debug_resetCaches;
-(void)_debug_setMockChangeSet:(id)arg0 ;
// -(void)_handleIsConcealedUpdatesInChange:(id)arg0 ofModelClass:(Class)arg1 forClientID:(id)arg2 concealedHandler:(id)arg3 unconcealedHandler:(unk)arg4  ;
-(void)_setCachedModeObjectResults:(id)arg0 forModelClass:(Class)arg1 changeType:(NSInteger)arg2 ;
-(void)clearCachedModelObjectResultsForModelClass:(Class)arg0 ;
-(void)markChangesConsumed;
-(void)markChangesConsumed:(BOOL)arg0 ;


@end


#endif